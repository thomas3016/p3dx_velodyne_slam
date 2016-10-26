# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from map_file/LineClass.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class LineClass(genpy.Message):
  _md5sum = "6f019727ac91c69fd42d5922bf464911"
  _type = "map_file/LineClass"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """int32 lid
int32 bpid
int32 fpid
int32 blid
int32 flid
"""
  __slots__ = ['lid','bpid','fpid','blid','flid']
  _slot_types = ['int32','int32','int32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       lid,bpid,fpid,blid,flid

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LineClass, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.lid is None:
        self.lid = 0
      if self.bpid is None:
        self.bpid = 0
      if self.fpid is None:
        self.fpid = 0
      if self.blid is None:
        self.blid = 0
      if self.flid is None:
        self.flid = 0
    else:
      self.lid = 0
      self.bpid = 0
      self.fpid = 0
      self.blid = 0
      self.flid = 0

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
      buff.write(_struct_5i.pack(_x.lid, _x.bpid, _x.fpid, _x.blid, _x.flid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.lid, _x.bpid, _x.fpid, _x.blid, _x.flid,) = _struct_5i.unpack(str[start:end])
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
      buff.write(_struct_5i.pack(_x.lid, _x.bpid, _x.fpid, _x.blid, _x.flid))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.lid, _x.bpid, _x.fpid, _x.blid, _x.flid,) = _struct_5i.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_5i = struct.Struct("<5i")
