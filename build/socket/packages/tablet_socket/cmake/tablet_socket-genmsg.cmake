# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "tablet_socket: 6 messages, 0 services")

set(MSG_I_FLAGS "-Itablet_socket:/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(tablet_socket_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg" NAME_WE)
add_custom_target(_tablet_socket_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tablet_socket" "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg" NAME_WE)
add_custom_target(_tablet_socket_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tablet_socket" "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg" ""
)

get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg" NAME_WE)
add_custom_target(_tablet_socket_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tablet_socket" "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg" NAME_WE)
add_custom_target(_tablet_socket_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tablet_socket" "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg" "std_msgs/Header"
)

get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg" NAME_WE)
add_custom_target(_tablet_socket_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tablet_socket" "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg" "tablet_socket/Waypoint:std_msgs/Header"
)

get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg" NAME_WE)
add_custom_target(_tablet_socket_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tablet_socket" "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg" "std_msgs/Header"
)

#
#  langs = gencpp;geneus;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket
)
_generate_msg_cpp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket
)
_generate_msg_cpp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket
)
_generate_msg_cpp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket
)
_generate_msg_cpp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg"
  "${MSG_I_FLAGS}"
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket
)
_generate_msg_cpp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket
)

### Generating Services

### Generating Module File
_generate_module_cpp(tablet_socket
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(tablet_socket_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(tablet_socket_generate_messages tablet_socket_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_cpp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_cpp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_cpp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_cpp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_cpp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_cpp _tablet_socket_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tablet_socket_gencpp)
add_dependencies(tablet_socket_gencpp tablet_socket_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tablet_socket_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket
)
_generate_msg_eus(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket
)
_generate_msg_eus(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket
)
_generate_msg_eus(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket
)
_generate_msg_eus(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg"
  "${MSG_I_FLAGS}"
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket
)
_generate_msg_eus(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket
)

### Generating Services

### Generating Module File
_generate_module_eus(tablet_socket
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(tablet_socket_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(tablet_socket_generate_messages tablet_socket_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_eus _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_eus _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_eus _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_eus _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_eus _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_eus _tablet_socket_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tablet_socket_geneus)
add_dependencies(tablet_socket_geneus tablet_socket_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tablet_socket_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket
)
_generate_msg_lisp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket
)
_generate_msg_lisp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket
)
_generate_msg_lisp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket
)
_generate_msg_lisp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg"
  "${MSG_I_FLAGS}"
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket
)
_generate_msg_lisp(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket
)

### Generating Services

### Generating Module File
_generate_module_lisp(tablet_socket
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(tablet_socket_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(tablet_socket_generate_messages tablet_socket_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_lisp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_lisp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_lisp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_lisp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_lisp _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_lisp _tablet_socket_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tablet_socket_genlisp)
add_dependencies(tablet_socket_genlisp tablet_socket_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tablet_socket_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket
)
_generate_msg_py(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket
)
_generate_msg_py(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket
)
_generate_msg_py(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket
)
_generate_msg_py(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg"
  "${MSG_I_FLAGS}"
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg;/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket
)
_generate_msg_py(tablet_socket
  "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket
)

### Generating Services

### Generating Module File
_generate_module_py(tablet_socket
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(tablet_socket_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(tablet_socket_generate_messages tablet_socket_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/gear_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_py _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/Waypoint.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_py _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_info.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_py _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/mode_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_py _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/route_cmd.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_py _tablet_socket_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/hj/catkin_ws/src/socket/packages/tablet_socket/msg/error_info.msg" NAME_WE)
add_dependencies(tablet_socket_generate_messages_py _tablet_socket_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tablet_socket_genpy)
add_dependencies(tablet_socket_genpy tablet_socket_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tablet_socket_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tablet_socket
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(tablet_socket_generate_messages_cpp std_msgs_generate_messages_cpp)

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/tablet_socket
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
add_dependencies(tablet_socket_generate_messages_eus std_msgs_generate_messages_eus)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tablet_socket
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(tablet_socket_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tablet_socket
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(tablet_socket_generate_messages_py std_msgs_generate_messages_py)
