// Generated by gencpp from file waypoint_follower/LaneArray.msg
// DO NOT EDIT!


#ifndef WAYPOINT_FOLLOWER_MESSAGE_LANEARRAY_H
#define WAYPOINT_FOLLOWER_MESSAGE_LANEARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <waypoint_follower/lane.h>

namespace waypoint_follower
{
template <class ContainerAllocator>
struct LaneArray_
{
  typedef LaneArray_<ContainerAllocator> Type;

  LaneArray_()
    : lanes()  {
    }
  LaneArray_(const ContainerAllocator& _alloc)
    : lanes(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::waypoint_follower::lane_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::waypoint_follower::lane_<ContainerAllocator> >::other >  _lanes_type;
  _lanes_type lanes;




  typedef boost::shared_ptr< ::waypoint_follower::LaneArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::waypoint_follower::LaneArray_<ContainerAllocator> const> ConstPtr;

}; // struct LaneArray_

typedef ::waypoint_follower::LaneArray_<std::allocator<void> > LaneArray;

typedef boost::shared_ptr< ::waypoint_follower::LaneArray > LaneArrayPtr;
typedef boost::shared_ptr< ::waypoint_follower::LaneArray const> LaneArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::waypoint_follower::LaneArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::waypoint_follower::LaneArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace waypoint_follower

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'waypoint_follower': ['/home/hj/catkin_ws/src/computing/planning/motion/packages/waypoint_follower/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::waypoint_follower::LaneArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::waypoint_follower::LaneArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::waypoint_follower::LaneArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::waypoint_follower::LaneArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::waypoint_follower::LaneArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::waypoint_follower::LaneArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::waypoint_follower::LaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "92d871fae788ffe89a2471f84797cb3e";
  }

  static const char* value(const ::waypoint_follower::LaneArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x92d871fae788ffe8ULL;
  static const uint64_t static_value2 = 0x9a2471f84797cb3eULL;
};

template<class ContainerAllocator>
struct DataType< ::waypoint_follower::LaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "waypoint_follower/LaneArray";
  }

  static const char* value(const ::waypoint_follower::LaneArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::waypoint_follower::LaneArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lane[] lanes\n\
================================================================================\n\
MSG: waypoint_follower/lane\n\
Header header\n\
int32 increment\n\
waypoint[] waypoints\n\
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
\n\
================================================================================\n\
MSG: waypoint_follower/waypoint\n\
geometry_msgs/PoseStamped pose\n\
geometry_msgs/TwistStamped twist\n\
dtlane dtlane\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TwistStamped\n\
# A twist with reference coordinate frame and timestamp\n\
Header header\n\
Twist twist\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: waypoint_follower/dtlane\n\
float64 dist\n\
float64 dir\n\
float64 apara\n\
float64 r\n\
float64 slope\n\
float64 cant\n\
float64 lw\n\
float64 rw\n\
";
  }

  static const char* value(const ::waypoint_follower::LaneArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::waypoint_follower::LaneArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lanes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaneArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::waypoint_follower::LaneArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::waypoint_follower::LaneArray_<ContainerAllocator>& v)
  {
    s << indent << "lanes[]" << std::endl;
    for (size_t i = 0; i < v.lanes.size(); ++i)
    {
      s << indent << "  lanes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::waypoint_follower::lane_<ContainerAllocator> >::stream(s, indent + "    ", v.lanes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WAYPOINT_FOLLOWER_MESSAGE_LANEARRAY_H
