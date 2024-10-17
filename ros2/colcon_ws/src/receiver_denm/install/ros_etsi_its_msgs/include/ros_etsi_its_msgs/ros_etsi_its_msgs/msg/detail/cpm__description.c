// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/CPM.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/cpm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__CPM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x89, 0xcc, 0x42, 0x15, 0xd4, 0xae, 0xe3,
      0xaa, 0xab, 0xde, 0x52, 0x1d, 0xc1, 0xa7, 0xb3,
      0xe0, 0x3d, 0x64, 0xa3, 0x10, 0x1c, 0xc9, 0xc6,
      0x28, 0x17, 0xc3, 0x65, 0x14, 0xec, 0x5b, 0x02,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/speed__functions.h"
#include "ros_etsi_its_msgs/msg/detail/object_dimension__functions.h"
#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__functions.h"
#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"
#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__functions.h"
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"
#include "ros_etsi_its_msgs/msg/detail/object_ref_point__functions.h"
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__functions.h"
#include "ros_etsi_its_msgs/msg/detail/dynamic_status__functions.h"
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__functions.h"
#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__functions.h"
#include "ros_etsi_its_msgs/msg/detail/speed_extended__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__functions.h"
#include "ros_etsi_its_msgs/msg/detail/sensor_information__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "ros_etsi_its_msgs/msg/detail/matched_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/heading__functions.h"
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__functions.h"
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/drive_direction__functions.h"
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__functions.h"
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__functions.h"
#include "ros_etsi_its_msgs/msg/detail/perceived_object__functions.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH = {1, {
    0x65, 0x4d, 0xd3, 0x5c, 0x53, 0xfe, 0xb7, 0xef,
    0x5c, 0x8d, 0x6f, 0xe7, 0xe0, 0x2e, 0x54, 0x49,
    0x9c, 0xd5, 0x5d, 0xa3, 0x2f, 0x13, 0x00, 0xfd,
    0xec, 0x0c, 0x0b, 0x3e, 0x75, 0xe0, 0x73, 0xa2,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DriveDirection__EXPECTED_HASH = {1, {
    0x53, 0x43, 0x66, 0xd9, 0x55, 0xa6, 0x15, 0xb9,
    0x7a, 0x37, 0xfb, 0xae, 0xc0, 0x4d, 0xb5, 0x0e,
    0xa2, 0x3f, 0x10, 0x75, 0x05, 0xa5, 0x6f, 0x92,
    0xa0, 0x9e, 0x38, 0xc9, 0x2e, 0x82, 0x01, 0x7e,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DynamicStatus__EXPECTED_HASH = {1, {
    0x5a, 0x9d, 0xbd, 0x8e, 0x0a, 0xbd, 0x48, 0xf0,
    0x6b, 0xe1, 0x1b, 0x3c, 0x1a, 0x30, 0xc9, 0x69,
    0xb8, 0xea, 0x90, 0x58, 0x89, 0x80, 0xe4, 0x9b,
    0x63, 0x24, 0x93, 0xae, 0x88, 0xc8, 0x43, 0xfb,
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
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__LateralAcceleration__EXPECTED_HASH = {1, {
    0x47, 0x3b, 0x9e, 0x6b, 0x95, 0xfc, 0x4c, 0x43,
    0xa1, 0xbf, 0xc7, 0xfe, 0xa8, 0x0e, 0x4b, 0xab,
    0x8b, 0xa5, 0xc1, 0x16, 0xb7, 0x3e, 0xb2, 0x6e,
    0xaf, 0x15, 0x91, 0x1d, 0x41, 0x5d, 0x8a, 0x36,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ListOfPerceivedObjects__EXPECTED_HASH = {1, {
    0xd3, 0x49, 0xdb, 0x81, 0x98, 0x35, 0x39, 0x6a,
    0xa6, 0xd5, 0x51, 0x2b, 0xfa, 0xc5, 0x86, 0xcf,
    0xe7, 0x8a, 0x95, 0xa7, 0x41, 0x52, 0x3c, 0x38,
    0xf0, 0x97, 0x49, 0x88, 0x50, 0x99, 0xaf, 0x4c,
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
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__OriginatingVehicleContainer__EXPECTED_HASH = {1, {
    0x5e, 0x75, 0x51, 0x71, 0xb2, 0x02, 0x8c, 0x64,
    0xe1, 0x54, 0x1c, 0x8f, 0xd5, 0x7f, 0x40, 0xf9,
    0xbb, 0xd3, 0x16, 0x87, 0x02, 0x61, 0x52, 0xad,
    0x39, 0xd0, 0x2b, 0xae, 0x60, 0x24, 0x5b, 0x2a,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__PerceivedObject__EXPECTED_HASH = {1, {
    0x93, 0x51, 0xb3, 0x56, 0x0c, 0xfd, 0x35, 0x3b,
    0xba, 0x12, 0x82, 0x8f, 0x28, 0x19, 0x18, 0x11,
    0xe5, 0xb0, 0x9e, 0x1a, 0xe2, 0x07, 0xc9, 0x27,
    0xad, 0x90, 0xef, 0x12, 0x89, 0xb0, 0x5e, 0x9a,
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
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__SensorInformation__EXPECTED_HASH = {1, {
    0xed, 0x2b, 0xa0, 0x7d, 0x1d, 0x2e, 0x31, 0x27,
    0x3c, 0x22, 0xb0, 0x5f, 0x3a, 0x36, 0x54, 0x83,
    0xa3, 0x30, 0xd9, 0x1b, 0x67, 0x3f, 0xbd, 0x1a,
    0x24, 0xdf, 0x2b, 0x56, 0x07, 0x57, 0xfc, 0x95,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__SensorInformationContainer__EXPECTED_HASH = {1, {
    0xde, 0xd5, 0xd4, 0x6d, 0xb1, 0xfe, 0xfe, 0x5a,
    0x11, 0xdd, 0x5c, 0xdc, 0x0b, 0x19, 0x2b, 0x72,
    0x66, 0xd6, 0x7a, 0x05, 0x99, 0xb7, 0x7a, 0x15,
    0xdc, 0xce, 0xf9, 0x8d, 0xe6, 0x57, 0x5e, 0x40,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH = {1, {
    0x79, 0xa4, 0x6a, 0x89, 0x32, 0x10, 0xb9, 0xda,
    0x2d, 0x85, 0xd6, 0xff, 0x1a, 0xd1, 0x80, 0xe8,
    0x4a, 0x94, 0x05, 0x8e, 0x84, 0x1e, 0x0e, 0x0d,
    0xda, 0x9a, 0x5f, 0xe6, 0x6b, 0xf9, 0x90, 0xff,
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
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleLength__EXPECTED_HASH = {1, {
    0xf8, 0xf9, 0x34, 0x4a, 0x5e, 0xd9, 0xa8, 0x62,
    0xd3, 0x6b, 0x7c, 0xa2, 0x4c, 0x3e, 0x34, 0xd8,
    0x39, 0xaa, 0x46, 0x67, 0x3e, 0x57, 0x01, 0xe8,
    0x6d, 0x4e, 0xe9, 0xda, 0xf1, 0xbb, 0xb7, 0x67,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleSensor__EXPECTED_HASH = {1, {
    0x8f, 0x6a, 0x96, 0x9c, 0xc9, 0x1b, 0xb7, 0x90,
    0x30, 0xad, 0x0f, 0x1d, 0xf5, 0xe0, 0x03, 0x74,
    0xe9, 0x17, 0x90, 0xba, 0xb3, 0x05, 0xbe, 0x24,
    0x74, 0xca, 0x87, 0xa2, 0x21, 0xf5, 0xed, 0x92,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleSensorProperty__EXPECTED_HASH = {1, {
    0xb4, 0xd7, 0x2e, 0x34, 0x78, 0x54, 0x28, 0x7b,
    0xbf, 0x76, 0x0a, 0x52, 0x61, 0x6f, 0xe6, 0x39,
    0x61, 0xeb, 0xdb, 0x35, 0x76, 0xea, 0x7f, 0xe0,
    0x71, 0x27, 0xed, 0xb5, 0x86, 0x5a, 0xee, 0x70,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__VehicleWidth__EXPECTED_HASH = {1, {
    0x5b, 0xd0, 0x8e, 0x7a, 0x0d, 0x86, 0xc2, 0xae,
    0xe4, 0xa6, 0xc1, 0xf2, 0xea, 0xac, 0xe3, 0x92,
    0x53, 0xc6, 0x6d, 0x9e, 0xe5, 0xb8, 0x0d, 0x1f,
    0x9f, 0x95, 0xbd, 0xcd, 0x0b, 0x9d, 0x37, 0x74,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__WGS84Angle__EXPECTED_HASH = {1, {
    0xb2, 0x04, 0x5a, 0x30, 0x38, 0xe2, 0xc7, 0xda,
    0x01, 0x1e, 0x5c, 0x41, 0x5d, 0xaf, 0x16, 0x62,
    0x98, 0x2b, 0x4c, 0xa6, 0x33, 0x59, 0x6c, 0x9b,
    0x6f, 0x49, 0xbb, 0x45, 0x0b, 0x1c, 0x8b, 0xaf,
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

static char ros_etsi_its_msgs__msg__CPM__TYPE_NAME[] = "ros_etsi_its_msgs/msg/CPM";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros_etsi_its_msgs__msg__Altitude__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Altitude";
static char ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DriveDirection";
static char ros_etsi_its_msgs__msg__DynamicStatus__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DynamicStatus";
static char ros_etsi_its_msgs__msg__Heading__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Heading";
static char ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ItsPduHeader";
static char ros_etsi_its_msgs__msg__LateralAcceleration__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LateralAcceleration";
static char ros_etsi_its_msgs__msg__ListOfPerceivedObjects__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ListOfPerceivedObjects";
static char ros_etsi_its_msgs__msg__LongitudinalAcceleration__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LongitudinalAcceleration";
static char ros_etsi_its_msgs__msg__MatchedPosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/MatchedPosition";
static char ros_etsi_its_msgs__msg__ObjectDimension__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectDimension";
static char ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectDistanceWithConfidence";
static char ros_etsi_its_msgs__msg__ObjectRefPoint__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ObjectRefPoint";
static char ros_etsi_its_msgs__msg__OriginatingVehicleContainer__TYPE_NAME[] = "ros_etsi_its_msgs/msg/OriginatingVehicleContainer";
static char ros_etsi_its_msgs__msg__PerceivedObject__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PerceivedObject";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";
static char ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ReferencePosition";
static char ros_etsi_its_msgs__msg__SensorInformation__TYPE_NAME[] = "ros_etsi_its_msgs/msg/SensorInformation";
static char ros_etsi_its_msgs__msg__SensorInformationContainer__TYPE_NAME[] = "ros_etsi_its_msgs/msg/SensorInformationContainer";
static char ros_etsi_its_msgs__msg__Speed__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Speed";
static char ros_etsi_its_msgs__msg__SpeedExtended__TYPE_NAME[] = "ros_etsi_its_msgs/msg/SpeedExtended";
static char ros_etsi_its_msgs__msg__StationType__TYPE_NAME[] = "ros_etsi_its_msgs/msg/StationType";
static char ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleLength";
static char ros_etsi_its_msgs__msg__VehicleSensor__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleSensor";
static char ros_etsi_its_msgs__msg__VehicleSensorProperty__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleSensorProperty";
static char ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME[] = "ros_etsi_its_msgs/msg/VehicleWidth";
static char ros_etsi_its_msgs__msg__WGS84Angle__TYPE_NAME[] = "ros_etsi_its_msgs/msg/WGS84Angle";
static char ros_etsi_its_msgs__msg__YawRate__TYPE_NAME[] = "ros_etsi_its_msgs/msg/YawRate";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__header[] = "header";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__its_header[] = "its_header";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__generation_delta_time[] = "generation_delta_time";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__station_type[] = "station_type";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__reference_position[] = "reference_position";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__originating_vehicle_container[] = "originating_vehicle_container";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__has_sensor_information_container[] = "has_sensor_information_container";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__sensor_information_container[] = "sensor_information_container";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__has_list_of_perceived_object[] = "has_list_of_perceived_object";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__list_of_perceived_objects[] = "list_of_perceived_objects";
static char ros_etsi_its_msgs__msg__CPM__FIELD_NAME__number_of_perceived_objects[] = "number_of_perceived_objects";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__CPM__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__its_header, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__generation_delta_time, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__station_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__StationType__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__reference_position, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__originating_vehicle_container, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__OriginatingVehicleContainer__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__has_sensor_information_container, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__sensor_information_container, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__SensorInformationContainer__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__has_list_of_perceived_object, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__list_of_perceived_objects, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ListOfPerceivedObjects__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CPM__FIELD_NAME__number_of_perceived_objects, 27, 27},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__CPM__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DriveDirection__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DynamicStatus__TYPE_NAME, 35, 35},
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
    {ros_etsi_its_msgs__msg__LateralAcceleration__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ListOfPerceivedObjects__TYPE_NAME, 44, 44},
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
    {ros_etsi_its_msgs__msg__OriginatingVehicleContainer__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__PerceivedObject__TYPE_NAME, 37, 37},
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
    {ros_etsi_its_msgs__msg__SensorInformation__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SensorInformationContainer__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Speed__TYPE_NAME, 27, 27},
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
  {
    {ros_etsi_its_msgs__msg__VehicleLength__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensor__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleSensorProperty__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__VehicleWidth__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__WGS84Angle__TYPE_NAME, 32, 32},
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
ros_etsi_its_msgs__msg__CPM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__CPM__TYPE_NAME, 25, 25},
      {ros_etsi_its_msgs__msg__CPM__FIELDS, 11, 11},
    },
    {ros_etsi_its_msgs__msg__CPM__REFERENCED_TYPE_DESCRIPTIONS, 29, 29},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH, ros_etsi_its_msgs__msg__Altitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__Altitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DriveDirection__EXPECTED_HASH, ros_etsi_its_msgs__msg__DriveDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__DriveDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DynamicStatus__EXPECTED_HASH, ros_etsi_its_msgs__msg__DynamicStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__DynamicStatus__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH, ros_etsi_its_msgs__msg__Heading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__Heading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH, ros_etsi_its_msgs__msg__ItsPduHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ros_etsi_its_msgs__msg__ItsPduHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__LateralAcceleration__EXPECTED_HASH, ros_etsi_its_msgs__msg__LateralAcceleration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ros_etsi_its_msgs__msg__LateralAcceleration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ListOfPerceivedObjects__EXPECTED_HASH, ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__LongitudinalAcceleration__EXPECTED_HASH, ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__MatchedPosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__MatchedPosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = ros_etsi_its_msgs__msg__MatchedPosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ObjectDimension__EXPECTED_HASH, ros_etsi_its_msgs__msg__ObjectDimension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = ros_etsi_its_msgs__msg__ObjectDimension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__EXPECTED_HASH, ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ObjectRefPoint__EXPECTED_HASH, ros_etsi_its_msgs__msg__ObjectRefPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = ros_etsi_its_msgs__msg__ObjectRefPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__OriginatingVehicleContainer__EXPECTED_HASH, ros_etsi_its_msgs__msg__OriginatingVehicleContainer__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = ros_etsi_its_msgs__msg__OriginatingVehicleContainer__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PerceivedObject__EXPECTED_HASH, ros_etsi_its_msgs__msg__PerceivedObject__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = ros_etsi_its_msgs__msg__PerceivedObject__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH, ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__ReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = ros_etsi_its_msgs__msg__ReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__SensorInformation__EXPECTED_HASH, ros_etsi_its_msgs__msg__SensorInformation__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = ros_etsi_its_msgs__msg__SensorInformation__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__SensorInformationContainer__EXPECTED_HASH, ros_etsi_its_msgs__msg__SensorInformationContainer__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = ros_etsi_its_msgs__msg__SensorInformationContainer__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH, ros_etsi_its_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = ros_etsi_its_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__SpeedExtended__EXPECTED_HASH, ros_etsi_its_msgs__msg__SpeedExtended__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = ros_etsi_its_msgs__msg__SpeedExtended__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__StationType__EXPECTED_HASH, ros_etsi_its_msgs__msg__StationType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = ros_etsi_its_msgs__msg__StationType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleLength__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleLength__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[22].fields = ros_etsi_its_msgs__msg__VehicleLength__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleSensor__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleSensor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[23].fields = ros_etsi_its_msgs__msg__VehicleSensor__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleSensorProperty__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[24].fields = ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__VehicleWidth__EXPECTED_HASH, ros_etsi_its_msgs__msg__VehicleWidth__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[25].fields = ros_etsi_its_msgs__msg__VehicleWidth__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__WGS84Angle__EXPECTED_HASH, ros_etsi_its_msgs__msg__WGS84Angle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[26].fields = ros_etsi_its_msgs__msg__WGS84Angle__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__YawRate__EXPECTED_HASH, ros_etsi_its_msgs__msg__YawRate__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[27].fields = ros_etsi_its_msgs__msg__YawRate__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[28].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "ItsPduHeader its_header\n"
  "\n"
  "#CpmParameters container\n"
  "uint16 generation_delta_time # milliseconds since 2004 modulo 2^16\n"
  "\n"
  "#CpmParameters\n"
  "\n"
  "## CpmManagementContainer\n"
  "StationType station_type\n"
  "ReferencePosition reference_position\n"
  "\n"
  "## StationDataContainer\n"
  "# TODO extend to OriginatingRSUContainer\n"
  "OriginatingVehicleContainer originating_vehicle_container\n"
  "\n"
  "bool has_sensor_information_container\n"
  "SensorInformationContainer sensor_information_container\n"
  "\n"
  "bool has_list_of_perceived_object\n"
  "ListOfPerceivedObjects list_of_perceived_objects\n"
  "\n"
  "int32 number_of_perceived_objects\n"
  "\n"
  "# TODO: include FreeSpaceAddendumContainer";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__CPM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__CPM__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 626, 626},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__CPM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[30];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 30, 30};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__CPM__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__DriveDirection__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__DynamicStatus__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__Heading__get_individual_type_description_source(NULL);
    sources[6] = *ros_etsi_its_msgs__msg__ItsPduHeader__get_individual_type_description_source(NULL);
    sources[7] = *ros_etsi_its_msgs__msg__LateralAcceleration__get_individual_type_description_source(NULL);
    sources[8] = *ros_etsi_its_msgs__msg__ListOfPerceivedObjects__get_individual_type_description_source(NULL);
    sources[9] = *ros_etsi_its_msgs__msg__LongitudinalAcceleration__get_individual_type_description_source(NULL);
    sources[10] = *ros_etsi_its_msgs__msg__MatchedPosition__get_individual_type_description_source(NULL);
    sources[11] = *ros_etsi_its_msgs__msg__ObjectDimension__get_individual_type_description_source(NULL);
    sources[12] = *ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__get_individual_type_description_source(NULL);
    sources[13] = *ros_etsi_its_msgs__msg__ObjectRefPoint__get_individual_type_description_source(NULL);
    sources[14] = *ros_etsi_its_msgs__msg__OriginatingVehicleContainer__get_individual_type_description_source(NULL);
    sources[15] = *ros_etsi_its_msgs__msg__PerceivedObject__get_individual_type_description_source(NULL);
    sources[16] = *ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(NULL);
    sources[17] = *ros_etsi_its_msgs__msg__ReferencePosition__get_individual_type_description_source(NULL);
    sources[18] = *ros_etsi_its_msgs__msg__SensorInformation__get_individual_type_description_source(NULL);
    sources[19] = *ros_etsi_its_msgs__msg__SensorInformationContainer__get_individual_type_description_source(NULL);
    sources[20] = *ros_etsi_its_msgs__msg__Speed__get_individual_type_description_source(NULL);
    sources[21] = *ros_etsi_its_msgs__msg__SpeedExtended__get_individual_type_description_source(NULL);
    sources[22] = *ros_etsi_its_msgs__msg__StationType__get_individual_type_description_source(NULL);
    sources[23] = *ros_etsi_its_msgs__msg__VehicleLength__get_individual_type_description_source(NULL);
    sources[24] = *ros_etsi_its_msgs__msg__VehicleSensor__get_individual_type_description_source(NULL);
    sources[25] = *ros_etsi_its_msgs__msg__VehicleSensorProperty__get_individual_type_description_source(NULL);
    sources[26] = *ros_etsi_its_msgs__msg__VehicleWidth__get_individual_type_description_source(NULL);
    sources[27] = *ros_etsi_its_msgs__msg__WGS84Angle__get_individual_type_description_source(NULL);
    sources[28] = *ros_etsi_its_msgs__msg__YawRate__get_individual_type_description_source(NULL);
    sources[29] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
