// Generated by gencpp from file road_wizard/Signals.msg
// DO NOT EDIT!


#ifndef ROAD_WIZARD_MESSAGE_SIGNALS_H
#define ROAD_WIZARD_MESSAGE_SIGNALS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <road_wizard/ExtractedPosition.h>

namespace road_wizard
{
template <class ContainerAllocator>
struct Signals_
{
  typedef Signals_<ContainerAllocator> Type;

  Signals_()
    : header()
    , Signals()  {
    }
  Signals_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , Signals(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::road_wizard::ExtractedPosition_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::road_wizard::ExtractedPosition_<ContainerAllocator> >::other >  _Signals_type;
  _Signals_type Signals;




  typedef boost::shared_ptr< ::road_wizard::Signals_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::road_wizard::Signals_<ContainerAllocator> const> ConstPtr;

}; // struct Signals_

typedef ::road_wizard::Signals_<std::allocator<void> > Signals;

typedef boost::shared_ptr< ::road_wizard::Signals > SignalsPtr;
typedef boost::shared_ptr< ::road_wizard::Signals const> SignalsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::road_wizard::Signals_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::road_wizard::Signals_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace road_wizard

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'road_wizard': ['/home/hj/catkin_ws/src/computing/perception/detection/packages/road_wizard/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::road_wizard::Signals_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::road_wizard::Signals_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::road_wizard::Signals_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::road_wizard::Signals_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::road_wizard::Signals_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::road_wizard::Signals_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::road_wizard::Signals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a8533304c9ae882ac02a5af0bd7a8dcd";
  }

  static const char* value(const ::road_wizard::Signals_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa8533304c9ae882aULL;
  static const uint64_t static_value2 = 0xc02a5af0bd7a8dcdULL;
};

template<class ContainerAllocator>
struct DataType< ::road_wizard::Signals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "road_wizard/Signals";
  }

  static const char* value(const ::road_wizard::Signals_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::road_wizard::Signals_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
ExtractedPosition[] Signals\n\
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
\n\
================================================================================\n\
MSG: road_wizard/ExtractedPosition\n\
int32 signalId\n\
int32 u\n\
int32 v\n\
int32 radius\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 hang\n\
int8 type\n\
int32 linkId\n\
int32 plId\n\
";
  }

  static const char* value(const ::road_wizard::Signals_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::road_wizard::Signals_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.Signals);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Signals_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::road_wizard::Signals_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::road_wizard::Signals_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "Signals[]" << std::endl;
    for (size_t i = 0; i < v.Signals.size(); ++i)
    {
      s << indent << "  Signals[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::road_wizard::ExtractedPosition_<ContainerAllocator> >::stream(s, indent + "    ", v.Signals[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROAD_WIZARD_MESSAGE_SIGNALS_H
