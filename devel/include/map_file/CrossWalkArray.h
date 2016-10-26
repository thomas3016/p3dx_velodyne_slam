// Generated by gencpp from file map_file/CrossWalkArray.msg
// DO NOT EDIT!


#ifndef MAP_FILE_MESSAGE_CROSSWALKARRAY_H
#define MAP_FILE_MESSAGE_CROSSWALKARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <map_file/CrossWalk.h>

namespace map_file
{
template <class ContainerAllocator>
struct CrossWalkArray_
{
  typedef CrossWalkArray_<ContainerAllocator> Type;

  CrossWalkArray_()
    : header()
    , cross_walks()  {
    }
  CrossWalkArray_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cross_walks(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::map_file::CrossWalk_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::map_file::CrossWalk_<ContainerAllocator> >::other >  _cross_walks_type;
  _cross_walks_type cross_walks;




  typedef boost::shared_ptr< ::map_file::CrossWalkArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_file::CrossWalkArray_<ContainerAllocator> const> ConstPtr;

}; // struct CrossWalkArray_

typedef ::map_file::CrossWalkArray_<std::allocator<void> > CrossWalkArray;

typedef boost::shared_ptr< ::map_file::CrossWalkArray > CrossWalkArrayPtr;
typedef boost::shared_ptr< ::map_file::CrossWalkArray const> CrossWalkArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_file::CrossWalkArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_file::CrossWalkArray_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::map_file::CrossWalkArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_file::CrossWalkArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_file::CrossWalkArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_file::CrossWalkArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_file::CrossWalkArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_file::CrossWalkArray_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_file::CrossWalkArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6188cab2c1e707ecf4d3644a90f0ec9b";
  }

  static const char* value(const ::map_file::CrossWalkArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6188cab2c1e707ecULL;
  static const uint64_t static_value2 = 0xf4d3644a90f0ec9bULL;
};

template<class ContainerAllocator>
struct DataType< ::map_file::CrossWalkArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_file/CrossWalkArray";
  }

  static const char* value(const ::map_file::CrossWalkArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_file::CrossWalkArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
CrossWalk[] cross_walks\n\
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
MSG: map_file/CrossWalk\n\
int32 id\n\
int32 aid\n\
int32 type\n\
int32 bdid\n\
int32 linkid\n\
";
  }

  static const char* value(const ::map_file::CrossWalkArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_file::CrossWalkArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cross_walks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CrossWalkArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_file::CrossWalkArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_file::CrossWalkArray_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cross_walks[]" << std::endl;
    for (size_t i = 0; i < v.cross_walks.size(); ++i)
    {
      s << indent << "  cross_walks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::map_file::CrossWalk_<ContainerAllocator> >::stream(s, indent + "    ", v.cross_walks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_FILE_MESSAGE_CROSSWALKARRAY_H
