; Auto-generated. Do not edit!


(cl:in-package map_file-msg)


;//! \htmlinclude CrossRoad.msg.html

(cl:defclass <CrossRoad> (roslisp-msg-protocol:ros-message)
  ((id
    :reader id
    :initarg :id
    :type cl:integer
    :initform 0)
   (aid
    :reader aid
    :initarg :aid
    :type cl:integer
    :initform 0)
   (linkid
    :reader linkid
    :initarg :linkid
    :type cl:integer
    :initform 0))
)

(cl:defclass CrossRoad (<CrossRoad>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <CrossRoad>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'CrossRoad)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name map_file-msg:<CrossRoad> is deprecated: use map_file-msg:CrossRoad instead.")))

(cl:ensure-generic-function 'id-val :lambda-list '(m))
(cl:defmethod id-val ((m <CrossRoad>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader map_file-msg:id-val is deprecated.  Use map_file-msg:id instead.")
  (id m))

(cl:ensure-generic-function 'aid-val :lambda-list '(m))
(cl:defmethod aid-val ((m <CrossRoad>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader map_file-msg:aid-val is deprecated.  Use map_file-msg:aid instead.")
  (aid m))

(cl:ensure-generic-function 'linkid-val :lambda-list '(m))
(cl:defmethod linkid-val ((m <CrossRoad>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader map_file-msg:linkid-val is deprecated.  Use map_file-msg:linkid instead.")
  (linkid m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <CrossRoad>) ostream)
  "Serializes a message object of type '<CrossRoad>"
  (cl:let* ((signed (cl:slot-value msg 'id)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'aid)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'linkid)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <CrossRoad>) istream)
  "Deserializes a message object of type '<CrossRoad>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'id) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'aid) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'linkid) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<CrossRoad>)))
  "Returns string type for a message object of type '<CrossRoad>"
  "map_file/CrossRoad")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'CrossRoad)))
  "Returns string type for a message object of type 'CrossRoad"
  "map_file/CrossRoad")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<CrossRoad>)))
  "Returns md5sum for a message object of type '<CrossRoad>"
  "3ef3d04c25adcf0d8438f724188daa69")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'CrossRoad)))
  "Returns md5sum for a message object of type 'CrossRoad"
  "3ef3d04c25adcf0d8438f724188daa69")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<CrossRoad>)))
  "Returns full string definition for message of type '<CrossRoad>"
  (cl:format cl:nil "int32 id~%int32 aid~%int32 linkid~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'CrossRoad)))
  "Returns full string definition for message of type 'CrossRoad"
  (cl:format cl:nil "int32 id~%int32 aid~%int32 linkid~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <CrossRoad>))
  (cl:+ 0
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <CrossRoad>))
  "Converts a ROS message object to a list"
  (cl:list 'CrossRoad
    (cl:cons ':id (id msg))
    (cl:cons ':aid (aid msg))
    (cl:cons ':linkid (linkid msg))
))
