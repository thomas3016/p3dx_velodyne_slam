// Generated by gencpp from file map_file/PoleClass.msg
// DO NOT EDIT!


#ifndef MAP_FILE_MESSAGE_POLECLASS_H
#define MAP_FILE_MESSAGE_POLECLASS_H


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
struct PoleClass_
{
  typedef PoleClass_<ContainerAllocator> Type;

  PoleClass_()
    : plid(0)
    , vid(0)
    , length(0.0)
    , dim(0.0)  {
    }
  PoleClass_(const ContainerAllocator& _alloc)
    : plid(0)
    , vid(0)
    , length(0.0)
    , dim(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _plid_type;
  _plid_type plid;

   typedef int32_t _vid_type;
  _vid_type vid;

   typedef double _length_type;
  _length_type length;

   typedef double _dim_type;
  _dim_type dim;




  typedef boost::shared_ptr< ::map_file::PoleClass_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_file::PoleClass_<ContainerAllocator> const> ConstPtr;

}; // struct PoleClass_

typedef ::map_file::PoleClass_<std::allocator<void> > PoleClass;

typedef boost::shared_ptr< ::map_file::PoleClass > PoleClassPtr;
typedef boost::shared_ptr< ::map_file::PoleClass const> PoleClassConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_file::PoleClass_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_file::PoleClass_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::map_file::PoleClass_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_file::PoleClass_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_file::PoleClass_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_file::PoleClass_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_file::PoleClass_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_file::PoleClass_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_file::PoleClass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d9d65404b5e1f838856c9aeaa9d94be8";
  }

  static const char* value(const ::map_file::PoleClass_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd9d65404b5e1f838ULL;
  static const uint64_t static_value2 = 0x856c9aeaa9d94be8ULL;
};

template<class ContainerAllocator>
struct DataType< ::map_file::PoleClass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_file/PoleClass";
  }

  static const char* value(const ::map_file::PoleClass_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_file::PoleClass_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 plid\n\
int32 vid\n\
float64 length\n\
float64 dim\n\
";
  }

  static const char* value(const ::map_file::PoleClass_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_file::PoleClass_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.plid);
      stream.next(m.vid);
      stream.next(m.length);
      stream.next(m.dim);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PoleClass_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_file::PoleClass_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_file::PoleClass_<ContainerAllocator>& v)
  {
    s << indent << "plid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.plid);
    s << indent << "vid: ";
    Printer<int32_t>::stream(s, indent + "  ", v.vid);
    s << indent << "length: ";
    Printer<double>::stream(s, indent + "  ", v.length);
    s << indent << "dim: ";
    Printer<double>::stream(s, indent + "  ", v.dim);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_FILE_MESSAGE_POLECLASS_H
