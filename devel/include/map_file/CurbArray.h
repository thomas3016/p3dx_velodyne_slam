// Generated by gencpp from file map_file/CurbArray.msg
// DO NOT EDIT!


#ifndef MAP_FILE_MESSAGE_CURBARRAY_H
#define MAP_FILE_MESSAGE_CURBARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <map_file/Curb.h>

namespace map_file
{
template <class ContainerAllocator>
struct CurbArray_
{
  typedef CurbArray_<ContainerAllocator> Type;

  CurbArray_()
    : header()
    , curbs()  {
    }
  CurbArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , curbs(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::map_file::Curb_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::map_file::Curb_<ContainerAllocator> >::other >  _curbs_type;
  _curbs_type curbs;




  typedef boost::shared_ptr< ::map_file::CurbArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_file::CurbArray_<ContainerAllocator> const> ConstPtr;

}; // struct CurbArray_

typedef ::map_file::CurbArray_<std::allocator<void> > CurbArray;

typedef boost::shared_ptr< ::map_file::CurbArray > CurbArrayPtr;
typedef boost::shared_ptr< ::map_file::CurbArray const> CurbArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_file::CurbArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_file::CurbArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_file

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'map_file': ['/home/hj/catkin_ws/src/data/packages/map_file/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_file::CurbArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_file::CurbArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_file::CurbArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_file::CurbArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_file::CurbArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_file::CurbArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_file::CurbArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d22e0722e00844cd62d0f232be98506";
  }

  static const char* value(const ::map_file::CurbArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d22e0722e00844cULL;
  static const uint64_t static_value2 = 0xd62d0f232be98506ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_file::CurbArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_file/CurbArray";
  }

  static const char* value(const ::map_file::CurbArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_file::CurbArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
Curb[] curbs\n\
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
MSG: map_file/Curb\n\
int32 id\n\
int32 lid\n\
float64 height\n\
float64 width\n\
int32 dir\n\
int32 linkid\n\
";
  }

  static const char* value(const ::map_file::CurbArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_file::CurbArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.curbs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CurbArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_file::CurbArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_file::CurbArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "curbs[]" << std::endl;
    for (size_t i = 0; i < v.curbs.size(); ++i)
    {
      s << indent << "  curbs[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::map_file::Curb_<ContainerAllocator> >::stream(s, indent + "    ", v.curbs[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_FILE_MESSAGE_CURBARRAY_H
