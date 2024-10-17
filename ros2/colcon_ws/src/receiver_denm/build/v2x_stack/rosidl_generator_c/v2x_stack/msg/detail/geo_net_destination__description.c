// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice

#include "v2x_stack/msg/detail/geo_net_destination__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack
const rosidl_type_hash_t *
v2x_stack__msg__GeoNetDestination__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x97, 0xe5, 0x27, 0x44, 0x8b, 0x08, 0x4f,
      0xe1, 0xd7, 0x92, 0xb7, 0xc7, 0xa1, 0x48, 0xa3,
      0xd1, 0xff, 0x05, 0x78, 0x5b, 0x0c, 0x2c, 0xfb,
      0x40, 0xf9, 0xf6, 0xb1, 0x36, 0xf3, 0x61, 0xd9,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "v2x_stack/msg/detail/geo_net_area__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t v2x_stack__msg__GeoNetArea__EXPECTED_HASH = {1, {
    0x08, 0xeb, 0xbc, 0x49, 0xfa, 0xc4, 0x67, 0x8b,
    0xb5, 0xf2, 0x5c, 0x44, 0x97, 0x67, 0xa4, 0x8e,
    0xc5, 0xe6, 0x35, 0x2e, 0x1f, 0x5c, 0x37, 0x02,
    0x2e, 0xeb, 0x7b, 0x0f, 0xac, 0x57, 0xad, 0xd7,
  }};
#endif

static char v2x_stack__msg__GeoNetDestination__TYPE_NAME[] = "v2x_stack/msg/GeoNetDestination";
static char v2x_stack__msg__GeoNetArea__TYPE_NAME[] = "v2x_stack/msg/GeoNetArea";

// Define type names, field names, and default values
static char v2x_stack__msg__GeoNetDestination__FIELD_NAME__type[] = "type";
static char v2x_stack__msg__GeoNetDestination__FIELD_NAME__address[] = "address";
static char v2x_stack__msg__GeoNetDestination__FIELD_NAME__area[] = "area";

static rosidl_runtime_c__type_description__Field v2x_stack__msg__GeoNetDestination__FIELDS[] = {
  {
    {v2x_stack__msg__GeoNetDestination__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__GeoNetDestination__FIELD_NAME__address, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack__msg__GeoNetDestination__FIELD_NAME__area, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack__msg__GeoNetArea__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack__msg__GeoNetDestination__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {v2x_stack__msg__GeoNetArea__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack__msg__GeoNetDestination__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack__msg__GeoNetDestination__TYPE_NAME, 31, 31},
      {v2x_stack__msg__GeoNetDestination__FIELDS, 3, 3},
    },
    {v2x_stack__msg__GeoNetDestination__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&v2x_stack__msg__GeoNetArea__EXPECTED_HASH, v2x_stack__msg__GeoNetArea__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = v2x_stack__msg__GeoNetArea__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 type\n"
  "uint8[8] address\n"
  "GeoNetArea area\n"
  "\n"
  "uint8 TYPE_NONE = 0\n"
  "uint8 TYPE_ADDRESS = 1\n"
  "uint8 TYPE_AREA = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack__msg__GeoNetDestination__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack__msg__GeoNetDestination__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 108, 108},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack__msg__GeoNetDestination__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack__msg__GeoNetDestination__get_individual_type_description_source(NULL),
    sources[1] = *v2x_stack__msg__GeoNetArea__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
