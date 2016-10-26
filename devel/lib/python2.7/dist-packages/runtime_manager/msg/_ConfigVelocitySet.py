# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from runtime_manager/ConfigVelocitySet.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class ConfigVelocitySet(genpy.Message):
  _md5sum = "2fb6be071c92359e50dc54e5292c4a1e"
  _type = "runtime_manager/ConfigVelocitySet"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header
float32 velocity_limit
float32 others_distance
float32 cars_distance
float32 pedestrians_distance
float32 detection_range
int32 threshold_points
float32 detection_height_top
float32 detection_height_bottom
float32 deceleration
float32 velocity_change_limit
float32 velocity_offset
float32 deceleration_range
float32 deceleration_minimum
float32 temporal_waypoints_size

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id
"""
  __slots__ = ['header','velocity_limit','others_distance','cars_distance','pedestrians_distance','detection_range','threshold_points','detection_height_top','detection_height_bottom','deceleration','velocity_change_limit','velocity_offset','deceleration_range','deceleration_minimum','temporal_waypoints_size']
  _slot_types = ['std_msgs/Header','float32','float32','float32','float32','float32','int32','float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,velocity_limit,others_distance,cars_distance,pedestrians_distance,detection_range,threshold_points,detection_height_top,detection_height_bottom,deceleration,velocity_change_limit,velocity_offset,deceleration_range,deceleration_minimum,temporal_waypoints_size

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ConfigVelocitySet, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.velocity_limit is None:
        self.velocity_limit = 0.
      if self.others_distance is None:
        self.others_distance = 0.
      if self.cars_distance is None:
        self.cars_distance = 0.
      if self.pedestrians_distance is None:
        self.pedestrians_distance = 0.
      if self.detection_range is None:
        self.detection_range = 0.
      if self.threshold_points is None:
        self.threshold_points = 0
      if self.detection_height_top is None:
        self.detection_height_top = 0.
      if self.detection_height_bottom is None:
        self.detection_height_bottom = 0.
      if self.deceleration is None:
        self.deceleration = 0.
      if self.velocity_change_limit is None:
        self.velocity_change_limit = 0.
      if self.velocity_offset is None:
        self.velocity_offset = 0.
      if self.deceleration_range is None:
        self.deceleration_range = 0.
      if self.deceleration_minimum is None:
        self.deceleration_minimum = 0.
      if self.temporal_waypoints_size is None:
        self.temporal_waypoints_size = 0.
    else:
      self.header = std_msgs.msg.Header()
      self.velocity_limit = 0.
      self.others_distance = 0.
      self.cars_distance = 0.
      self.pedestrians_distance = 0.
      self.detection_range = 0.
      self.threshold_points = 0
      self.detection_height_top = 0.
      self.detection_height_bottom = 0.
      self.deceleration = 0.
      self.velocity_change_limit = 0.
      self.velocity_offset = 0.
      self.deceleration_range = 0.
      self.deceleration_minimum = 0.
      self.temporal_waypoints_size = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_5fi8f.pack(_x.velocity_limit, _x.others_distance, _x.cars_distance, _x.pedestrians_distance, _x.detection_range, _x.threshold_points, _x.detection_height_top, _x.detection_height_bottom, _x.deceleration, _x.velocity_change_limit, _x.velocity_offset, _x.deceleration_range, _x.deceleration_minimum, _x.temporal_waypoints_size))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.velocity_limit, _x.others_distance, _x.cars_distance, _x.pedestrians_distance, _x.detection_range, _x.threshold_points, _x.detection_height_top, _x.detection_height_bottom, _x.deceleration, _x.velocity_change_limit, _x.velocity_offset, _x.deceleration_range, _x.deceleration_minimum, _x.temporal_waypoints_size,) = _struct_5fi8f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_struct_5fi8f.pack(_x.velocity_limit, _x.others_distance, _x.cars_distance, _x.pedestrians_distance, _x.detection_range, _x.threshold_points, _x.detection_height_top, _x.detection_height_bottom, _x.deceleration, _x.velocity_change_limit, _x.velocity_offset, _x.deceleration_range, _x.deceleration_minimum, _x.temporal_waypoints_size))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.velocity_limit, _x.others_distance, _x.cars_distance, _x.pedestrians_distance, _x.detection_range, _x.threshold_points, _x.detection_height_top, _x.detection_height_bottom, _x.deceleration, _x.velocity_change_limit, _x.velocity_offset, _x.deceleration_range, _x.deceleration_minimum, _x.temporal_waypoints_size,) = _struct_5fi8f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_5fi8f = struct.Struct("<5fi8f")
_struct_3I = struct.Struct("<3I")