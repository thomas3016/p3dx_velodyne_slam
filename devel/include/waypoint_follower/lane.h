// Generated by gencpp from file waypoint_follower/lane.msg
// DO NOT EDIT!


#ifndef WAYPOINT_FOLLOWER_MESSAGE_LANE_H
#define WAYPOINT_FOLLOWER_MESSAGE_LANE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <waypoint_follower/waypoint.h>

namespace waypoint_follower
{
template <class ContainerAllocator>
struct lane_
{
  typedef lane_<ContainerAllocator> Type;

  lane_()
    : header()
    , increment(0)
    , waypoints()  {
    }
  lane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , increment(0)
    , waypoints(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _increment_type;
  _increment_type increment;

   typedef std::vector< ::waypoint_follower::waypoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::waypoint_follower::waypoint_<ContainerAllocator> >::other >  _waypoints_type;
  _waypoints_type waypoints;




  typedef boost::shared_ptr< ::waypoint_follower::lane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::waypoint_follower::lane_<ContainerAllocator> const> ConstPtr;

}; // struct lane_

typedef ::waypoint_follower::lane_<std::allocator<void> > lane;

typedef boost::shared_ptr< ::waypoint_follower::lane > lanePtr;
typedef boost::shared_ptr< ::waypoint_follower::lane const> laneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::waypoint_follower::lane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::waypoint_follower::lane_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace waypoint_follower

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'waypoint_follower': ['/home/hj/catkin_ws/src/computing/planning/motion/packages/waypoint_follower/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::waypoint_follower::lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::waypoint_follower::lane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::waypoint_follower::lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::waypoint_follower::lane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::waypoint_follower::lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::waypoint_follower::lane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::waypoint_follower::lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "261462d438fc895bdf94163a0a9478a5";
  }

  static const char* value(const ::waypoint_follower::lane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x261462d438fc895bULL;
  static const uint64_t static_value2 = 0xdf94163a0a9478a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::waypoint_follower::lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "waypoint_follower/lane";
  }

  static const char* value(const ::waypoint_follower::lane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::waypoint_follower::lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
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

  static const char* value(const ::waypoint_follower::lane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::waypoint_follower::lane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.increment);
      stream.next(m.waypoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct lane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::waypoint_follower::lane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::waypoint_follower::lane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "increment: ";
    Printer<int32_t>::stream(s, indent + "  ", v.increment);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::waypoint_follower::waypoint_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WAYPOINT_FOLLOWER_MESSAGE_LANE_H
