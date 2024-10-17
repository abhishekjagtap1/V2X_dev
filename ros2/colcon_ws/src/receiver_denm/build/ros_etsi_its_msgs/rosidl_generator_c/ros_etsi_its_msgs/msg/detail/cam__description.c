// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/CAM.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/cam__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__CAM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x0f, 0xdd, 0xe3, 0x72, 0x60, 0xe1, 0x18,
      0xbb, 0xd8, 0xb7, 0xe7, 0x6c, 0xfb, 0xc5, 0x8a,
      0xbf, 0x9f, 0xbd, 0xe9, 0x8e, 0x72, 0x1d, 0xf1,
      0xab, 0x2a, 0xc2, 0x1d, 0xca, 0x8b, 0x38, 0x31,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/vehicle_role__functions.h"
#include "ros_etsi_its_msgs/msg/detail/speed__functions.h"
#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/curvature_calculation_mode__functions.h"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__functions.h"
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_history__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "ros_etsi_its_msgs/msg/detail/exterior_lights__functions.h"
#include "ros_etsi_its_msgs/msg/detail/heading__functions.h"
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/drive_direction__functions.h"
#include "ros_etsi_its_msgs/msg/detail/acceleration_control__functions.h"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__functions.h"
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"
#include "ros_etsi_its_msgs/msg/detail/curvature__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_point__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__AccelerationControl__EXPECTED_HASH = {1, {
    0xa3, 0x89, 0x27, 0x67, 0x1b, 0xc6, 0xf5, 0x02,
    0xad, 0x3b, 0x71, 0x48, 0x5f, 0x17, 0x1e, 0x90,
    0x64, 0xa9, 0x68, 0x7e, 0x24, 0x6c, 0x25, 0xc4,
    0x59, 0xc6, 0x2e, 0x46, 0x68, 0x68, 0x18, 0x5a,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH = {1, {
    0x65, 0x4d, 0xd3, 0x5c, 0x53, 0xfe, 0xb7, 0xef,
    0x5c, 0x8d, 0x6f, 0xe7, 0xe0, 0x2e, 0x54, 0x49,
    0x9c, 0xd5, 0x5d, 0xa3, 0x2f, 0x13, 0x00, 0xfd,
    0xec, 0x0c, 0x0b, 0x3e, 0x75, 0xe0, 0x73, 0xa2,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__EXPECTED_HASH = {1, {
    0xa9, 0x39, 0x15, 0x55, 0xbe, 0x5e, 0x90, 0x0d,
    0xce, 0xfa, 0xb5, 0x5b, 0xbe, 0xef, 0x37, 0x05,
    0x26, 0x55, 0x57, 0x05, 0x62, 0x34, 0x15, 0xa5,
    0x2f, 0x5d, 0x5a, 0xd8, 0x68, 0x43, 0xfd, 0x82,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__EXPECTED_HASH = {1, {
    0x08, 0xfc, 0x77, 0x38, 0x03, 0xd4, 0x0c, 0x1d,
    0xdb, 0xff, 0xfc, 0xbc, 0xad, 0x6f, 0x9e, 0x44,
    0xc7, 0xec, 0xb8, 0x8c, 0x26, 0x3e, 0xe4, 0xa0,
    0x4e, 0xb8, 0xb7, 0xb9, 0x4b, 0x7f, 0x04, 0x05,
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
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DeltaReferencePosition__EXPECTED_HASH = {1, {
    0xce, 0x96, 0xfb, 0x2c, 0xfd, 0x2b, 0x17, 0xae,
    0x24, 0x6c, 0xdb, 0xae, 0x39, 0xee, 0x2d, 0xda,
    0xbc, 0xfd, 0x95, 0xcc, 0x6a, 0x3d, 0x70, 0xb2,
    0xe1, 0xc6, 0x2f, 0x2c, 0xaf, 0x00, 0x1b, 0x96,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DriveDirection__EXPECTED_HASH = {1, {
    0x53, 0x43, 0x66, 0xd9, 0x55, 0xa6, 0x15, 0xb9,
    0x7a, 0x37, 0xfb, 0xae, 0xc0, 0x4d, 0xb5, 0x0e,
    0xa2, 0x3f, 0x10, 0x75, 0x05, 0xa5, 0x6f, 0x92,
    0xa0, 0x9e, 0x38, 0xc9, 0x2e, 0x82, 0x01, 0x7e,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ExteriorLights__EXPECTED_HASH = {1, {
    0x97, 0xf2, 0x82, 0x3f, 0xeb, 0xf9, 0x04, 0x1b,
    0x44, 0x9b, 0x5b, 0xd7, 0x7e, 0xce, 0xf6, 0x7c,
    0x67, 0x42, 0xb1, 0x98, 0x28, 0xe6, 0xc4, 0x6e,
    0x48, 0xca, 0xd4, 0x81, 0x79, 0x82, 0x75, 0xc7,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH = {1, {
    0x16, 0x82, 0xdf, 0x3e, 0xf7, 0x89, 0x5b, 0x6a,
    0x10, 0xfb, 0x45, 0x17, 0x95, 0xd3, 0x70, 0x0d,
    0x21, 0x5d, 0x7b, 0x2a, 0x7d, 0xa0, 0xab, 0x94,
    0x7a, 0x79, 0x69, 0xc9, 0x3b, 0xb5, 0x1d, 0x9c,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH = {1, {
    0x97, 0xfc, 0x70, 0x49, 0x90, 0xf3, 0x2d, 0x7c,
    0x48, 0x04, 0x6c, 0xe1, 0x38, 0xd0, 0x65, 0xb6,
    0x9d, 0x41, 0x40, 0x28, 0x2b, 0x71, 0x28, 0x61,
    0x72, 0x32, 0xdb, 0x52, 0xf6, 0x1d, 0x5c, 0xb6,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__LongitudinalAcceleration__EXPECTED_HASH = {1, {
    0x34, 0x26, 0xc7, 0x9a, 0xd2, 0x4d, 0x00, 0xe5,
    0xfa, 0x3a, 0xd8, 0xe6, 0x6a, 0x18, 0x69, 0x35,
    0x01, 0x92, 0x91, 0xf1, 0xbc, 0x33, 0x11, 0xdf,
    0xa0, 0x15, 0xbd, 0xbd, 0xb3, 0x70, 0xd8, 0xe8,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PathDeltaTime__EXPECTED_HASH = {1, {
    0xa7, 0xc1, 0xa6, 0x6b, 0x4e, 0x89, 0xf6, 0x7b,
    0xab, 0xa6, 0x5e, 0xe4, 0xf6, 0xe8, 0xa5, 0xf7,
    0x93, 0x7a, 0x81, 0xa2, 0x80, 0x25, 0xac, 0xe1,
    0x2f, 0xbe, 0x03, 0x29, 0xe0, 0x85, 0xf6, 0x3f,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PathHistory__EXPECTED_HASH = {1, {
    0x1b, 0x60, 0xa6, 0x4e, 0x3b, 0xce, 0xae, 0x99,
    0x09, 0xd5, 0xbb, 0xf8, 0x77, 0x8a, 0x2c, 0xbb,
    0x68, 0x2e, 0xfa, 0x34, 0xc7, 0xe0, 0xf4, 0xc4,
    0x38, 0xa6, 0x21, 0x9d, 0x7d, 0xad, 0xf8, 0xd4,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PathPoint__EXPECTED_HASH = {1, {
    0x43, 0x9d, 0xb2, 0xda, 0xba, 0xea, 0x41, 0x8e,
    0xae, 0x04, 0xa3, 0xf6, 0x83, 0xa4, 0x21, 0xe2,
    0xe7, 0xbb, 0x51, 0xab, 0x76, 0x48, 0x6e, 0x35,
    0xa0, 0x79, 0xdf, 0x72, 0xd8, 0xb3, 0xbb, 0x1d,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH = {1, {
    0xb8, 0x7f, 0x63, 0x97, 0x76, 0xad, 0x0d, 0x05,
    0x19, 0xfa, 0x28, 0x5f, 0x8a, 0x07, 0xae, 0x0e,
    0x53, 0x25, 0xfc, 0x7b, 0xa0, 0xcc, 0xf0, 0xb2,
    0x5c, 0xf8, 0x8f, 0xa6, 0x03, 0xcb, 0xda, 0xd7,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ReferencePosition__EXPECTED_HASH = {1, {
    0x5e, 0xe8, 0x1a, 0xd9, 0x2b, 0xc1, 0xbf, 0x6c,
    0x19, 0xc6, 0x6e, 0xf0, 0x59, 0x0c, 0xd4, 0xcb,
    0x21, 0xcd, 0x51, 0xb5, 0x8d, 0x84, 0xfe, 0xb3,
    0xc2, 0x2a, 0x03, 0x8e, 0xc5, 0x53, 0x59, 0x7c,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH = {1, {
    0x79, 0xa4, 0x6a, 0x89, 0x32, 0x10, 0xb9, 0xda,
    0x2d, 0x85, 0xd6, 0xff, 0x1a, 0xd1, 0x80, 0xe8,
    0x4a, 0x94, 0x05, 0x8e, 0x84, 0x1e, 0x0e, 0x0d,
    0xda, 0x9a, 0x5f, 0xe6, 0x6b, 0xf9, 0x90, 0xff,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__StationType__EXPECTED_HASH = {1, {
    0xee, 0xd9, 0x82, 0x6e, 0x69, 0xeb, 0x8b, 0x39,
    0xd8, 0x6e, 0x7c, 0x88, 0x6c, 0x6e, 0x5c, 0xe7,
    0xc6, 0x1e, 0x42, 0x87, 0x28, 0xb0, 0x0e, 0x99,
    0x1a, 0x20, 0xf4, 0xd5, 0x38, 0x62, 0x23, 0x31,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleLength__EXPECTED_HASH = {1, {
    0xf8, 0xf9, 0x34, 0x4a, 0x5e, 0xd9, 0xa8, 0x62,
    0xd3, 0x6b, 0x7c, 0xa2, 0x4c, 0x3e, 0x34, 0xd8,
    0x39, 0xaa, 0x46, 0x67, 0x3e, 0x57, 0x01, 0xe8,
    0x6d, 0x4e, 0xe9, 0xda, 0xf1, 0xbb, 0xb7, 0x67,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleRole__EXPECTED_HASH = {1, {
    0xa6, 0xce, 0x7e, 0x0e, 0xf1, 0xd9, 0x31, 0x0e,
    0xcf, 0x5c, 0x6e, 0x80, 0x60, 0x15, 0xee, 0x81,
    0x5d, 0xdd, 0x2f, 0x97, 0x6c, 0x02, 0x4b, 0xad,
    0xb0, 0x11, 0xf3, 0xcd, 0xdc, 0x47, 0xb0, 0xc3,
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ros_etsi_its_msgs__msg__CAM__TYPE_NAME[] = "ros_etsi_its_msgs/msg/CAM";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros_etsi_its_msgs__msg__AccelerationControl__TYPE_NAME[] = "ros_etsi_its_msgs/msg/AccelerationControl";
static char ros_etsi_its_msgs__msg__Altitude__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Altitude";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__TYPE_NAME[] = "ros_etsi_its_msgs/msg/BasicVehicleContainerHighFrequency";
static char ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__TYPE_NAME[] = "ros_etsi_its_msgs/msg/BasicVehicleContainerLowFrequency";
static char ros_etsi_its_msgs__msg__Curvature__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Curvature";
static char ros_etsi_its_msgs__msg__CurvatureCalculationMode__TYPE_NAME[] = "ros_etsi_its_msgs/msg/CurvatureCalculationMode";
static char ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DeltaReferencePosition";
static char ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DriveDirection";
static char ros_etsi_its_msgs__msg__ExteriorLights__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ExteriorLights";
static char ros_etsi_its_msgs__msg__Heading__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Heading";
static char ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ItsPduHeader";
static char ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LongitudinalAcceleration";
static char ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathDeltaTime";
static char ros_etsi_its_msgs__msg__PathHistory__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathHistory";
static char ros_etsi_its_msgs__msg__PathPoint__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathPoint";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";
static char ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ReferencePosition";
static char ros_etsi_its_msgs__msg__Speed__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Speed";
static char ros_etsi_its_msgs__msg__StationType__TYPE_NAME[] = "ros_etsi_its_msgs/msg/StationType";
static char ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleLength";
static char ros_etsi_its_msgs__msg__VehicleRole__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleRole";
static char ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleWidth";
static char ros_etsi_its_msgs__msg__YawRate__TYPE_NAME[] = "ros_etsi_its_msgs/msg/YawRate";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__CAM__FIELD_NAME__header[] = "header";
static char ros_etsi_its_msgs__msg__CAM__FIELD_NAME__its_header[] = "its_header";
static char ros_etsi_its_msgs__msg__CAM__FIELD_NAME__generation_delta_time[] = "generation_delta_time";
static char ros_etsi_its_msgs__msg__CAM__FIELD_NAME__station_type[] = "station_type";
static char ros_etsi_its_msgs__msg__CAM__FIELD_NAME__reference_position[] = "reference_position";
static char ros_etsi_its_msgs__msg__CAM__FIELD_NAME__high_frequency_container[] = "high_frequency_container";
static char ros_etsi_its_msgs__msg__CAM__FIELD_NAME__has_low_frequency_container[] = "has_low_frequency_container";
static char ros_etsi_its_msgs__msg__CAM__FIELD_NAME__low_frequency_container[] = "low_frequency_container";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__CAM__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__CAM__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CAM__FIELD_NAME__its_header, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CAM__FIELD_NAME__generation_delta_time, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CAM__FIELD_NAME__station_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CAM__FIELD_NAME__reference_position, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CAM__FIELD_NAME__high_frequency_container, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__TYPE_NAME, 56, 56},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CAM__FIELD_NAME__has_low_frequency_container, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CAM__FIELD_NAME__low_frequency_container, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__TYPE_NAME, 55, 55},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__CAM__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__AccelerationControl__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__TYPE_NAME, 56, 56},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__TYPE_NAME, 55, 55},
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
    {ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ExteriorLights__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Heading__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PathHistory__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PathPoint__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Speed__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleRole__TYPE_NAME, 33, 33},
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
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__CAM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__CAM__TYPE_NAME, 25, 25},
      {ros_etsi_its_msgs__msg__CAM__FIELDS, 8, 8},
    },
    {ros_etsi_its_msgs__msg__CAM__REFERENCED_TYPE_DESCRIPTIONS, 25, 25},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__AccelerationControl__EXPECTED_HASH, ros_etsi_its_msgs__msg__AccelerationControl__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__AccelerationControl__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH, ros_etsi_its_msgs__msg__Altitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__Altitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__EXPECTED_HASH, ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__EXPECTED_HASH, ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Curvature__EXPECTED_HASH, ros_etsi_its_msgs__msg__Curvature__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ros_etsi_its_msgs__msg__Curvature__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__CurvatureCalculationMode__EXPECTED_HASH, ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DeltaReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DriveDirection__EXPECTED_HASH, ros_etsi_its_msgs__msg__DriveDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = ros_etsi_its_msgs__msg__DriveDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ExteriorLights__EXPECTED_HASH, ros_etsi_its_msgs__msg__ExteriorLights__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = ros_etsi_its_msgs__msg__ExteriorLights__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH, ros_etsi_its_msgs__msg__Heading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = ros_etsi_its_msgs__msg__Heading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH, ros_etsi_its_msgs__msg__ItsPduHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = ros_etsi_its_msgs__msg__ItsPduHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__LongitudinalAcceleration__EXPECTED_HASH, ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathDeltaTime__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathDeltaTime__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = ros_etsi_its_msgs__msg__PathDeltaTime__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathHistory__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathHistory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = ros_etsi_its_msgs__msg__PathHistory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathPoint__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = ros_etsi_its_msgs__msg__PathPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH, ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__ReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = ros_etsi_its_msgs__msg__ReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH, ros_etsi_its_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = ros_etsi_its_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__StationType__EXPECTED_HASH, ros_etsi_its_msgs__msg__StationType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = ros_etsi_its_msgs__msg__StationType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleLength__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleLength__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = ros_etsi_its_msgs__msg__VehicleLength__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleRole__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleRole__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = ros_etsi_its_msgs__msg__VehicleRole__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleWidth__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleWidth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = ros_etsi_its_msgs__msg__VehicleWidth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__YawRate__EXPECTED_HASH, ros_etsi_its_msgs__msg__YawRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = ros_etsi_its_msgs__msg__YawRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[24].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "ItsPduHeader its_header\n"
  "uint16 generation_delta_time # milliseconds since 2004 modulo 2^16\n"
  "\n"
  "# basic container\n"
  "StationType station_type\n"
  "ReferencePosition reference_position\n"
  "\n"
  "# TODO either BasicVehicle or RSU\n"
  "BasicVehicleContainerHighFrequency high_frequency_container\n"
  "\n"
  "bool has_low_frequency_container\n"
  "BasicVehicleContainerLowFrequency low_frequency_container\n"
  "\n"
  "# TODO special vehicle container is missing";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__CAM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__CAM__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 427, 427},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__CAM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[26];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 26, 26};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__CAM__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__AccelerationControl__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__get_individual_type_description_source(NULL);
    sources[6] = *ros_etsi_its_msgs__msg__Curvature__get_individual_type_description_source(NULL);
    sources[7] = *ros_etsi_its_msgs__msg__CurvatureCalculationMode__get_individual_type_description_source(NULL);
    sources[8] = *ros_etsi_its_msgs__msg__DeltaReferencePosition__get_individual_type_description_source(NULL);
    sources[9] = *ros_etsi_its_msgs__msg__DriveDirection__get_individual_type_description_source(NULL);
    sources[10] = *ros_etsi_its_msgs__msg__ExteriorLights__get_individual_type_description_source(NULL);
    sources[11] = *ros_etsi_its_msgs__msg__Heading__get_individual_type_description_source(NULL);
    sources[12] = *ros_etsi_its_msgs__msg__ItsPduHeader__get_individual_type_description_source(NULL);
    sources[13] = *ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_individual_type_description_source(NULL);
    sources[14] = *ros_etsi_its_msgs__msg__PathDeltaTime__get_individual_type_description_source(NULL);
    sources[15] = *ros_etsi_its_msgs__msg__PathHistory__get_individual_type_description_source(NULL);
    sources[16] = *ros_etsi_its_msgs__msg__PathPoint__get_individual_type_description_source(NULL);
    sources[17] = *ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(NULL);
    sources[18] = *ros_etsi_its_msgs__msg__ReferencePosition__get_individual_type_description_source(NULL);
    sources[19] = *ros_etsi_its_msgs__msg__Speed__get_individual_type_description_source(NULL);
    sources[20] = *ros_etsi_its_msgs__msg__StationType__get_individual_type_description_source(NULL);
    sources[21] = *ros_etsi_its_msgs__msg__VehicleLength__get_individual_type_description_source(NULL);
    sources[22] = *ros_etsi_its_msgs__msg__VehicleRole__get_individual_type_description_source(NULL);
    sources[23] = *ros_etsi_its_msgs__msg__VehicleWidth__get_individual_type_description_source(NULL);
    sources[24] = *ros_etsi_its_msgs__msg__YawRate__get_individual_type_description_source(NULL);
    sources[25] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
