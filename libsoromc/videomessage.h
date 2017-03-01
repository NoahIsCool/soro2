// Generated by gencpp from file message_gen/video.msg
// DO NOT EDIT!


#ifndef MESSAGE_GEN_MESSAGE_VIDEO_H
#define MESSAGE_GEN_MESSAGE_VIDEO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace Soro
{
namespace Messages
{
template <class ContainerAllocator>
struct video_
{
  typedef video_<ContainerAllocator> Type;

  video_()
    : cameraId(0)
    , on(false)
    , encoding(0)
    , width(0)
    , height(0)
    , fps(0)
    , bitrate(0)
    , quality(0)  {
    }
  video_(const ContainerAllocator& _alloc)
    : cameraId(0)
    , on(false)
    , encoding(0)
    , width(0)
    , height(0)
    , fps(0)
    , bitrate(0)
    , quality(0)  {
  (void)_alloc;
    }



   typedef uint8_t _cameraId_type;
  _cameraId_type cameraId;

   typedef uint8_t _on_type;
  _on_type on;

   typedef uint8_t _encoding_type;
  _encoding_type encoding;

   typedef uint16_t _width_type;
  _width_type width;

   typedef uint16_t _height_type;
  _height_type height;

   typedef uint8_t _fps_type;
  _fps_type fps;

   typedef uint32_t _bitrate_type;
  _bitrate_type bitrate;

   typedef uint8_t _quality_type;
  _quality_type quality;




  typedef boost::shared_ptr< ::message_gen::video_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::message_gen::video_<ContainerAllocator> const> ConstPtr;

}; // struct video_

typedef ::message_gen::video_<std::allocator<void> > video;

typedef boost::shared_ptr< ::message_gen::video > videoPtr;
typedef boost::shared_ptr< ::message_gen::video const> videoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::message_gen::video_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::message_gen::video_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace Messages
} // namespace Soro

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'message_gen': ['/home/soro/catkin_workspace/MessgeGen/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::message_gen::video_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::message_gen::video_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::message_gen::video_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::message_gen::video_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::message_gen::video_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::message_gen::video_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::message_gen::video_<ContainerAllocator> >
{
  static const char* value()
  {
    return "47dd319158f05e19bfd56b17a7531da7";
  }

  static const char* value(const ::message_gen::video_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x47dd319158f05e19ULL;
  static const uint64_t static_value2 = 0xbfd56b17a7531da7ULL;
};

template<class ContainerAllocator>
struct DataType< ::message_gen::video_<ContainerAllocator> >
{
  static const char* value()
  {
    return "message_gen/video";
  }

  static const char* value(const ::message_gen::video_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::message_gen::video_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 cameraId\n\
bool on\n\
uint8 encoding\n\
uint16 width\n\
uint16 height\n\
uint8 fps\n\
uint32 bitrate\n\
uint8 quality\n\
";
  }

  static const char* value(const ::message_gen::video_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::message_gen::video_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cameraId);
      stream.next(m.on);
      stream.next(m.encoding);
      stream.next(m.width);
      stream.next(m.height);
      stream.next(m.fps);
      stream.next(m.bitrate);
      stream.next(m.quality);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct video_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::message_gen::video_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::message_gen::video_<ContainerAllocator>& v)
  {
    s << indent << "cameraId: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cameraId);
    s << indent << "on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.on);
    s << indent << "encoding: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.encoding);
    s << indent << "width: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.width);
    s << indent << "height: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.height);
    s << indent << "fps: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fps);
    s << indent << "bitrate: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.bitrate);
    s << indent << "quality: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.quality);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MESSAGE_GEN_MESSAGE_VIDEO_H
