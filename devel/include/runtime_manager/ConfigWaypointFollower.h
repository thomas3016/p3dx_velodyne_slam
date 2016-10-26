// Generated by gencpp from file runtime_manager/ConfigWaypointFollower.msg
// DO NOT EDIT!


#ifndef RUNTIME_MANAGER_MESSAGE_CONFIGWAYPOINTFOLLOWER_H
#define RUNTIME_MANAGER_MESSAGE_CONFIGWAYPOINTFOLLOWER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace runtime_manager
{
template <class ContainerAllocator>
struct ConfigWaypointFollower_
{
  typedef ConfigWaypointFollower_<ContainerAllocator> Type;

  ConfigWaypointFollower_()
    : header()
    , param_flag(0)
    , velocity(0.0)
    , lookahead_threshold(0.0)
    , threshold_ratio(0.0)
    , minimum_lookahead_threshold(0.0)
    , displacement_threshold(0.0)
    , relative_angle_threshold(0.0)  {
    }
  ConfigWaypointFollower_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , param_flag(0)
    , velocity(0.0)
    , lookahead_threshold(0.0)
    , threshold_ratio(0.0)
    , minimum_lookahead_threshold(0.0)
    , displacement_threshold(0.0)
    , relative_angle_threshold(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _param_flag_type;
  _param_flag_type param_flag;

   typedef float _velocity_type;
  _velocity_type velocity;

   typedef float _lookahead_threshold_type;
  _lookahead_threshold_type lookahead_threshold;

   typedef float _threshold_ratio_type;
  _threshold_ratio_type threshold_ratio;

   typedef float _minimum_lookahead_threshold_type;
  _minimum_lookahead_threshold_type minimum_lookahead_threshold;

   typedef float _displacement_threshold_type;
  _displacement_threshold_type displacement_threshold;

   typedef float _relative_angle_threshold_type;
  _relative_angle_threshold_type relative_angle_threshold;




  typedef boost::shared_ptr< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigWaypointFollower_

typedef ::runtime_manager::ConfigWaypointFollower_<std::allocator<void> > ConfigWaypointFollower;

typedef boost::shared_ptr< ::runtime_manager::ConfigWaypointFollower > ConfigWaypointFollowerPtr;
typedef boost::shared_ptr< ::runtime_manager::ConfigWaypointFollower const> ConfigWaypointFollowerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace runtime_manager

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'runtime_manager': ['/home/hj/catkin_ws/src/util/packages/runtime_manager/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d9202059bf10b2a90035f4b7f2895bf0";
  }

  static const char* value(const ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd9202059bf10b2a9ULL;
  static const uint64_t static_value2 = 0x0035f4b7f2895bf0ULL;
};

template<class ContainerAllocator>
struct DataType< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "runtime_manager/ConfigWaypointFollower";
  }

  static const char* value(const ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 param_flag\n\
float32 velocity\n\
float32 lookahead_threshold\n\
float32 threshold_ratio\n\
float32 minimum_lookahead_threshold\n\
float32 displacement_threshold\n\
float32 relative_angle_threshold\n\
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

  static const char* value(const ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.param_flag);
      stream.next(m.velocity);
      stream.next(m.lookahead_threshold);
      stream.next(m.threshold_ratio);
      stream.next(m.minimum_lookahead_threshold);
      stream.next(m.displacement_threshold);
      stream.next(m.relative_angle_threshold);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigWaypointFollower_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::runtime_manager::ConfigWaypointFollower_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "param_flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.param_flag);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "lookahead_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.lookahead_threshold);
    s << indent << "threshold_ratio: ";
    Printer<float>::stream(s, indent + "  ", v.threshold_ratio);
    s << indent << "minimum_lookahead_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.minimum_lookahead_threshold);
    s << indent << "displacement_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.displacement_threshold);
    s << indent << "relative_angle_threshold: ";
    Printer<float>::stream(s, indent + "  ", v.relative_angle_threshold);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RUNTIME_MANAGER_MESSAGE_CONFIGWAYPOINTFOLLOWER_H
