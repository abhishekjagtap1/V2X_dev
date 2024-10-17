// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_stack_btp/msg/detail/btp_data_indication__rosidl_typesupport_introspection_c.h"
#include "v2x_stack_btp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_stack_btp/msg/detail/btp_data_indication__functions.h"
#include "v2x_stack_btp/msg/detail/btp_data_indication__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `destination`
#include "v2x_stack_btp/msg/geo_net_destination.h"
// Member `destination`
#include "v2x_stack_btp/msg/detail/geo_net_destination__rosidl_typesupport_introspection_c.h"
// Member `permissions`
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `traffic_class`
#include "v2x_stack_btp/msg/traffic_class.h"
// Member `traffic_class`
#include "v2x_stack_btp/msg/detail/traffic_class__rosidl_typesupport_introspection_c.h"
// Member `remaining_packet_lifetime`
#include "builtin_interfaces/msg/duration.h"
// Member `remaining_packet_lifetime`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_stack_btp__msg__BtpDataIndication__init(message_memory);
}

void v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_fini_function(void * message_memory)
{
  v2x_stack_btp__msg__BtpDataIndication__fini(message_memory);
}

size_t v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__size_function__BtpDataIndication__permissions(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_const_function__BtpDataIndication__permissions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_function__BtpDataIndication__permissions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__fetch_function__BtpDataIndication__permissions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_const_function__BtpDataIndication__permissions(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__assign_function__BtpDataIndication__permissions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_function__BtpDataIndication__permissions(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__resize_function__BtpDataIndication__permissions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__size_function__BtpDataIndication__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_const_function__BtpDataIndication__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_function__BtpDataIndication__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__fetch_function__BtpDataIndication__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_const_function__BtpDataIndication__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__assign_function__BtpDataIndication__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_function__BtpDataIndication__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__resize_function__BtpDataIndication__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "btp_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, btp_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, source_port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, destination_port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_port_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, destination_port_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, destination),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "its_aid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, its_aid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "permissions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, permissions),  // bytes offset in struct
    NULL,  // default value
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__size_function__BtpDataIndication__permissions,  // size() function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_const_function__BtpDataIndication__permissions,  // get_const(index) function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_function__BtpDataIndication__permissions,  // get(index) function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__fetch_function__BtpDataIndication__permissions,  // fetch(index, &value) function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__assign_function__BtpDataIndication__permissions,  // assign(index, value) function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__resize_function__BtpDataIndication__permissions  // resize(index) function pointer
  },
  {
    "traffic_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, traffic_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remaining_packet_lifetime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, remaining_packet_lifetime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack_btp__msg__BtpDataIndication, data),  // bytes offset in struct
    NULL,  // default value
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__size_function__BtpDataIndication__data,  // size() function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_const_function__BtpDataIndication__data,  // get_const(index) function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__get_function__BtpDataIndication__data,  // get(index) function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__fetch_function__BtpDataIndication__data,  // fetch(index, &value) function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__assign_function__BtpDataIndication__data,  // assign(index, value) function pointer
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__resize_function__BtpDataIndication__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_members = {
  "v2x_stack_btp__msg",  // message namespace
  "BtpDataIndication",  // message name
  11,  // number of fields
  sizeof(v2x_stack_btp__msg__BtpDataIndication),
  false,  // has_any_key_member_
  v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_member_array,  // message members
  v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_type_support_handle = {
  0,
  &v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__msg__BtpDataIndication__get_type_hash,
  &v2x_stack_btp__msg__BtpDataIndication__get_type_description,
  &v2x_stack_btp__msg__BtpDataIndication__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_stack_btp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, msg, BtpDataIndication)() {
  v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, msg, GeoNetDestination)();
  v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack_btp, msg, TrafficClass)();
  v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_type_support_handle.typesupport_identifier) {
    v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_stack_btp__msg__BtpDataIndication__rosidl_typesupport_introspection_c__BtpDataIndication_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
