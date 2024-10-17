// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_stack:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_stack/msg/detail/udp_data_ind_hdr__rosidl_typesupport_introspection_c.h"
#include "v2x_stack/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_stack/msg/detail/udp_data_ind_hdr__functions.h"
#include "v2x_stack/msg/detail/udp_data_ind_hdr__struct.h"


// Include directives for member types
// Member `location`
#include "v2x_stack/msg/location.h"
// Member `location`
#include "v2x_stack/msg/detail/location__rosidl_typesupport_introspection_c.h"
// Member `area`
#include "v2x_stack/msg/area.h"
// Member `area`
#include "v2x_stack/msg/detail/area__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_stack__msg__UDPDataIndHdr__init(message_memory);
}

void v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_fini_function(void * message_memory)
{
  v2x_stack__msg__UDPDataIndHdr__fini(message_memory);
}

size_t v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__size_function__UDPDataIndHdr__ssp_bits(
  const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_const_function__UDPDataIndHdr__ssp_bits(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_function__UDPDataIndHdr__ssp_bits(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__fetch_function__UDPDataIndHdr__ssp_bits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_const_function__UDPDataIndHdr__ssp_bits(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__assign_function__UDPDataIndHdr__ssp_bits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_function__UDPDataIndHdr__ssp_bits(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__size_function__UDPDataIndHdr__cert_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 32;
}

const void * v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_const_function__UDPDataIndHdr__cert_id(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_function__UDPDataIndHdr__cert_id(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__fetch_function__UDPDataIndHdr__cert_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_const_function__UDPDataIndHdr__cert_id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__assign_function__UDPDataIndHdr__cert_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_function__UDPDataIndHdr__cert_id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_member_array[17] = {
  {
    "btp_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, btp_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pkt_transport",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, pkt_transport),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, traffic_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_pkt_life_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, max_pkt_life_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dest_port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, dest_port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "src_port",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, src_port),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dest_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, dest_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sec_profile",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, sec_profile),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parser_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, parser_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "verification_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, verification_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ssp_len",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, ssp_len),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, aid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ssp_bits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, ssp_bits),  // bytes offset in struct
    NULL,  // default value
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__size_function__UDPDataIndHdr__ssp_bits,  // size() function pointer
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_const_function__UDPDataIndHdr__ssp_bits,  // get_const(index) function pointer
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_function__UDPDataIndHdr__ssp_bits,  // get(index) function pointer
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__fetch_function__UDPDataIndHdr__ssp_bits,  // fetch(index, &value) function pointer
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__assign_function__UDPDataIndHdr__ssp_bits,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cert_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    32,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, cert_id),  // bytes offset in struct
    NULL,  // default value
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__size_function__UDPDataIndHdr__cert_id,  // size() function pointer
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_const_function__UDPDataIndHdr__cert_id,  // get_const(index) function pointer
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__get_function__UDPDataIndHdr__cert_id,  // get(index) function pointer
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__fetch_function__UDPDataIndHdr__cert_id,  // fetch(index, &value) function pointer
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__assign_function__UDPDataIndHdr__cert_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_stack__msg__UDPDataIndHdr, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_members = {
  "v2x_stack__msg",  // message namespace
  "UDPDataIndHdr",  // message name
  17,  // number of fields
  sizeof(v2x_stack__msg__UDPDataIndHdr),
  false,  // has_any_key_member_
  v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_member_array,  // message members
  v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_type_support_handle = {
  0,
  &v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_members,
  get_message_typesupport_handle_function,
  &v2x_stack__msg__UDPDataIndHdr__get_type_hash,
  &v2x_stack__msg__UDPDataIndHdr__get_type_description,
  &v2x_stack__msg__UDPDataIndHdr__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_stack
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack, msg, UDPDataIndHdr)() {
  v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack, msg, Location)();
  v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_stack, msg, Area)();
  if (!v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_type_support_handle.typesupport_identifier) {
    v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_stack__msg__UDPDataIndHdr__rosidl_typesupport_introspection_c__UDPDataIndHdr_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
