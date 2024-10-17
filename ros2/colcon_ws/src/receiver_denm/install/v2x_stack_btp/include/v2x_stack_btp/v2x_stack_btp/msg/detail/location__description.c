// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:msg/Location.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/msg/detail/location__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__Location__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x6d, 0xf3, 0x6e, 0x1f, 0x8a, 0x1e, 0x38,
      0xe7, 0xda, 0xbb, 0x2e, 0x76, 0x84, 0x34, 0xf8,
      0xae, 0x51, 0xea, 0x2a, 0x6d, 0x8f, 0x94, 0x55,
      0x58, 0xa7, 0x39, 0x5c, 0xb3, 0x21, 0xa1, 0x04,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2x_stack_btp__msg__Location__TYPE_NAME[] = "v2x_stack_btp/msg/Location";

// Define type names, field names, and default values
static char v2x_stack_btp__msg__Location__FIELD_NAME__destination[] = "destination";
static char v2x_stack_btp__msg__Location__FIELD_NAME__lat[] = "lat";
static char v2x_stack_btp__msg__Location__FIELD_NAME__lon[] = "lon";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__msg__Location__FIELDS[] = {
  {
    {v2x_stack_btp__msg__Location__FIELD_NAME__destination, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Location__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Location__FIELD_NAME__lon, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__msg__Location__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__msg__Location__TYPE_NAME, 26, 26},
      {v2x_stack_btp__msg__Location__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Address of destination station\n"
  "uint64 destination\n"
  "\n"
  "# WGS-84 latitude of the GeoAdhoc router expressed in 1/10 micro degree\n"
  "int32 lat\n"
  "\n"
  "# WGS84 longitude of the GeoAdhoc router expressed in 1/10 micro degree\n"
  "int32 lon";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__msg__Location__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__msg__Location__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 218, 218},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__Location__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__msg__Location__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
