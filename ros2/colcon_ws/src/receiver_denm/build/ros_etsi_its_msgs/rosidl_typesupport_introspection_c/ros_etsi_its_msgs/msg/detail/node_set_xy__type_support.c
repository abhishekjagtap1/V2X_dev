// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__functions.h"
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__struct.h"


// Include directives for member types
// Member `pos`
#include "ros_etsi_its_msgs/msg/reference_position.h"
// Member `pos`
#include "ros_etsi_its_msgs/msg/detail/reference_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__NodeSetXY__init(message_memory);
}

void ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__NodeSetXY__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__NodeSetXY, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__NodeSetXY, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__NodeSetXY, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "NodeSetXY",  // message name
  3,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__NodeSetXY),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_member_array,  // message members
  ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__NodeSetXY__get_type_hash,
  &ros_etsi_its_msgs__msg__NodeSetXY__get_type_description,
  &ros_etsi_its_msgs__msg__NodeSetXY__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, NodeSetXY)() {
  ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, ReferencePosition)();
  if (!ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__NodeSetXY__rosidl_typesupport_introspection_c__NodeSetXY_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
