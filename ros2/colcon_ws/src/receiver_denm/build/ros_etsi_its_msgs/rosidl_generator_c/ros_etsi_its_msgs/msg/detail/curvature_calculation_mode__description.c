// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/CurvatureCalculationMode.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/curvature_calculation_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0xfd, 0x60, 0xcf, 0xe7, 0x48, 0x96, 0xb9,
      0xa0, 0x5d, 0xc1, 0x22, 0xa1, 0x63, 0xdf, 0xd7,
      0xfe, 0xa0, 0x65, 0x69, 0x9e, 0x1f, 0xa8, 0xfa,
      0x18, 0x27, 0x07, 0x10, 0x09, 0x9a, 0xe0, 0xcf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros_etsi_its_msgs__msg__CurvatureCalculationMode__TYPE_NAME[] = "ros_etsi_its_msgs/msg/CurvatureCalculationMode";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__CurvatureCalculationMode__FIELD_NAME__value[] = "value";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__CurvatureCalculationMode__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__CurvatureCalculationMode__FIELD_NAME__value, 5, 5},
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
ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__CurvatureCalculationMode__TYPE_NAME, 46, 46},
      {ros_etsi_its_msgs__msg__CurvatureCalculationMode__FIELDS, 1, 1},
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
  "uint8 YAW_RATE_USED = 0\n"
  "uint8 YAW_RATE_NOT_USED = 1\n"
  "uint8 UNAVAILABLE = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__CurvatureCalculationMode__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 87, 87},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
