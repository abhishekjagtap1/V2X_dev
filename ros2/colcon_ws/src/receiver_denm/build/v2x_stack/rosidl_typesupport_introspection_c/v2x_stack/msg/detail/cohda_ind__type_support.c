// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_stack:msg/CohdaInd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_stack/msg/detail/cohda_ind__rosidl_typesupport_introspection_c.h"
#include "v2x_stack/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_stack/msg/detail/cohda_ind__functions.h"
#include "v2x_stack/msg/detail/cohda_ind__struct.h"


// Include directives for member types
// Member `type`
#include "v2x_stack/msg/udp_msg_type.h"
// Member `type`
#include "v2x_stack/msg/detail/udp_msg_type__rosidl_typesupport_introspection_c.h"
// Member `header`
#include "v2x_stack/msg/udp_data_ind_hdr.h"
// Member `header`
#include "v2x_stack/msg/detail/udp_data_ind_hdr__rosidl_typesupport_introspection_c.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_stack__msg__CohdaInd__init(message_memory);
}

void v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_fini_function(void * message_memory)
{
  v2x_stack__msg__CohdaInd__fini(message_memory);
}

size_t v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__size_function__CohdaInd__payload(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__get_const_function__CohdaInd__payload(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__get_function__CohdaInd__payload(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__fetch_function__CohdaInd__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__get_const_function__CohdaInd__payload(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__assign_function__CohdaInd__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__get_function__CohdaInd__payload(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__resize_function__CohdaInd__payload(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__CohdaInd, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__CohdaInd, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__CohdaInd, payload),  // bytes offset in struct
    NULL,  // default value
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__size_function__CohdaInd__payload,  // size() function pointer
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__get_const_function__CohdaInd__payload,  // get_const(index) function pointer
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__get_function__CohdaInd__payload,  // get(index) function pointer
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__fetch_function__CohdaInd__payload,  // fetch(index, &value) function pointer
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__assign_function__CohdaInd__payload,  // assign(index, value) function pointer
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__resize_function__CohdaInd__payload  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_members = {
  "v2x_stack__msg",  // message namespace
  "CohdaInd",  // message name
  3,  // number of fields
  sizeof(v2x_stack__msg__CohdaInd),
  false,  // has_any_key_member_
  v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_member_array,  // message members
  v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_type_support_handle = {
  0,
  &v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack__msg__CohdaInd__get_type_hash,
  &v2x_stack__msg__CohdaInd__get_type_description,
  &v2x_stack__msg__CohdaInd__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_stack
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack, msg, CohdaInd)() {
  v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack, msg, UDPMsgType)();
  v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack, msg, UDPDataIndHdr)();
  if (!v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_type_support_handle.typesupport_identifier) {
    v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_stack__msg__CohdaInd__rosidl_typesupport_introspection_c__CohdaInd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
