// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_etsi_its_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_etsi_its_msgs/msg/detail/intersection_state__rosidl_typesupport_introspection_c.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_etsi_its_msgs/msg/detail/intersection_state__functions.h"
#include "ros_etsi_its_msgs/msg/detail/intersection_state__struct.h"


// Include directives for member types
// Member `states`
#include "ros_etsi_its_msgs/msg/movement_state.h"
// Member `states`
#include "ros_etsi_its_msgs/msg/detail/movement_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_etsi_its_msgs__msg__IntersectionState__init(message_memory);
}

void ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_fini_function(void * message_memory)
{
  ros_etsi_its_msgs__msg__IntersectionState__fini(message_memory);
}

size_t ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__states(
  const void * untyped_member)
{
  const ros_etsi_its_msgs__msg__MovementState__Sequence * member =
    (const ros_etsi_its_msgs__msg__MovementState__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__states(
  const void * untyped_member, size_t index)
{
  const ros_etsi_its_msgs__msg__MovementState__Sequence * member =
    (const ros_etsi_its_msgs__msg__MovementState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__states(
  void * untyped_member, size_t index)
{
  ros_etsi_its_msgs__msg__MovementState__Sequence * member =
    (ros_etsi_its_msgs__msg__MovementState__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros_etsi_its_msgs__msg__MovementState * item =
    ((const ros_etsi_its_msgs__msg__MovementState *)
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__states(untyped_member, index));
  ros_etsi_its_msgs__msg__MovementState * value =
    (ros_etsi_its_msgs__msg__MovementState *)(untyped_value);
  *value = *item;
}

void ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros_etsi_its_msgs__msg__MovementState * item =
    ((ros_etsi_its_msgs__msg__MovementState *)
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__states(untyped_member, index));
  const ros_etsi_its_msgs__msg__MovementState * value =
    (const ros_etsi_its_msgs__msg__MovementState *)(untyped_value);
  *item = *value;
}

bool ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__states(
  void * untyped_member, size_t size)
{
  ros_etsi_its_msgs__msg__MovementState__Sequence * member =
    (ros_etsi_its_msgs__msg__MovementState__Sequence *)(untyped_member);
  ros_etsi_its_msgs__msg__MovementState__Sequence__fini(member);
  return ros_etsi_its_msgs__msg__MovementState__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__IntersectionState, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__IntersectionState, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__IntersectionState, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_etsi_its_msgs__msg__IntersectionState, states),  // bytes offset in struct
    NULL,  // default value
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__size_function__IntersectionState__states,  // size() function pointer
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_const_function__IntersectionState__states,  // get_const(index) function pointer
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__get_function__IntersectionState__states,  // get(index) function pointer
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__fetch_function__IntersectionState__states,  // fetch(index, &value) function pointer
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__assign_function__IntersectionState__states,  // assign(index, value) function pointer
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__resize_function__IntersectionState__states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_members = {
  "ros_etsi_its_msgs__msg",  // message namespace
  "IntersectionState",  // message name
  4,  // number of fields
  sizeof(ros_etsi_its_msgs__msg__IntersectionState),
  false,  // has_any_key_member_
  ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array,  // message members
  ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle = {
  0,
  &ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_members,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__IntersectionState__get_type_hash,
  &ros_etsi_its_msgs__msg__IntersectionState__get_type_description,
  &ros_etsi_its_msgs__msg__IntersectionState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, IntersectionState)() {
  ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_etsi_its_msgs, msg, MovementState)();
  if (!ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle.typesupport_identifier) {
    ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_etsi_its_msgs__msg__IntersectionState__rosidl_typesupport_introspection_c__IntersectionState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
