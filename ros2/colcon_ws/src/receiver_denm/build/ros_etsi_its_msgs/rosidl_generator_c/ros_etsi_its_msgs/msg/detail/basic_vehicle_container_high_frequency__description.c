// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0x39, 0x15, 0x55, 0xbe, 0x5e, 0x90, 0x0d,
      0xce, 0xfa, 0xb5, 0x5b, 0xbe, 0xef, 0x37, 0x05,
      0x26, 0x55, 0x57, 0x05, 0x62, 0x34, 0x15, 0xa5,
      0x2f, 0x5d, 0x5a, 0xd8, 0x68, 0x43, 0xfd, 0x82,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"
#include "ros_etsi_its_msgs/msg/detail/curvature__functions.h"
#include "ros_etsi_its_msgs/msg/detail/speed__functions.h"
#include "ros_etsi_its_msgs/msg/detail/heading__functions.h"
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__functions.h"
#include "ros_etsi_its_msgs/msg/detail/drive_direction__functions.h"
#include "ros_etsi_its_msgs/msg/detail/curvature_calculation_mode__functions.h"
#include "ros_etsi_its_msgs/msg/detail/acceleration_control__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__AccelerationControl__EXPECTED_HASH = {1, {
    0xa3, 0x89, 0x27, 0x67, 0x1b, 0xc6, 0xf5, 0x02,
    0xad, 0x3b, 0x71, 0x48, 0x5f, 0x17, 0x1e, 0x90,
    0x64, 0xa9, 0x68, 0x7e, 0x24, 0x6c, 0x25, 0xc4,
    0x59, 0xc6, 0x2e, 0x46, 0x68, 0x68, 0x18, 0x5a,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Curvature__EXPECTED_HASH = {1, {
    0xd9, 0x53, 0xbb, 0x8b, 0x7f, 0x8f, 0x9b, 0x68,
    0xd0, 0x18, 0x0c, 0xab, 0x4a, 0x08, 0x1f, 0x1f,
    0x89, 0xe4, 0x3c, 0x49, 0xfb, 0x00, 0xb8, 0xde,
    0xeb, 0x3e, 0x71, 0xed, 0xfb, 0x8b, 0xf9, 0x14,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__CurvatureCalculationMode__EXPECTED_HASH = {1, {
    0xf4, 0xfd, 0x60, 0xcf, 0xe7, 0x48, 0x96, 0xb9,
    0xa0, 0x5d, 0xc1, 0x22, 0xa1, 0x63, 0xdf, 0xd7,
    0xfe, 0xa0, 0x65, 0x69, 0x9e, 0x1f, 0xa8, 0xfa,
    0x18, 0x27, 0x07, 0x10, 0x09, 0x9a, 0xe0, 0xcf,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DriveDirection__EXPECTED_HASH = {1, {
    0x53, 0x43, 0x66, 0xd9, 0x55, 0xa6, 0x15, 0xb9,
    0x7a, 0x37, 0xfb, 0xae, 0xc0, 0x4d, 0xb5, 0x0e,
    0xa2, 0x3f, 0x10, 0x75, 0x05, 0xa5, 0x6f, 0x92,
    0xa0, 0x9e, 0x38, 0xc9, 0x2e, 0x82, 0x01, 0x7e,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH = {1, {
    0x16, 0x82, 0xdf, 0x3e, 0xf7, 0x89, 0x5b, 0x6a,
    0x10, 0xfb, 0x45, 0x17, 0x95, 0xd3, 0x70, 0x0d,
    0x21, 0x5d, 0x7b, 0x2a, 0x7d, 0xa0, 0xab, 0x94,
    0x7a, 0x79, 0x69, 0xc9, 0x3b, 0xb5, 0x1d, 0x9c,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__LongitudinalAcceleration__EXPECTED_HASH = {1, {
    0x34, 0x26, 0xc7, 0x9a, 0xd2, 0x4d, 0x00, 0xe5,
    0xfa, 0x3a, 0xd8, 0xe6, 0x6a, 0x18, 0x69, 0x35,
    0x01, 0x92, 0x91, 0xf1, 0xbc, 0x33, 0x11, 0xdf,
    0xa0, 0x15, 0xbd, 0xbd, 0xb3, 0x70, 0xd8, 0xe8,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH = {1, {
    0x79, 0xa4, 0x6a, 0x89, 0x32, 0x10, 0xb9, 0xda,
    0x2d, 0x85, 0xd6, 0xff, 0x1a, 0xd1, 0x80, 0xe8,
    0x4a, 0x94, 0x05, 0x8e, 0x84, 0x1e, 0x0e, 0x0d,
    0xda, 0x9a, 0x5f, 0xe6, 0x6b, 0xf9, 0x90, 0xff,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleLength__EXPECTED_HASH = {1, {
    0xf8, 0xf9, 0x34, 0x4a, 0x5e, 0xd9, 0xa8, 0x62,
    0xd3, 0x6b, 0x7c, 0xa2, 0x4c, 0x3e, 0x34, 0xd8,
    0x39, 0xaa, 0x46, 0x67, 0x3e, 0x57, 0x01, 0xe8,
    0x6d, 0x4e, 0xe9, 0xda, 0xf1, 0xbb, 0xb7, 0x67,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleWidth__EXPECTED_HASH = {1, {
    0x5b, 0xd0, 0x8e, 0x7a, 0x0d, 0x86, 0xc2, 0xae,
    0xe4, 0xa6, 0xc1, 0xf2, 0xea, 0xac, 0xe3, 0x92,
    0x53, 0xc6, 0x6d, 0x9e, 0xe5, 0xb8, 0x0d, 0x1f,
    0x9f, 0x95, 0xbd, 0xcd, 0x0b, 0x9d, 0x37, 0x74,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__YawRate__EXPECTED_HASH = {1, {
    0x94, 0x99, 0xa2, 0xf2, 0x80, 0xa0, 0xf9, 0x3c,
    0x9c, 0x79, 0xe5, 0x0d, 0x19, 0xde, 0xb2, 0xb9,
    0xfa, 0x47, 0xaa, 0x3a, 0xe4, 0xe4, 0x58, 0x1c,
    0x35, 0xdc, 0x22, 0x3a, 0x6c, 0xd5, 0x28, 0x63,
  }};
#endif

static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__TYPE_NAME[] = "ros_etsi_its_msgs/msg/BasicVehicleContainerHighFrequency";
static char ros_etsi_its_msgs__msg__AccelerationControl__TYPE_NAME[] = "ros_etsi_its_msgs/msg/AccelerationControl";
static char ros_etsi_its_msgs__msg__Curvature__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Curvature";
static char ros_etsi_its_msgs__msg__CurvatureCalculationMode__TYPE_NAME[] = "ros_etsi_its_msgs/msg/CurvatureCalculationMode";
static char ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DriveDirection";
static char ros_etsi_its_msgs__msg__Heading__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Heading";
static char ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LongitudinalAcceleration";
static char ros_etsi_its_msgs__msg__Speed__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Speed";
static char ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleLength";
static char ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleWidth";
static char ros_etsi_its_msgs__msg__YawRate__TYPE_NAME[] = "ros_etsi_its_msgs/msg/YawRate";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__heading[] = "heading";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__speed[] = "speed";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__drive_direction[] = "drive_direction";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__vehicle_length[] = "vehicle_length";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__vehicle_width[] = "vehicle_width";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__longitudinal_acceleration[] = "longitudinal_acceleration";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__curvature[] = "curvature";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__curvature_calculation_mode[] = "curvature_calculation_mode";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__yaw_rate[] = "yaw_rate";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__has_acceleration_control[] = "has_acceleration_control";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__acceleration_control[] = "acceleration_control";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__heading, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__Heading__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__Speed__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__drive_direction, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__vehicle_length, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__vehicle_width, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__longitudinal_acceleration, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__curvature, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__Curvature__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__curvature_calculation_mode, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__CurvatureCalculationMode__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__yaw_rate, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__YawRate__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__has_acceleration_control, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELD_NAME__acceleration_control, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__AccelerationControl__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {ros_etsi_its_msgs__msg__AccelerationControl__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Curvature__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CurvatureCalculationMode__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Heading__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Speed__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__YawRate__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__TYPE_NAME, 56, 56},
      {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__FIELDS, 11, 11},
    },
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__AccelerationControl__EXPECTED_HASH, ros_etsi_its_msgs__msg__AccelerationControl__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = ros_etsi_its_msgs__msg__AccelerationControl__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Curvature__EXPECTED_HASH, ros_etsi_its_msgs__msg__Curvature__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__Curvature__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__CurvatureCalculationMode__EXPECTED_HASH, ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DriveDirection__EXPECTED_HASH, ros_etsi_its_msgs__msg__DriveDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__DriveDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH, ros_etsi_its_msgs__msg__Heading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__Heading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__LongitudinalAcceleration__EXPECTED_HASH, ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH, ros_etsi_its_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ros_etsi_its_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleLength__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleLength__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = ros_etsi_its_msgs__msg__VehicleLength__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleWidth__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleWidth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = ros_etsi_its_msgs__msg__VehicleWidth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__YawRate__EXPECTED_HASH, ros_etsi_its_msgs__msg__YawRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = ros_etsi_its_msgs__msg__YawRate__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Heading heading\n"
  "Speed speed\n"
  "DriveDirection drive_direction\n"
  "VehicleLength vehicle_length\n"
  "VehicleWidth vehicle_width\n"
  "LongitudinalAcceleration longitudinal_acceleration\n"
  "Curvature curvature\n"
  "CurvatureCalculationMode curvature_calculation_mode\n"
  "YawRate yaw_rate\n"
  "\n"
  "# optional data fields\n"
  "bool has_acceleration_control\n"
  "AccelerationControl acceleration_control\n"
  "\n"
  "# TODO further (optional) data fields are missing";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__TYPE_NAME, 56, 56},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 401, 401},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_individual_type_description_source(NULL),
    sources[1] = *ros_etsi_its_msgs__msg__AccelerationControl__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__Curvature__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__DriveDirection__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__Heading__get_individual_type_description_source(NULL);
    sources[6] = *ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_individual_type_description_source(NULL);
    sources[7] = *ros_etsi_its_msgs__msg__Speed__get_individual_type_description_source(NULL);
    sources[8] = *ros_etsi_its_msgs__msg__VehicleLength__get_individual_type_description_source(NULL);
    sources[9] = *ros_etsi_its_msgs__msg__VehicleWidth__get_individual_type_description_source(NULL);
    sources[10] = *ros_etsi_its_msgs__msg__YawRate__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
