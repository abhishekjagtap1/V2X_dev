// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack:msg/Area.idl
// generated code does not contain a copyright notice

#include "v2x_stack/msg/detail/area__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack
const rosidl_type_hash_t *
v2x_stack__msg__Area__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb6, 0x07, 0x61, 0x40, 0x7f, 0xcc, 0x59, 0x35,
      0x32, 0xe6, 0x76, 0xde, 0x8b, 0xcb, 0xb9, 0xfe,
      0x53, 0xe1, 0xcc, 0xcc, 0x0e, 0xb1, 0x85, 0xf0,
      0x4f, 0x2d, 0x1d, 0xc5, 0x78, 0x21, 0x32, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2x_stack__msg__Area__TYPE_NAME[] = "v2x_stack/msg/Area";

// Define type names, field names, and default values
static char v2x_stack__msg__Area__FIELD_NAME__latitude[] = "latitude";
static char v2x_stack__msg__Area__FIELD_NAME__longitude[] = "longitude";
static char v2x_stack__msg__Area__FIELD_NAME__distance_a[] = "distance_a";
static char v2x_stack__msg__Area__FIELD_NAME__distance_b[] = "distance_b";
static char v2x_stack__msg__Area__FIELD_NAME__angle[] = "angle";
static char v2x_stack__msg__Area__FIELD_NAME__shape[] = "shape";
static char v2x_stack__msg__Area__FIELD_NAME__unused[] = "unused";

static rosidl_runtime_c__type_description__Field v2x_stack__msg__Area__FIELDS[] = {
  {
    {v2x_stack__msg__Area__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Area__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Area__FIELD_NAME__distance_a, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Area__FIELD_NAME__distance_b, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Area__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Area__FIELD_NAME__shape, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__Area__FIELD_NAME__unused, 6, 6},
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
v2x_stack__msg__Area__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack__msg__Area__TYPE_NAME, 18, 18},
      {v2x_stack__msg__Area__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# WGS-84 latitude for the centre position of shape [1/10 micro degree]\n"
  "int32 latitude\n"
  "\n"
  "# WGS-84 longitude for the centre position of shape [1/10 micro degree]\n"
  "int32 longitude\n"
  "\n"
  "# Distance a of the geometric shape [metres] (always non-zero)\n"
  "uint16 distance_a\n"
  "\n"
  "# Distance b of the geometric shape [metres]\n"
  "uint16 distance_b\n"
  "\n"
  "# Angle of the geometric shape [degrees from North]\n"
  "uint16 angle\n"
  "\n"
  "# Shape @sa eETSIGeoNetDestType\n"
  "uint8 shape\n"
  "\n"
  "# Padding\n"
  "uint8 unused";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack__msg__Area__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack__msg__Area__TYPE_NAME, 18, 18},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 455, 455},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack__msg__Area__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack__msg__Area__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
