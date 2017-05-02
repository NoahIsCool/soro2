/*
 * Copyright 2017 The University of Oklahoma.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "videostreamer.h"
#include "gstreamerutil.h"
#include "soro_core/logger.h"
#include "soro_core/constants.h"

#include <Qt5GStreamer/QGlib/Connect>
#include <Qt5GStreamer/QGst/Bus>
#include <QTimer>

#include <sys/types.h>
#include <unistd.h>

#define LogTag "MediaStreamer"

namespace Soro {

VideoStreamer::VideoStreamer(QObject *parent) : QObject(parent)
{
    if (!QDBusConnection::sessionBus().isConnected())
    {
        // Not connected to d-bus
        Logger::logError(LogTag, "Not connected to D-Bus system bus");
        exit(12);
    }

    _parentInterface = new QDBusInterface(SORO_DBUS_VIDEO_PARENT_SERVICE_NAME, "/", "", QDBusConnection::sessionBus());
    if (!_parentInterface->isValid())
    {
        // Could not create interface for parent process
        Logger::logError(LogTag, "D-Bus parent interface at /mediaParent is not valid");
        exit(13);
    }

    // Register this class as a D-Bus RPC service so other processes can call our public slots
    if (!QDBusConnection::sessionBus().registerObject("/", this, QDBusConnection::ExportAllSlots))
    {
        Logger::logError(LogTag, "Cannot register as D-Bus RPC object: " + QDBusConnection::sessionBus().lastError().message());
        exit(14);
    }

    QTimer::singleShot(100, this, [this]()
    {
        _parentInterface->call(QDBus::NoBlock, "onChildReady", (qint64)getpid());
    });
}

VideoStreamer::~VideoStreamer()
{
    stopPrivate(false);
    if (_parentInterface)
    {
        delete _parentInterface;
    }
}

void VideoStreamer::stop()
{
    stopPrivate(true);
}

void VideoStreamer::stopPrivate(bool sendReady)
{
    if (_pipeline)
    {
        QGlib::disconnect(_pipeline->bus(), "message", this, &VideoStreamer::onBusMessage);
        _pipeline->setState(QGst::StateNull);
        _pipeline.clear();
        if (sendReady)
        {
            _parentInterface->call(QDBus::NoBlock, "onChildReady", getpid());
        }
    }
}

void VideoStreamer::stream(const QString &device, const QString &address, quint16 port, const QString &profile, bool vaapi)
{
    stopPrivate(false);

    _pipeline = createPipeline();

    // create gstreamer command
    QString binStr = GStreamerUtil::createRtpV4L2EncodeString(device, QHostAddress(address), port, GStreamerUtil::VideoProfile(profile), vaapi);
    QGst::BinPtr encoder = QGst::Bin::fromDescription(binStr);

    _pipeline->add(encoder);
    _pipeline->setState(QGst::StatePlaying);

    _parentInterface->call(QDBus::NoBlock, "onChildStreaming", (qint64)getpid());
}

QGst::PipelinePtr VideoStreamer::createPipeline()
{
    QGst::PipelinePtr pipeline = QGst::Pipeline::create();
    pipeline->bus()->addSignalWatch();
    QGlib::connect(pipeline->bus(), "message", this, &VideoStreamer::onBusMessage);

    return pipeline;
}

void VideoStreamer::onBusMessage(const QGst::MessagePtr & message)
{
    QByteArray errorMessage;
    switch (message->type())
    {
    case QGst::MessageEos:
        _parentInterface->call(QDBus::NoBlock, "onChildError", getpid(), "Received EOS message from GStreamer");
        stopPrivate(true);
        break;
    case QGst::MessageError:
        errorMessage = message.staticCast<QGst::ErrorMessage>()->error().message().toLatin1();
        _parentInterface->call(QDBus::NoBlock, "onChildError", getpid(), errorMessage);
        stopPrivate(true);
        break;
    default:
        break;
    }
}

} // namespace Soro
