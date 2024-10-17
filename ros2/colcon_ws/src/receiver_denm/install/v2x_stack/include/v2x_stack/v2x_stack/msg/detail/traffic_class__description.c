// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack:msg/TrafficClass.idl
// generated code does not contain a copyright notice

#include "v2x_stack/msg/detail/traffic_class__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack
const rosidl_type_hash_t *
v2x_stack__msg__TrafficClass__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x5b, 0xd1, 0x97, 0x23, 0xfd, 0x96, 0x0f,
      0xd0, 0x79, 0x79, 0x3e, 0x3d, 0xfc, 0x55, 0x25,
      0x8f, 0xfc, 0x7b, 0xfb, 0x27, 0xa4, 0xb4, 0x89,
      0x47, 0x15, 0x93, 0x0a, 0x1e, 0x37, 0x47, 0xd7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2x_stack__msg__TrafficClass__TYPE_NAME[] = "v2x_stack/msg/TrafficClass";

// Define type names, field names, and default values
static char v2x_stack__msg__TrafficClass__FIELD_NAME__store_carry_forwarding[] = "store_carry_forwarding";
static char v2x_stack__msg__TrafficClass__FIELD_NAME__channel_offloading[] = "channel_offloading";
static char v2x_stack__msg__TrafficClass__FIELD_NAME__id[] = "id";

static rosidl_runtime_c__type_description__Field v2x_stack__msg__TrafficClass__FIELDS[] = {
  {
    {v2x_stack__msg__TrafficClass__FIELD_NAME__store_carry_forwarding, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__TrafficClass__FIELD_NAME__channel_offloading, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__TrafficClass__FIELD_NAME__id, 2, 2},
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
v2x_stack__msg__TrafficClass__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack__msg__TrafficClass__TYPE_NAME, 26, 26},
      {v2x_stack__msg__TrafficClass__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool store_carry_forwarding\n"
  "bool channel_offloading\n"
  "uint8 id # only lower six bits are used\n"
  "\n"
  "\n"
  "uint8 ID_DCC_DP0 = 0\n"
  "uint8 ID_DCC_DP1 = 1\n"
  "uint8 ID_DCC_DP2 = 2\n"
  "uint8 ID_DCC_DP3 = 3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack__msg__TrafficClass__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack__msg__TrafficClass__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 178, 178},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack__msg__TrafficClass__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack__msg__TrafficClass__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
