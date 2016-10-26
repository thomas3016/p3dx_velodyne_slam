// Generated by gencpp from file map_file/StopLine.msg
// DO NOT EDIT!


#ifndef MAP_FILE_MESSAGE_STOPLINE_H
#define MAP_FILE_MESSAGE_STOPLINE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace map_file
{
template <class ContainerAllocator>
struct StopLine_
{
  typedef StopLine_<ContainerAllocator> Type;

  StopLine_()
    : id(0)
    , lid(0)
    , tlid(0)
    , signid(0)
    , linkid(0)  {
    }
  StopLine_(const ContainerAllocator& _alloc)
    : id(0)
    , lid(0)
    , tlid(0)
    , signid(0)
    , linkid(0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _lid_type;
  _lid_type lid;

   typedef int32_t _tlid_type;
  _tlid_type tlid;

   typedef int32_t _signid_type;
  _signid_type signid;

   typedef int32_t _linkid_type;
  _linkid_type linkid;




  typedef boost::shared_ptr< ::map_file::StopLine_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_file::StopLine_<ContainerAllocator> const> ConstPtr;

}; // struct StopLine_

typedef ::map_file::StopLine_<std::allocator<void> > StopLine;

typedef boost::shared_ptr< ::map_file::StopLine > StopLinePtr;
typedef boost::shared_ptr< ::map_file::StopLine const> StopLineConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_file::StopLine_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_file::StopLine_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_file

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'map_file': ['/home/hj/catkin_ws/src/data/packages/map_file/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_file::StopLine_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_file::StopLine_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_file::StopLine_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_file::StopLine_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_file::StopLine_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_file::StopLine_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_file::StopLine_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aa335822262e59a11032c9939a75e473";
  }

  static const char* value(const ::map_file::StopLine_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaa335822262e59a1ULL;
  static const uint64_t static_value2 = 0x1032c9939a75e473ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_file::StopLine_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_file/StopLine";
  }

  static const char* value(const ::map_file::StopLine_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_file::StopLine_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n\
int32 lid\n\
int32 tlid\n\
int32 signid\n\
int32 linkid\n\
";
  }

  static const char* value(const ::map_file::StopLine_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_file::StopLine_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.lid);
      stream.next(m.tlid);
      stream.next(m.signid);
      stream.next(m.linkid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StopLine_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_file::StopLine_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_file::StopLine_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "lid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.lid);
    s << indent << "tlid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.tlid);
    s << indent << "signid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.signid);
    s << indent << "linkid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.linkid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_FILE_MESSAGE_STOPLINE_H
