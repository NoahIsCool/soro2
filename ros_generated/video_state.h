// Generated by gencpp from file ros_generated/video_state.msg
// DO NOT EDIT!


#ifndef ROS_GENERATED_MESSAGE_VIDEO_STATE_H
#define ROS_GENERATED_MESSAGE_VIDEO_STATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ros_generated/video.h>

namespace ros_generated
{
template <class ContainerAllocator>
struct video_state_
{
  typedef video_state_<ContainerAllocator> Type;

  video_state_()
    : videoStates()  {
    }
  video_state_(const ContainerAllocator& _alloc)
    : videoStates(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::ros_generated::video_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ros_generated::video_<ContainerAllocator> >::other >  _videoStates_type;
  _videoStates_type videoStates;




  typedef boost::shared_ptr< ::ros_generated::video_state_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_generated::video_state_<ContainerAllocator> const> ConstPtr;

}; // struct video_state_

typedef ::ros_generated::video_state_<std::allocator<void> > video_state;

typedef boost::shared_ptr< ::ros_generated::video_state > video_statePtr;
typedef boost::shared_ptr< ::ros_generated::video_state const> video_stateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_generated::video_state_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_generated::video_state_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_generated

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'ros_generated': ['/home/soro/catkin_workspace/src/ros_generated/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_generated::video_state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_generated::video_state_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_generated::video_state_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_generated::video_state_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_generated::video_state_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_generated::video_state_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_generated::video_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3dcf61cc5d5ff8178cb4922628a129bd";
  }

  static const char* value(const ::ros_generated::video_state_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3dcf61cc5d5ff817ULL;
  static const uint64_t static_value2 = 0x8cb4922628a129bdULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_generated::video_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_generated/video_state";
  }

  static const char* value(const ::ros_generated::video_state_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_generated::video_state_<ContainerAllocator> >
{
  static const char* value()
  {
    return "video[] videoStates\n\
\n\
================================================================================\n\
MSG: ros_generated/video\n\
uint8 cameraId\n\
bool on\n\
uint8 encoding\n\
uint16 width\n\
uint16 height\n\
uint8 fps\n\
uint32 bitrate\n\
uint8 quality\n\
";
  }

  static const char* value(const ::ros_generated::video_state_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_generated::video_state_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.videoStates);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct video_state_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_generated::video_state_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_generated::video_state_<ContainerAllocator>& v)
  {
    s << indent << "videoStates[]" << std::endl;
    for (size_t i = 0; i < v.videoStates.size(); ++i)
    {
      s << indent << "  videoStates[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ros_generated::video_<ContainerAllocator> >::stream(s, indent + "    ", v.videoStates[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_GENERATED_MESSAGE_VIDEO_STATE_H