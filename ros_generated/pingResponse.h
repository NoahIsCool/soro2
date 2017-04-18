// Generated by gencpp from file ros_generated/pingResponse.msg
// DO NOT EDIT!


#ifndef ROS_GENERATED_MESSAGE_PINGRESPONSE_H
#define ROS_GENERATED_MESSAGE_PINGRESPONSE_H


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
struct pingResponse_
{
  typedef pingResponse_<ContainerAllocator> Type;

  pingResponse_()
    : ack(0)  {
    }
  pingResponse_(const ContainerAllocator& _alloc)
    : ack(0)  {
  (void)_alloc;
    }



   typedef uint64_t _ack_type;
  _ack_type ack;




  typedef boost::shared_ptr< ::ros_generated::pingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_generated::pingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct pingResponse_

typedef ::ros_generated::pingResponse_<std::allocator<void> > pingResponse;

typedef boost::shared_ptr< ::ros_generated::pingResponse > pingResponsePtr;
typedef boost::shared_ptr< ::ros_generated::pingResponse const> pingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_generated::pingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_generated::pingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ros_generated

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': True, 'HasHeader': False}
// {'ros_generated': ['/home/jj/Projects/catkin_workspace/src/ros_generated/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::ros_generated::pingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_generated::pingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_generated::pingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_generated::pingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_generated::pingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_generated::pingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_generated::pingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4e7c0828990ac78670d86e9fcb97102a";
  }

  static const char* value(const ::ros_generated::pingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4e7c0828990ac786ULL;
  static const uint64_t static_value2 = 0x70d86e9fcb97102aULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_generated::pingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_generated/pingResponse";
  }

  static const char* value(const ::ros_generated::pingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_generated::pingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64 ack\n\
\n\
";
  }

  static const char* value(const ::ros_generated::pingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_generated::pingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ack);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct pingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_generated::pingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_generated::pingResponse_<ContainerAllocator>& v)
  {
    s << indent << "ack: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.ack);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_GENERATED_MESSAGE_PINGRESPONSE_H