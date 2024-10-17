// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack:msg/Location.idl
// generated code does not contain a copyright notice

#include "v2x_stack/msg/detail/location__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack
const rosidl_type_hash_t *
v2x_stack__msg__Location__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0x76, 0x55, 0x85, 0x79, 0x16, 0x2b, 0x8c,
      0xf8, 0x6a, 0x0d, 0xd8, 0x43, 0xfb, 0x29, 0x07,
      0x02, 0x0f, 0x2b, 0x2a, 0xf2, 0xb1, 0x17, 0x0c,
      0x7c, 0x63, 0xde, 0x6e, 0xd1, 0x36, 0x2a, 0xdc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2x_stack__msg__Location__TYPE_NAME[] = "v2x_stack/msg/Location";

// Define type names, field names, and default values
static char v2x_stack__msg__Location__FIELD_NAME__destination[] = "destination";
static char v2x_stack__msg__Location__FIELD_NAME__lat[] = "lat";
static char v2x_stack__msg__Location__FIELD_NAME__lon[] = "lon";

static rosidl_runtime_c__type_description__Field v2x_stack__msg__Location__FIELDS[] = {
  {
    {v2x_stack__msg__Location__FIELD_NAME__destination, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Location__FIELD_NAME__lat, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Location__FIELD_NAME__lon, 3, 3},
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
v2x_stack__msg__Location__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack__msg__Location__TYPE_NAME, 22, 22},
      {v2x_stack__msg__Location__FIELDS, 3, 3},
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
v2x_stack__msg__Location__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack__msg__Location__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 218, 218},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack__msg__Location__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack__msg__Location__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
