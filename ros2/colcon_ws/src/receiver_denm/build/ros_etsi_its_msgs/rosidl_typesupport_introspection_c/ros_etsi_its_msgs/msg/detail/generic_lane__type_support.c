// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/generic_lane__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/generic_lane__functions.h"
#include "ros_etsi_its_msgs/msg/detail/generic_lane__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `node_list`
#include "ros_etsi_its_msgs/msg/node_set_xy.h"
// Member `node_list`
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__rosidl_typesupport_introspection_c.h"
// Member `connects_to`
#include "ros_etsi_its_msgs/msg/connection.h"
// Member `connects_to`
#include "ros_etsi_its_msgs/msg/detail/connection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__GenericLane__init(message_memory);
}

void ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__GenericLane__fini(message_memory);
}

size_t ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__node_list(
  const void * untyped_member)
{
  const ros_etsi_its_msgs__msg__NodeSetXY__Sequence * member =
    (const ros_etsi_its_msgs__msg__NodeSetXY__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__node_list(
  const void * untyped_member, size_t index)
{
  const ros_etsi_its_msgs__msg__NodeSetXY__Sequence * member =
    (const ros_etsi_its_msgs__msg__NodeSetXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__node_list(
  void * untyped_member, size_t index)
{
  ros_etsi_its_msgs__msg__NodeSetXY__Sequence * member =
    (ros_etsi_its_msgs__msg__NodeSetXY__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__node_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_etsi_its_msgs__msg__NodeSetXY * item =
    ((const ros_etsi_its_msgs__msg__NodeSetXY *)
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__node_list(untyped_member, index));
  ros_etsi_its_msgs__msg__NodeSetXY * value =
    (ros_etsi_its_msgs__msg__NodeSetXY *)(untyped_value);
  *value = *item;
}

void ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__node_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_etsi_its_msgs__msg__NodeSetXY * item =
    ((ros_etsi_its_msgs__msg__NodeSetXY *)
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__node_list(untyped_member, index));
  const ros_etsi_its_msgs__msg__NodeSetXY * value =
    (const ros_etsi_its_msgs__msg__NodeSetXY *)(untyped_value);
  *item = *value;
}

bool ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__node_list(
  void * untyped_member, size_t size)
{
  ros_etsi_its_msgs__msg__NodeSetXY__Sequence * member =
    (ros_etsi_its_msgs__msg__NodeSetXY__Sequence *)(untyped_member);
  ros_etsi_its_msgs__msg__NodeSetXY__Sequence__fini(member);
  return ros_etsi_its_msgs__msg__NodeSetXY__Sequence__init(member, size);
}

size_t ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__connects_to(
  const void * untyped_member)
{
  const ros_etsi_its_msgs__msg__Connection__Sequence * member =
    (const ros_etsi_its_msgs__msg__Connection__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__connects_to(
  const void * untyped_member, size_t index)
{
  const ros_etsi_its_msgs__msg__Connection__Sequence * member =
    (const ros_etsi_its_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__connects_to(
  void * untyped_member, size_t index)
{
  ros_etsi_its_msgs__msg__Connection__Sequence * member =
    (ros_etsi_its_msgs__msg__Connection__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__connects_to(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_etsi_its_msgs__msg__Connection * item =
    ((const ros_etsi_its_msgs__msg__Connection *)
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__connects_to(untyped_member, index));
  ros_etsi_its_msgs__msg__Connection * value =
    (ros_etsi_its_msgs__msg__Connection *)(untyped_value);
  *value = *item;
}

void ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__connects_to(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_etsi_its_msgs__msg__Connection * item =
    ((ros_etsi_its_msgs__msg__Connection *)
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__connects_to(untyped_member, index));
  const ros_etsi_its_msgs__msg__Connection * value =
    (const ros_etsi_its_msgs__msg__Connection *)(untyped_value);
  *item = *value;
}

bool ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__connects_to(
  void * untyped_member, size_t size)
{
  ros_etsi_its_msgs__msg__Connection__Sequence * member =
    (ros_etsi_its_msgs__msg__Connection__Sequence *)(untyped_member);
  ros_etsi_its_msgs__msg__Connection__Sequence__fini(member);
  return ros_etsi_its_msgs__msg__Connection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[7] = {
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__GenericLane, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__GenericLane, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ingress_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__GenericLane, ingress_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "egress_approach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__GenericLane, egress_approach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__GenericLane, lane_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__GenericLane, node_list),  // bytes offset in struct
    NULL,  // default value
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__node_list,  // size() function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__node_list,  // get_const(index) function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__node_list,  // get(index) function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__node_list,  // fetch(index, &value) function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__node_list,  // assign(index, value) function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__node_list  // resize(index) function pointer
  },
  {
    "connects_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__GenericLane, connects_to),  // bytes offset in struct
    NULL,  // default value
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__size_function__GenericLane__connects_to,  // size() function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_const_function__GenericLane__connects_to,  // get_const(index) function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__get_function__GenericLane__connects_to,  // get(index) function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__fetch_function__GenericLane__connects_to,  // fetch(index, &value) function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__assign_function__GenericLane__connects_to,  // assign(index, value) function pointer
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__resize_function__GenericLane__connects_to  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "GenericLane",  // message name
  7,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__GenericLane),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array,  // message members
  ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_hash,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_description,
  &ros_etsi_its_msgs__msg__GenericLane__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, GenericLane)() {
  ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, NodeSetXY)();
  ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, Connection)();
  if (!ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__GenericLane__rosidl_typesupport_introspection_c__GenericLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
