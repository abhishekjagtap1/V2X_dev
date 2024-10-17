// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/perceived_object__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__PerceivedObject__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x93, 0x51, 0xb3, 0x56, 0x0c, 0xfd, 0x35, 0x3b,
      0xba, 0x12, 0x82, 0x8f, 0x28, 0x19, 0x18, 0x11,
      0xe5, 0xb0, 0x9e, 0x1a, 0xe2, 0x07, 0xc9, 0x27,
      0xad, 0x90, 0xef, 0x12, 0x89, 0xb0, 0x5e, 0x9a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/dynamic_status__functions.h"
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"
#include "ros_etsi_its_msgs/msg/detail/matched_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/object_dimension__functions.h"
#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__functions.h"
#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__functions.h"
#include "ros_etsi_its_msgs/msg/detail/speed_extended__functions.h"
#include "ros_etsi_its_msgs/msg/detail/object_ref_point__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DynamicStatus__EXPECTED_HASH = {1, {
    0x5a, 0x9d, 0xbd, 0x8e, 0x0a, 0xbd, 0x48, 0xf0,
    0x6b, 0xe1, 0x1b, 0x3c, 0x1a, 0x30, 0xc9, 0x69,
    0xb8, 0xea, 0x90, 0x58, 0x89, 0x80, 0xe4, 0x9b,
    0x63, 0x24, 0x93, 0xae, 0x88, 0xc8, 0x43, 0xfb,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__LateralAcceleration__EXPECTED_HASH = {1, {
    0x47, 0x3b, 0x9e, 0x6b, 0x95, 0xfc, 0x4c, 0x43,
    0xa1, 0xbf, 0xc7, 0xfe, 0xa8, 0x0e, 0x4b, 0xab,
    0x8b, 0xa5, 0xc1, 0x16, 0xb7, 0x3e, 0xb2, 0x6e,
    0xaf, 0x15, 0x91, 0x1d, 0x41, 0x5d, 0x8a, 0x36,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__LongitudinalAcceleration__EXPECTED_HASH = {1, {
    0x34, 0x26, 0xc7, 0x9a, 0xd2, 0x4d, 0x00, 0xe5,
    0xfa, 0x3a, 0xd8, 0xe6, 0x6a, 0x18, 0x69, 0x35,
    0x01, 0x92, 0x91, 0xf1, 0xbc, 0x33, 0x11, 0xdf,
    0xa0, 0x15, 0xbd, 0xbd, 0xb3, 0x70, 0xd8, 0xe8,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__MatchedPosition__EXPECTED_HASH = {1, {
    0x3c, 0xfa, 0xda, 0x28, 0xc9, 0x3c, 0xe6, 0xac,
    0x0f, 0xbe, 0x3a, 0x9c, 0x84, 0x10, 0xd9, 0xf3,
    0xbb, 0x82, 0xc9, 0x4a, 0xe1, 0xcc, 0x04, 0x47,
    0xeb, 0xe0, 0x30, 0x13, 0x1b, 0xb7, 0x3d, 0x7d,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ObjectDimension__EXPECTED_HASH = {1, {
    0x36, 0xef, 0x2a, 0xd2, 0xab, 0x0d, 0xca, 0x81,
    0xd9, 0x14, 0x9b, 0x7d, 0xdb, 0xde, 0x52, 0x85,
    0x1b, 0x39, 0xf0, 0x7e, 0xca, 0x95, 0xac, 0xe4,
    0x04, 0x89, 0x4b, 0xa3, 0xf5, 0xcf, 0x91, 0x78,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__EXPECTED_HASH = {1, {
    0xfb, 0xb1, 0x9c, 0x29, 0xb8, 0x3b, 0xc9, 0x47,
    0xd6, 0x4f, 0x0b, 0xd9, 0x93, 0xf2, 0x8a, 0x0c,
    0x25, 0xcd, 0x01, 0x3e, 0x5c, 0x1e, 0xed, 0xbf,
    0x24, 0xbb, 0xc9, 0x10, 0x4d, 0xc8, 0x2c, 0x16,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ObjectRefPoint__EXPECTED_HASH = {1, {
    0xf7, 0xf9, 0x78, 0x61, 0xb0, 0xd0, 0xfc, 0xc2,
    0xea, 0x9d, 0x1b, 0x27, 0x88, 0x82, 0xad, 0x98,
    0xaa, 0xb0, 0x74, 0x54, 0xac, 0xac, 0xfb, 0x4e,
    0xee, 0x9d, 0x4c, 0xdd, 0xfa, 0xfc, 0x31, 0xdd,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__SpeedExtended__EXPECTED_HASH = {1, {
    0x35, 0x8b, 0x4e, 0x72, 0x4c, 0x01, 0x9a, 0x50,
    0xe2, 0xb8, 0x9f, 0x63, 0xaa, 0x5f, 0xa3, 0x3c,
    0xce, 0xe6, 0xbe, 0xba, 0x56, 0xa1, 0x9e, 0x6e,
    0xca, 0x85, 0x54, 0xd3, 0x79, 0xd8, 0x67, 0x12,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__StationType__EXPECTED_HASH = {1, {
    0xee, 0xd9, 0x82, 0x6e, 0x69, 0xeb, 0x8b, 0x39,
    0xd8, 0x6e, 0x7c, 0x88, 0x6c, 0x6e, 0x5c, 0xe7,
    0xc6, 0x1e, 0x42, 0x87, 0x28, 0xb0, 0x0e, 0x99,
    0x1a, 0x20, 0xf4, 0xd5, 0x38, 0x62, 0x23, 0x31,
  }};
#endif

static char ros_etsi_its_msgs__msg__PerceivedObject__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PerceivedObject";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros_etsi_its_msgs__msg__DynamicStatus__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DynamicStatus";
static char ros_etsi_its_msgs__msg__LateralAcceleration__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LateralAcceleration";
static char ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LongitudinalAcceleration";
static char ros_etsi_its_msgs__msg__MatchedPosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MatchedPosition";
static char ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectDimension";
static char ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectDistanceWithConfidence";
static char ros_etsi_its_msgs__msg__ObjectRefPoint__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectRefPoint";
static char ros_etsi_its_msgs__msg__SpeedExtended__TYPE_NAME[] = "ros_etsi_its_msgs/msg/SpeedExtended";
static char ros_etsi_its_msgs__msg__StationType__TYPE_NAME[] = "ros_etsi_its_msgs/msg/StationType";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_id[] = "object_id";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__has_sensor_id_list[] = "has_sensor_id_list";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__sensor_id_list[] = "sensor_id_list";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__time_of_detection[] = "time_of_detection";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__time_of_measurement[] = "time_of_measurement";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_age[] = "object_age";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_confidence[] = "object_confidence";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__x_distance[] = "x_distance";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__y_distance[] = "y_distance";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__z_distance[] = "z_distance";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__x_speed[] = "x_speed";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__y_speed[] = "y_speed";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__z_speed[] = "z_speed";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__x_acceleration[] = "x_acceleration";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__y_acceleration[] = "y_acceleration";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__has_planar_object_dimension1[] = "has_planar_object_dimension1";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__planar_object_dimension1[] = "planar_object_dimension1";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__has_planar_object_dimension2[] = "has_planar_object_dimension2";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__planar_object_dimension2[] = "planar_object_dimension2";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__has_vertical_object_dimension[] = "has_vertical_object_dimension";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__vertical_object_dimension[] = "vertical_object_dimension";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_ref_point[] = "object_ref_point";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__dynamic_status[] = "dynamic_status";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__classification[] = "classification";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__matched_position[] = "matched_position";
static char ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_angle[] = "object_angle";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__PerceivedObject__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__has_sensor_id_list, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__sensor_id_list, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__time_of_detection, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__time_of_measurement, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_age, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_confidence, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__x_distance, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__y_distance, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__z_distance, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__x_speed, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__SpeedExtended__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__y_speed, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__SpeedExtended__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__z_speed, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__SpeedExtended__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__x_acceleration, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__y_acceleration, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__LateralAcceleration__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__has_planar_object_dimension1, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__planar_object_dimension1, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__has_planar_object_dimension2, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__planar_object_dimension2, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__has_vertical_object_dimension, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__vertical_object_dimension, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_ref_point, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ObjectRefPoint__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__dynamic_status, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__DynamicStatus__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__classification, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__matched_position, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__MatchedPosition__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__FIELD_NAME__object_angle, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__PerceivedObject__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DynamicStatus__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LateralAcceleration__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__MatchedPosition__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ObjectRefPoint__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SpeedExtended__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__PerceivedObject__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__PerceivedObject__TYPE_NAME, 37, 37},
      {ros_etsi_its_msgs__msg__PerceivedObject__FIELDS, 26, 26},
    },
    {ros_etsi_its_msgs__msg__PerceivedObject__REFERENCED_TYPE_DESCRIPTIONS, 10, 10},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DynamicStatus__EXPECTED_HASH, ros_etsi_its_msgs__msg__DynamicStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__DynamicStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__LateralAcceleration__EXPECTED_HASH, ros_etsi_its_msgs__msg__LateralAcceleration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__LateralAcceleration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__LongitudinalAcceleration__EXPECTED_HASH, ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__MatchedPosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__MatchedPosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__MatchedPosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ObjectDimension__EXPECTED_HASH, ros_etsi_its_msgs__msg__ObjectDimension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ros_etsi_its_msgs__msg__ObjectDimension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__EXPECTED_HASH, ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ObjectRefPoint__EXPECTED_HASH, ros_etsi_its_msgs__msg__ObjectRefPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = ros_etsi_its_msgs__msg__ObjectRefPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__SpeedExtended__EXPECTED_HASH, ros_etsi_its_msgs__msg__SpeedExtended__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = ros_etsi_its_msgs__msg__SpeedExtended__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__StationType__EXPECTED_HASH, ros_etsi_its_msgs__msg__StationType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = ros_etsi_its_msgs__msg__StationType__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 object_id\n"
  "bool has_sensor_id_list\n"
  "uint8[] sensor_id_list\n"
  "builtin_interfaces/Time time_of_detection\n"
  "int32 time_of_measurement #INTEGER {oneMilliSecond(1)} (-1500..1500)\n"
  "int32 object_age #{oneMiliSec(1)} (0..1500)\n"
  "int32 object_confidence # unknown(0), onePercent(1), oneHundredPercent(100), unavailable(101)} (0..101)\n"
  "ObjectDistanceWithConfidence x_distance\n"
  "ObjectDistanceWithConfidence y_distance\n"
  "ObjectDistanceWithConfidence z_distance\n"
  "SpeedExtended x_speed\n"
  "SpeedExtended y_speed\n"
  "SpeedExtended z_speed\n"
  "LongitudinalAcceleration x_acceleration\n"
  "LateralAcceleration y_acceleration\n"
  "\n"
  "bool has_planar_object_dimension1\n"
  "ObjectDimension planar_object_dimension1\n"
  "bool has_planar_object_dimension2\n"
  "ObjectDimension planar_object_dimension2\n"
  "bool has_vertical_object_dimension\n"
  "ObjectDimension vertical_object_dimension\n"
  "\n"
  "ObjectRefPoint object_ref_point\n"
  "DynamicStatus dynamic_status\n"
  "StationType classification\n"
  "MatchedPosition matched_position\n"
  "float32 object_angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__PerceivedObject__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__PerceivedObject__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 953, 953},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__PerceivedObject__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[11];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 11, 11};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__PerceivedObject__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__DynamicStatus__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__LateralAcceleration__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__MatchedPosition__get_individual_type_description_source(NULL);
    sources[6] = *ros_etsi_its_msgs__msg__ObjectDimension__get_individual_type_description_source(NULL);
    sources[7] = *ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_individual_type_description_source(NULL);
    sources[8] = *ros_etsi_its_msgs__msg__ObjectRefPoint__get_individual_type_description_source(NULL);
    sources[9] = *ros_etsi_its_msgs__msg__SpeedExtended__get_individual_type_description_source(NULL);
    sources[10] = *ros_etsi_its_msgs__msg__StationType__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
