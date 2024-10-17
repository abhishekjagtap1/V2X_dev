// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/msg/detail/geo_net_destination__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__GeoNetDestination__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4a, 0x0e, 0x00, 0x4f, 0x3d, 0x60, 0xe6, 0x10,
      0xf4, 0x83, 0xbc, 0x06, 0x13, 0x10, 0xd3, 0x75,
      0x6c, 0x83, 0xe1, 0x9a, 0x84, 0x64, 0x40, 0x9c,
      0xf6, 0xec, 0x59, 0x13, 0xf4, 0xe9, 0x8e, 0x05,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "v2x_stack_btp/msg/detail/geo_net_area__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t v2x_stack_btp__msg__GeoNetArea__EXPECTED_HASH = {1, {
    0xae, 0x7e, 0xa6, 0x6f, 0xfd, 0x1e, 0x95, 0xf2,
    0x23, 0x53, 0x34, 0x9a, 0xf5, 0x61, 0x06, 0x2c,
    0x4b, 0x66, 0x7f, 0xe7, 0x82, 0xb5, 0x21, 0x85,
    0x6e, 0x79, 0x1e, 0x18, 0x02, 0x18, 0x87, 0x85,
  }};
#endif

static char v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME[] = "v2x_stack_btp/msg/GeoNetDestination";
static char v2x_stack_btp__msg__GeoNetArea__TYPE_NAME[] = "v2x_stack_btp/msg/GeoNetArea";

// Define type names, field names, and default values
static char v2x_stack_btp__msg__GeoNetDestination__FIELD_NAME__type[] = "type";
static char v2x_stack_btp__msg__GeoNetDestination__FIELD_NAME__address[] = "address";
static char v2x_stack_btp__msg__GeoNetDestination__FIELD_NAME__area[] = "area";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__msg__GeoNetDestination__FIELDS[] = {
  {
    {v2x_stack_btp__msg__GeoNetDestination__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetDestination__FIELD_NAME__address, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      8,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetDestination__FIELD_NAME__area, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__GeoNetArea__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack_btp__msg__GeoNetDestination__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {v2x_stack_btp__msg__GeoNetArea__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__msg__GeoNetDestination__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME, 35, 35},
      {v2x_stack_btp__msg__GeoNetDestination__FIELDS, 3, 3},
    },
    {v2x_stack_btp__msg__GeoNetDestination__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetArea__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetArea__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = v2x_stack_btp__msg__GeoNetArea__get_type_description(NULL)->type_description.fields;
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
v2x_stack_btp__msg__GeoNetDestination__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 108, 108},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__GeoNetDestination__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__msg__GeoNetDestination__get_individual_type_description_source(NULL),
    sources[1] = *v2x_stack_btp__msg__GeoNetArea__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
