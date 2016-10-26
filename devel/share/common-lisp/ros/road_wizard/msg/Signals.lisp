; Auto-generated. Do not edit!


(cl:in-package road_wizard-msg)


;//! \htmlinclude Signals.msg.html

(cl:defclass <Signals> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (Signals
    :reader Signals
    :initarg :Signals
    :type (cl:vector road_wizard-msg:ExtractedPosition)
   :initform (cl:make-array 0 :element-type 'road_wizard-msg:ExtractedPosition :initial-element (cl:make-instance 'road_wizard-msg:ExtractedPosition))))
)

(cl:defclass Signals (<Signals>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Signals>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Signals)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name road_wizard-msg:<Signals> is deprecated: use road_wizard-msg:Signals instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <Signals>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader road_wizard-msg:header-val is deprecated.  Use road_wizard-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'Signals-val :lambda-list '(m))
(cl:defmethod Signals-val ((m <Signals>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader road_wizard-msg:Signals-val is deprecated.  Use road_wizard-msg:Signals instead.")
  (Signals m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Signals>) ostream)
  "Serializes a message object of type '<Signals>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'Signals))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (roslisp-msg-protocol:serialize ele ostream))
   (cl:slot-value msg 'Signals))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Signals>) istream)
  "Deserializes a message object of type '<Signals>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'Signals) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'Signals)))
    (cl:dotimes (i __ros_arr_len)
    (cl:setf (cl:aref vals i) (cl:make-instance 'road_wizard-msg:ExtractedPosition))
  (roslisp-msg-protocol:deserialize (cl:aref vals i) istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Signals>)))
  "Returns string type for a message object of type '<Signals>"
  "road_wizard/Signals")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Signals)))
  "Returns string type for a message object of type 'Signals"
  "road_wizard/Signals")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Signals>)))
  "Returns md5sum for a message object of type '<Signals>"
  "a8533304c9ae882ac02a5af0bd7a8dcd")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Signals)))
  "Returns md5sum for a message object of type 'Signals"
  "a8533304c9ae882ac02a5af0bd7a8dcd")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Signals>)))
  "Returns full string definition for message of type '<Signals>"
  (cl:format cl:nil "Header header~%ExtractedPosition[] Signals~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: road_wizard/ExtractedPosition~%int32 signalId~%int32 u~%int32 v~%int32 radius~%float64 x~%float64 y~%float64 z~%float64 hang~%int8 type~%int32 linkId~%int32 plId~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Signals)))
  "Returns full string definition for message of type 'Signals"
  (cl:format cl:nil "Header header~%ExtractedPosition[] Signals~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: road_wizard/ExtractedPosition~%int32 signalId~%int32 u~%int32 v~%int32 radius~%float64 x~%float64 y~%float64 z~%float64 hang~%int8 type~%int32 linkId~%int32 plId~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Signals>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'Signals) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ (roslisp-msg-protocol:serialization-length ele))))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Signals>))
  "Converts a ROS message object to a list"
  (cl:list 'Signals
    (cl:cons ':header (header msg))
    (cl:cons ':Signals (Signals msg))
))
