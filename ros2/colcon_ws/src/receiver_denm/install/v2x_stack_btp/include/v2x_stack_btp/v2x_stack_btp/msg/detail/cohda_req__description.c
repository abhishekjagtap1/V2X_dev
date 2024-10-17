// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:msg/CohdaReq.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/msg/detail/cohda_req__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__CohdaReq__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa2, 0x3f, 0xf1, 0xa1, 0x02, 0xe9, 0x8e, 0x01,
      0xb9, 0xd6, 0xd1, 0xf6, 0xdf, 0x54, 0xd0, 0x73,
      0x59, 0x5c, 0x24, 0xcf, 0x09, 0x79, 0x78, 0xa3,
      0x79, 0xc0, 0x05, 0xa7, 0xfc, 0x16, 0xc3, 0x81,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2x_stack_btp__msg__CohdaReq__TYPE_NAME[] = "v2x_stack_btp/msg/CohdaReq";

// Define type names, field names, and default values
static char v2x_stack_btp__msg__CohdaReq__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__msg__CohdaReq__FIELDS[] = {
  {
    {v2x_stack_btp__msg__CohdaReq__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
v2x_stack_btp__msg__CohdaReq__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__msg__CohdaReq__TYPE_NAME, 26, 26},
      {v2x_stack_btp__msg__CohdaReq__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}


static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__msg__CohdaReq__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__msg__CohdaReq__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__CohdaReq__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__msg__CohdaReq__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
