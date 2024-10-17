// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:msg/UDPMsgType.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/msg/detail/udp_msg_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__UDPMsgType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0x3e, 0xdf, 0xa6, 0x83, 0xd8, 0x18, 0xb7,
      0x85, 0x52, 0x9a, 0xff, 0xae, 0x85, 0xee, 0x1e,
      0xeb, 0x7c, 0xef, 0x83, 0x32, 0x51, 0x9b, 0xfb,
      0x9e, 0xda, 0x57, 0x54, 0xba, 0xe1, 0x47, 0xda,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2x_stack_btp__msg__UDPMsgType__TYPE_NAME[] = "v2x_stack_btp/msg/UDPMsgType";

// Define type names, field names, and default values
static char v2x_stack_btp__msg__UDPMsgType__FIELD_NAME__version[] = "version";
static char v2x_stack_btp__msg__UDPMsgType__FIELD_NAME__msg_id[] = "msg_id";
static char v2x_stack_btp__msg__UDPMsgType__FIELD_NAME__msg_length[] = "msg_length";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__msg__UDPMsgType__FIELDS[] = {
  {
    {v2x_stack_btp__msg__UDPMsgType__FIELD_NAME__version, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPMsgType__FIELD_NAME__msg_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__UDPMsgType__FIELD_NAME__msg_length, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__msg__UDPMsgType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__msg__UDPMsgType__TYPE_NAME, 28, 28},
      {v2x_stack_btp__msg__UDPMsgType__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Version\n"
  "uint8 version\n"
  "\n"
  "# MsgID\n"
  "uint8 msg_id\n"
  "\n"
  "# Msg Length\n"
  "uint8 msg_length ";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__msg__UDPMsgType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__msg__UDPMsgType__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 78, 78},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__UDPMsgType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__msg__UDPMsgType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
