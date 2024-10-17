// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack:msg/GeoNetArea.idl
// generated code does not contain a copyright notice

#include "v2x_stack/msg/detail/geo_net_area__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack
const rosidl_type_hash_t *
v2x_stack__msg__GeoNetArea__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xeb, 0xbc, 0x49, 0xfa, 0xc4, 0x67, 0x8b,
      0xb5, 0xf2, 0x5c, 0x44, 0x97, 0x67, 0xa4, 0x8e,
      0xc5, 0xe6, 0x35, 0x2e, 0x1f, 0x5c, 0x37, 0x02,
      0x2e, 0xeb, 0x7b, 0x0f, 0xac, 0x57, 0xad, 0xd7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char v2x_stack__msg__GeoNetArea__TYPE_NAME[] = "v2x_stack/msg/GeoNetArea";

// Define type names, field names, and default values
static char v2x_stack__msg__GeoNetArea__FIELD_NAME__type[] = "type";
static char v2x_stack__msg__GeoNetArea__FIELD_NAME__latitude[] = "latitude";
static char v2x_stack__msg__GeoNetArea__FIELD_NAME__longitude[] = "longitude";
static char v2x_stack__msg__GeoNetArea__FIELD_NAME__distance_a[] = "distance_a";
static char v2x_stack__msg__GeoNetArea__FIELD_NAME__distance_b[] = "distance_b";
static char v2x_stack__msg__GeoNetArea__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field v2x_stack__msg__GeoNetArea__FIELDS[] = {
  {
    {v2x_stack__msg__GeoNetArea__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__GeoNetArea__FIELD_NAME__latitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__GeoNetArea__FIELD_NAME__longitude, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__GeoNetArea__FIELD_NAME__distance_a, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__GeoNetArea__FIELD_NAME__distance_b, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__GeoNetArea__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack__msg__GeoNetArea__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack__msg__GeoNetArea__TYPE_NAME, 24, 24},
      {v2x_stack__msg__GeoNetArea__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 type\n"
  "float64 latitude\n"
  "float64 longitude\n"
  "float32 distance_a  # meter (circle: radius, rectangle: short bisector, ellipse: long semi-axis)\n"
  "float32 distance_b  # meter (circle: zero, rectangle: long bisector, ellispe: short semi-axis)\n"
  "float32 angle       # degrees from north (w.r.t. distance_a)\n"
  "\n"
  "uint8 TYPE_CIRCLE = 1\n"
  "uint8 TYPE_RECTANGLE = 2\n"
  "uint8 TYPE_ELLIPSE = 3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack__msg__GeoNetArea__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack__msg__GeoNetArea__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 370, 370},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack__msg__GeoNetArea__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack__msg__GeoNetArea__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
