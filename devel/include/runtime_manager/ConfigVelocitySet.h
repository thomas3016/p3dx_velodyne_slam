// Generated by gencpp from file runtime_manager/ConfigVelocitySet.msg
// DO NOT EDIT!


#ifndef RUNTIME_MANAGER_MESSAGE_CONFIGVELOCITYSET_H
#define RUNTIME_MANAGER_MESSAGE_CONFIGVELOCITYSET_H


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
struct ConfigVelocitySet_
{
  typedef ConfigVelocitySet_<ContainerAllocator> Type;

  ConfigVelocitySet_()
    : header()
    , velocity_limit(0.0)
    , others_distance(0.0)
    , cars_distance(0.0)
    , pedestrians_distance(0.0)
    , detection_range(0.0)
    , threshold_points(0)
    , detection_height_top(0.0)
    , detection_height_bottom(0.0)
    , deceleration(0.0)
    , velocity_change_limit(0.0)
    , velocity_offset(0.0)
    , deceleration_range(0.0)
    , deceleration_minimum(0.0)
    , temporal_waypoints_size(0.0)  {
    }
  ConfigVelocitySet_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , velocity_limit(0.0)
    , others_distance(0.0)
    , cars_distance(0.0)
    , pedestrians_distance(0.0)
    , detection_range(0.0)
    , threshold_points(0)
    , detection_height_top(0.0)
    , detection_height_bottom(0.0)
    , deceleration(0.0)
    , velocity_change_limit(0.0)
    , velocity_offset(0.0)
    , deceleration_range(0.0)
    , deceleration_minimum(0.0)
    , temporal_waypoints_size(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _velocity_limit_type;
  _velocity_limit_type velocity_limit;

   typedef float _others_distance_type;
  _others_distance_type others_distance;

   typedef float _cars_distance_type;
  _cars_distance_type cars_distance;

   typedef float _pedestrians_distance_type;
  _pedestrians_distance_type pedestrians_distance;

   typedef float _detection_range_type;
  _detection_range_type detection_range;

   typedef int32_t _threshold_points_type;
  _threshold_points_type threshold_points;

   typedef float _detection_height_top_type;
  _detection_height_top_type detection_height_top;

   typedef float _detection_height_bottom_type;
  _detection_height_bottom_type detection_height_bottom;

   typedef float _deceleration_type;
  _deceleration_type deceleration;

   typedef float _velocity_change_limit_type;
  _velocity_change_limit_type velocity_change_limit;

   typedef float _velocity_offset_type;
  _velocity_offset_type velocity_offset;

   typedef float _deceleration_range_type;
  _deceleration_range_type deceleration_range;

   typedef float _deceleration_minimum_type;
  _deceleration_minimum_type deceleration_minimum;

   typedef float _temporal_waypoints_size_type;
  _temporal_waypoints_size_type temporal_waypoints_size;




  typedef boost::shared_ptr< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> const> ConstPtr;

}; // struct ConfigVelocitySet_

typedef ::runtime_manager::ConfigVelocitySet_<std::allocator<void> > ConfigVelocitySet;

typedef boost::shared_ptr< ::runtime_manager::ConfigVelocitySet > ConfigVelocitySetPtr;
typedef boost::shared_ptr< ::runtime_manager::ConfigVelocitySet const> ConfigVelocitySetConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2fb6be071c92359e50dc54e5292c4a1e";
  }

  static const char* value(const ::runtime_manager::ConfigVelocitySet_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2fb6be071c92359eULL;
  static const uint64_t static_value2 = 0x50dc54e5292c4a1eULL;
};

template<class ContainerAllocator>
struct DataType< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "runtime_manager/ConfigVelocitySet";
  }

  static const char* value(const ::runtime_manager::ConfigVelocitySet_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 velocity_limit\n\
float32 others_distance\n\
float32 cars_distance\n\
float32 pedestrians_distance\n\
float32 detection_range\n\
int32 threshold_points\n\
float32 detection_height_top\n\
float32 detection_height_bottom\n\
float32 deceleration\n\
float32 velocity_change_limit\n\
float32 velocity_offset\n\
float32 deceleration_range\n\
float32 deceleration_minimum\n\
float32 temporal_waypoints_size\n\
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

  static const char* value(const ::runtime_manager::ConfigVelocitySet_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.velocity_limit);
      stream.next(m.others_distance);
      stream.next(m.cars_distance);
      stream.next(m.pedestrians_distance);
      stream.next(m.detection_range);
      stream.next(m.threshold_points);
      stream.next(m.detection_height_top);
      stream.next(m.detection_height_bottom);
      stream.next(m.deceleration);
      stream.next(m.velocity_change_limit);
      stream.next(m.velocity_offset);
      stream.next(m.deceleration_range);
      stream.next(m.deceleration_minimum);
      stream.next(m.temporal_waypoints_size);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ConfigVelocitySet_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::runtime_manager::ConfigVelocitySet_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::runtime_manager::ConfigVelocitySet_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "velocity_limit: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_limit);
    s << indent << "others_distance: ";
    Printer<float>::stream(s, indent + "  ", v.others_distance);
    s << indent << "cars_distance: ";
    Printer<float>::stream(s, indent + "  ", v.cars_distance);
    s << indent << "pedestrians_distance: ";
    Printer<float>::stream(s, indent + "  ", v.pedestrians_distance);
    s << indent << "detection_range: ";
    Printer<float>::stream(s, indent + "  ", v.detection_range);
    s << indent << "threshold_points: ";
    Printer<int32_t>::stream(s, indent + "  ", v.threshold_points);
    s << indent << "detection_height_top: ";
    Printer<float>::stream(s, indent + "  ", v.detection_height_top);
    s << indent << "detection_height_bottom: ";
    Printer<float>::stream(s, indent + "  ", v.detection_height_bottom);
    s << indent << "deceleration: ";
    Printer<float>::stream(s, indent + "  ", v.deceleration);
    s << indent << "velocity_change_limit: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_change_limit);
    s << indent << "velocity_offset: ";
    Printer<float>::stream(s, indent + "  ", v.velocity_offset);
    s << indent << "deceleration_range: ";
    Printer<float>::stream(s, indent + "  ", v.deceleration_range);
    s << indent << "deceleration_minimum: ";
    Printer<float>::stream(s, indent + "  ", v.deceleration_minimum);
    s << indent << "temporal_waypoints_size: ";
    Printer<float>::stream(s, indent + "  ", v.temporal_waypoints_size);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RUNTIME_MANAGER_MESSAGE_CONFIGVELOCITYSET_H