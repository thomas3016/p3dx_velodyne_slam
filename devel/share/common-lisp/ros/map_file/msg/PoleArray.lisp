; Auto-generated. Do not edit!


(cl:in-package map_file-msg)


;//! \htmlinclude PoleArray.msg.html

(cl:defclass <PoleArray> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (poles
    :reader poles
    :initarg :poles
    :type (cl:vector map_file-msg:Pole)
   :initform (cl:make-array 0 :element-type 'map_file-msg:Pole :initial-element (cl:make-instance 'map_file-msg:Pole))))
)

(cl:defclass PoleArray (<PoleArray>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <PoleArray>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'PoleArray)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name map_file-msg:<PoleArray> is deprecated: use map_file-msg:PoleArray instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <PoleArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader map_file-msg:header-val is deprecated.  Use map_file-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'poles-val :lambda-list '(m))
(cl:defmethod poles-val ((m <PoleArray>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader map_file-msg:poles-val is deprecated.  Use map_file-msg:poles instead.")
  (poles m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <PoleArray>) ostream)
  "Serializes a message object of type '<PoleArray>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'poles))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'poles))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <PoleArray>) istream)
  "Deserializes a message object of type '<PoleArray>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'poles) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'poles)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'map_file-msg:Pole))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<PoleArray>)))
  "Returns string type for a message object of type '<PoleArray>"
  "map_file/PoleArray")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'PoleArray)))
  "Returns string type for a message object of type 'PoleArray"
  "map_file/PoleArray")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<PoleArray>)))
  "Returns md5sum for a message object of type '<PoleArray>"
  "aa572841e596db9644f52fb1807b3ae6")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'PoleArray)))
  "Returns md5sum for a message object of type 'PoleArray"
  "aa572841e596db9644f52fb1807b3ae6")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<PoleArray>)))
  "Returns full string definition for message of type '<PoleArray>"
  (cl:format cl:nil "Header header~%Pole[] poles~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: map_file/Pole~%int32 id~%int32 plid~%int32 linkid~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'PoleArray)))
  "Returns full string definition for message of type 'PoleArray"
  (cl:format cl:nil "Header header~%Pole[] poles~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: map_file/Pole~%int32 id~%int32 plid~%int32 linkid~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <PoleArray>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'poles) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <PoleArray>))
  "Converts a ROS message object to a list"
  (cl:list 'PoleArray
    (cl:cons ':header (header msg))
    (cl:cons ':poles (poles msg))
))
