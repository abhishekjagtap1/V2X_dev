// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/ExteriorLights.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/exterior_lights__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__ExteriorLights__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x97, 0xf2, 0x82, 0x3f, 0xeb, 0xf9, 0x04, 0x1b,
      0x44, 0x9b, 0x5b, 0xd7, 0x7e, 0xce, 0xf6, 0x7c,
      0x67, 0x42, 0xb1, 0x98, 0x28, 0xe6, 0xc4, 0x6e,
      0x48, 0xca, 0xd4, 0x81, 0x79, 0x82, 0x75, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__ExteriorLights__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ExteriorLights";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__ExteriorLights__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__ExteriorLights__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__ExteriorLights__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__ExteriorLights__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__ExteriorLights__TYPE_NAME, 36, 36},
      {ros_etsi_its_msgs__msg__ExteriorLights__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 value\n"
  "\n"
  "uint8 LOW_BEAM_HEADLIGHTS = 1\n"
  "uint8 HIGH_BEAM_HEADLIGHTS = 2\n"
  "uint8 LEFT_TURN_SIGNAL = 4\n"
  "uint8 RIGHT_TURN_SIGNAL = 8\n"
  "uint8 DAYTIME_RUNNING_LIGHTS = 16\n"
  "uint8 REVERSE_LIGHT = 32\n"
  "uint8 FOG_LIGHT = 64\n"
  "uint8 PARKING_LIGHTS = 128";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__ExteriorLights__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__ExteriorLights__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 236, 236},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__ExteriorLights__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__ExteriorLights__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
