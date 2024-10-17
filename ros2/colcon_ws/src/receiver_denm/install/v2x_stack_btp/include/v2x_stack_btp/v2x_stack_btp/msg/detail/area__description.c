// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:msg/Area.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/msg/detail/area__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__Area__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x23, 0xe9, 0xaf, 0x4a, 0x33, 0x02, 0x3e, 0x2f,
      0x56, 0x5d, 0xc0, 0xa0, 0x97, 0xa6, 0x73, 0xc7,
      0x96, 0x73, 0x5b, 0xa2, 0x4f, 0xd9, 0x9a, 0xb7,
      0xf2, 0x08, 0xa9, 0x44, 0x4e, 0x15, 0x62, 0xa8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2x_stack_btp__msg__Area__TYPE_NAME[] = "v2x_stack_btp/msg/Area";

// Define type names, field names, and default values
static char v2x_stack_btp__msg__Area__FIELD_NAME__latitude[] = "latitude";
static char v2x_stack_btp__msg__Area__FIELD_NAME__longitude[] = "longitude";
static char v2x_stack_btp__msg__Area__FIELD_NAME__distance_a[] = "distance_a";
static char v2x_stack_btp__msg__Area__FIELD_NAME__distance_b[] = "distance_b";
static char v2x_stack_btp__msg__Area__FIELD_NAME__angle[] = "angle";
static char v2x_stack_btp__msg__Area__FIELD_NAME__shape[] = "shape";
static char v2x_stack_btp__msg__Area__FIELD_NAME__unused[] = "unused";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__msg__Area__FIELDS[] = {
  {
    {v2x_stack_btp__msg__Area__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Area__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Area__FIELD_NAME__distance_a, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Area__FIELD_NAME__distance_b, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Area__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Area__FIELD_NAME__shape, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__Area__FIELD_NAME__unused, 6, 6},
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
v2x_stack_btp__msg__Area__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__msg__Area__TYPE_NAME, 22, 22},
      {v2x_stack_btp__msg__Area__FIELDS, 7, 7},
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
v2x_stack_btp__msg__Area__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__msg__Area__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 455, 455},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__Area__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__msg__Area__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
