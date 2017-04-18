// Generated by gencpp from file ros_generated/audio.msg
// DO NOT EDIT!


#ifndef ROS_GENERATED_MESSAGE_AUDIO_H
#define ROS_GENERATED_MESSAGE_AUDIO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_generated
{
template <class ContainerAllocator>
struct audio_
{
  typedef audio_<ContainerAllocator> Type;

  audio_()
    : on(false)
    , encoding(0)  {
    }
  audio_(const ContainerAllocator& _alloc)
    : on(false)
    , encoding(0)  {
  (void)_alloc;
    }



   typedef uint8_t _on_type;
  _on_type on;

   typedef uint8_t _encoding_type;
  _encoding_type encoding;




  typedef boost::shared_ptr< ::ros_generated::audio_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_generated::audio_<ContainerAllocator> const> ConstPtr;

}; // struct audio_

typedef ::ros_generated::audio_<std::allocator<void> > audio;

typedef boost::shared_ptr< ::ros_generated::audio > audioPtr;
typedef boost::shared_ptr< ::ros_generated::audio const> audioConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_generated::audio_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_generated::audio_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_generated

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'ros_generated': ['/home/soro/catkin_workspace/src/ros_generated/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ros_generated::audio_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_generated::audio_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_generated::audio_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_generated::audio_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_generated::audio_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_generated::audio_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_generated::audio_<ContainerAllocator> >
{
  static const char* value()
  {
    return "43c78e10b8eedb6ec4704611966e23c6";
  }

  static const char* value(const ::ros_generated::audio_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x43c78e10b8eedb6eULL;
  static const uint64_t static_value2 = 0xc4704611966e23c6ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_generated::audio_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_generated/audio";
  }

  static const char* value(const ::ros_generated::audio_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_generated::audio_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool on\n\
uint8 encoding\n\
";
  }

  static const char* value(const ::ros_generated::audio_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_generated::audio_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.on);
      stream.next(m.encoding);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct audio_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_generated::audio_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_generated::audio_<ContainerAllocator>& v)
  {
    s << indent << "on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.on);
    s << indent << "encoding: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.encoding);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_GENERATED_MESSAGE_AUDIO_H
