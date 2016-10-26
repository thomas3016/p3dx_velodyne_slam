// Generated by gencpp from file pioneer3_control_ros/BumperState.msg
// DO NOT EDIT!


#ifndef PIONEER3_CONTROL_ROS_MESSAGE_BUMPERSTATE_H
#define PIONEER3_CONTROL_ROS_MESSAGE_BUMPERSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pioneer3_control_ros
{
template <class ContainerAllocator>
struct BumperState_
{
  typedef BumperState_<ContainerAllocator> Type;

  BumperState_()
    : header()
    , front_bumpers()
    , rear_bumpers()  {
    }
  BumperState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , front_bumpers(_alloc)
    , rear_bumpers(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _front_bumpers_type;
  _front_bumpers_type front_bumpers;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _rear_bumpers_type;
  _rear_bumpers_type rear_bumpers;




  typedef boost::shared_ptr< ::pioneer3_control_ros::BumperState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pioneer3_control_ros::BumperState_<ContainerAllocator> const> ConstPtr;

}; // struct BumperState_

typedef ::pioneer3_control_ros::BumperState_<std::allocator<void> > BumperState;

typedef boost::shared_ptr< ::pioneer3_control_ros::BumperState > BumperStatePtr;
typedef boost::shared_ptr< ::pioneer3_control_ros::BumperState const> BumperStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pioneer3_control_ros::BumperState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pioneer3_control_ros

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'pioneer3_control_ros': ['/home/hj/catkin_ws/src/pioneer3_control_ros/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pioneer3_control_ros::BumperState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pioneer3_control_ros::BumperState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pioneer3_control_ros::BumperState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f81947761ff7e166a3bbaf937b9869b5";
  }

  static const char* value(const ::pioneer3_control_ros::BumperState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf81947761ff7e166ULL;
  static const uint64_t static_value2 = 0xa3bbaf937b9869b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pioneer3_control_ros/BumperState";
  }

  static const char* value(const ::pioneer3_control_ros::BumperState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
bool[] front_bumpers\n\
bool[] rear_bumpers\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::pioneer3_control_ros::BumperState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.front_bumpers);
      stream.next(m.rear_bumpers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BumperState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pioneer3_control_ros::BumperState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pioneer3_control_ros::BumperState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "front_bumpers[]" << std::endl;
    for (size_t i = 0; i < v.front_bumpers.size(); ++i)
    {
      s << indent << "  front_bumpers[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.front_bumpers[i]);
    }
    s << indent << "rear_bumpers[]" << std::endl;
    for (size_t i = 0; i < v.rear_bumpers.size(); ++i)
    {
      s << indent << "  rear_bumpers[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.rear_bumpers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIONEER3_CONTROL_ROS_MESSAGE_BUMPERSTATE_H
