// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros_etsi_its_msgs:msg/DENM.idl
// generated code does not contain a copyright notice

#include "ros_etsi_its_msgs/msg/detail/denm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros_etsi_its_msgs
const rosidl_type_hash_t *
ros_etsi_its_msgs__msg__DENM__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x5b, 0x5e, 0x11, 0x02, 0xed, 0xe7, 0xf7,
      0xa4, 0xc1, 0xdb, 0x9f, 0xea, 0xfd, 0xa1, 0x0c,
      0x18, 0x3d, 0x22, 0x83, 0xe7, 0xcc, 0x5e, 0x2a,
      0xc5, 0xaf, 0x98, 0xf2, 0xb4, 0x91, 0x15, 0x54,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "ros_etsi_its_msgs/msg/detail/action_id__functions.h"
#include "ros_etsi_its_msgs/msg/detail/speed__functions.h"
#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/situation_container__functions.h"
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_history__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__functions.h"
#include "ros_etsi_its_msgs/msg/detail/management_container__functions.h"
#include "std_msgs/msg/detail/header__functions.h"
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__functions.h"
#include "ros_etsi_its_msgs/msg/detail/heading__functions.h"
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
#include "ros_etsi_its_msgs/msg/detail/information_quality__functions.h"
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"
#include "ros_etsi_its_msgs/msg/detail/cause_code__functions.h"
#include "ros_etsi_its_msgs/msg/detail/location_container__functions.h"
#include "ros_etsi_its_msgs/msg/detail/relevance_distance__functions.h"
#include "ros_etsi_its_msgs/msg/detail/path_point__functions.h"
#include "ros_etsi_its_msgs/msg/detail/event_point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ActionID__EXPECTED_HASH = {1, {
    0x34, 0x7d, 0x90, 0x45, 0x72, 0x3b, 0x80, 0x6a,
    0xbd, 0x32, 0x88, 0x89, 0x09, 0xa8, 0xc1, 0x72,
    0xd0, 0x1e, 0x87, 0x17, 0x32, 0x8d, 0x5e, 0xee,
    0x23, 0xa2, 0xa3, 0x8f, 0x03, 0x36, 0x50, 0x64,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH = {1, {
    0x65, 0x4d, 0xd3, 0x5c, 0x53, 0xfe, 0xb7, 0xef,
    0x5c, 0x8d, 0x6f, 0xe7, 0xe0, 0x2e, 0x54, 0x49,
    0x9c, 0xd5, 0x5d, 0xa3, 0x2f, 0x13, 0x00, 0xfd,
    0xec, 0x0c, 0x0b, 0x3e, 0x75, 0xe0, 0x73, 0xa2,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__CauseCode__EXPECTED_HASH = {1, {
    0xc4, 0x2d, 0x11, 0x3d, 0x4f, 0x71, 0xa8, 0xfa,
    0xc2, 0x17, 0xec, 0x2d, 0x78, 0x1d, 0x8e, 0xab,
    0x95, 0xf1, 0x2c, 0xcd, 0x38, 0x8d, 0x7b, 0x6c,
    0x5f, 0x4e, 0x5d, 0x89, 0x5d, 0xb4, 0x98, 0x89,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__DeltaReferencePosition__EXPECTED_HASH = {1, {
    0xce, 0x96, 0xfb, 0x2c, 0xfd, 0x2b, 0x17, 0xae,
    0x24, 0x6c, 0xdb, 0xae, 0x39, 0xee, 0x2d, 0xda,
    0xbc, 0xfd, 0x95, 0xcc, 0x6a, 0x3d, 0x70, 0xb2,
    0xe1, 0xc6, 0x2f, 0x2c, 0xaf, 0x00, 0x1b, 0x96,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__EventPoint__EXPECTED_HASH = {1, {
    0x32, 0xc9, 0x23, 0xea, 0x2a, 0x6a, 0xd1, 0xe3,
    0x95, 0xb0, 0x8c, 0x40, 0x92, 0x1e, 0x18, 0xc4,
    0x83, 0x55, 0xac, 0x48, 0xd9, 0x53, 0xc2, 0xdc,
    0x1c, 0xbe, 0x39, 0x30, 0xbf, 0x70, 0xb4, 0xf4,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH = {1, {
    0x16, 0x82, 0xdf, 0x3e, 0xf7, 0x89, 0x5b, 0x6a,
    0x10, 0xfb, 0x45, 0x17, 0x95, 0xd3, 0x70, 0x0d,
    0x21, 0x5d, 0x7b, 0x2a, 0x7d, 0xa0, 0xab, 0x94,
    0x7a, 0x79, 0x69, 0xc9, 0x3b, 0xb5, 0x1d, 0x9c,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__InformationQuality__EXPECTED_HASH = {1, {
    0x74, 0x48, 0x2b, 0x66, 0x62, 0xdf, 0x43, 0x32,
    0x8f, 0x92, 0x70, 0xee, 0x8a, 0xac, 0xe9, 0x74,
    0x1a, 0x76, 0x45, 0x3d, 0x6f, 0x83, 0x90, 0x64,
    0x23, 0x11, 0x3a, 0xb0, 0x05, 0xa2, 0x6d, 0xc9,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH = {1, {
    0x97, 0xfc, 0x70, 0x49, 0x90, 0xf3, 0x2d, 0x7c,
    0x48, 0x04, 0x6c, 0xe1, 0x38, 0xd0, 0x65, 0xb6,
    0x9d, 0x41, 0x40, 0x28, 0x2b, 0x71, 0x28, 0x61,
    0x72, 0x32, 0xdb, 0x52, 0xf6, 0x1d, 0x5c, 0xb6,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__LocationContainer__EXPECTED_HASH = {1, {
    0x50, 0xc4, 0x77, 0xa2, 0x23, 0x92, 0x0f, 0x57,
    0x92, 0x60, 0xc5, 0x0b, 0x66, 0x62, 0xbe, 0x6b,
    0x21, 0x0b, 0xb4, 0xe6, 0x4d, 0x75, 0x15, 0xe6,
    0xd4, 0x9a, 0x82, 0xe3, 0x89, 0x4a, 0xcf, 0xf3,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__ManagementContainer__EXPECTED_HASH = {1, {
    0xcd, 0x2d, 0xef, 0xca, 0x53, 0x0c, 0x7d, 0xd2,
    0xa2, 0x12, 0x12, 0x16, 0x75, 0xa8, 0x6c, 0xf8,
    0xe7, 0x37, 0xbd, 0xa9, 0x14, 0x34, 0x75, 0x14,
    0x11, 0x7b, 0xea, 0xcb, 0xf8, 0x77, 0xa2, 0xe4,
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
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__RelevanceDistance__EXPECTED_HASH = {1, {
    0x65, 0x14, 0xee, 0x24, 0xe6, 0xac, 0x6f, 0x92,
    0xe4, 0x8d, 0x65, 0xe4, 0x2d, 0x50, 0x82, 0x11,
    0x12, 0x07, 0x11, 0x88, 0x6e, 0xbf, 0xa5, 0x95,
    0xa8, 0xea, 0x0c, 0xa7, 0x8d, 0x74, 0x74, 0x3e,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__RelevanceTrafficDirection__EXPECTED_HASH = {1, {
    0x14, 0x8c, 0xa1, 0x37, 0x17, 0x0d, 0x91, 0x48,
    0x21, 0xda, 0x06, 0x8e, 0x84, 0x36, 0xec, 0x07,
    0xa7, 0xb8, 0xfb, 0xf1, 0xd5, 0x02, 0x43, 0x7e,
    0xe5, 0x94, 0xed, 0xd8, 0x1d, 0xf4, 0xa3, 0x0a,
  }};
static const rosidl_type_hash_t ros_etsi_its_msgs__msg__SituationContainer__EXPECTED_HASH = {1, {
    0xd9, 0x33, 0xdf, 0x0e, 0xf4, 0xcf, 0x8d, 0x4c,
    0x21, 0x7b, 0x8c, 0x9c, 0xf7, 0xe2, 0xa2, 0xc2,
    0x01, 0xf4, 0x0a, 0x02, 0x34, 0x7f, 0x90, 0xe1,
    0x54, 0x74, 0xba, 0x51, 0xfe, 0xc7, 0x70, 0x0a,
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char ros_etsi_its_msgs__msg__DENM__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DENM";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros_etsi_its_msgs__msg__ActionID__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ActionID";
static char ros_etsi_its_msgs__msg__Altitude__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Altitude";
static char ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME[] = "ros_etsi_its_msgs/msg/CauseCode";
static char ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/DeltaReferencePosition";
static char ros_etsi_its_msgs__msg__EventPoint__TYPE_NAME[] = "ros_etsi_its_msgs/msg/EventPoint";
static char ros_etsi_its_msgs__msg__Heading__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Heading";
static char ros_etsi_its_msgs__msg__InformationQuality__TYPE_NAME[] = "ros_etsi_its_msgs/msg/InformationQuality";
static char ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ItsPduHeader";
static char ros_etsi_its_msgs__msg__LocationContainer__TYPE_NAME[] = "ros_etsi_its_msgs/msg/LocationContainer";
static char ros_etsi_its_msgs__msg__ManagementContainer__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ManagementContainer";
static char ros_etsi_its_msgs__msg__PathDeltaTime__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathDeltaTime";
static char ros_etsi_its_msgs__msg__PathHistory__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathHistory";
static char ros_etsi_its_msgs__msg__PathPoint__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PathPoint";
static char ros_etsi_its_msgs__msg__PositionConfidenceEllipse__TYPE_NAME[] = "ros_etsi_its_msgs/msg/PositionConfidenceEllipse";
static char ros_etsi_its_msgs__msg__ReferencePosition__TYPE_NAME[] = "ros_etsi_its_msgs/msg/ReferencePosition";
static char ros_etsi_its_msgs__msg__RelevanceDistance__TYPE_NAME[] = "ros_etsi_its_msgs/msg/RelevanceDistance";
static char ros_etsi_its_msgs__msg__RelevanceTrafficDirection__TYPE_NAME[] = "ros_etsi_its_msgs/msg/RelevanceTrafficDirection";
static char ros_etsi_its_msgs__msg__SituationContainer__TYPE_NAME[] = "ros_etsi_its_msgs/msg/SituationContainer";
static char ros_etsi_its_msgs__msg__Speed__TYPE_NAME[] = "ros_etsi_its_msgs/msg/Speed";
static char ros_etsi_its_msgs__msg__StationType__TYPE_NAME[] = "ros_etsi_its_msgs/msg/StationType";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char ros_etsi_its_msgs__msg__DENM__FIELD_NAME__header[] = "header";
static char ros_etsi_its_msgs__msg__DENM__FIELD_NAME__its_header[] = "its_header";
static char ros_etsi_its_msgs__msg__DENM__FIELD_NAME__management[] = "management";
static char ros_etsi_its_msgs__msg__DENM__FIELD_NAME__has_situation[] = "has_situation";
static char ros_etsi_its_msgs__msg__DENM__FIELD_NAME__situation[] = "situation";
static char ros_etsi_its_msgs__msg__DENM__FIELD_NAME__has_location[] = "has_location";
static char ros_etsi_its_msgs__msg__DENM__FIELD_NAME__location[] = "location";

static rosidl_runtime_c__type_description__Field ros_etsi_its_msgs__msg__DENM__FIELDS[] = {
  {
    {ros_etsi_its_msgs__msg__DENM__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DENM__FIELD_NAME__its_header, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DENM__FIELD_NAME__management, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__ManagementContainer__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DENM__FIELD_NAME__has_situation, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DENM__FIELD_NAME__situation, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__SituationContainer__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DENM__FIELD_NAME__has_location, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DENM__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros_etsi_its_msgs__msg__LocationContainer__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros_etsi_its_msgs__msg__DENM__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ActionID__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Altitude__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__CauseCode__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__DeltaReferencePosition__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__EventPoint__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__Heading__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__InformationQuality__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ItsPduHeader__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__LocationContainer__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__ManagementContainer__TYPE_NAME, 41, 41},
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
    {ros_etsi_its_msgs__msg__RelevanceDistance__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__RelevanceTrafficDirection__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {ros_etsi_its_msgs__msg__SituationContainer__TYPE_NAME, 40, 40},
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
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros_etsi_its_msgs__msg__DENM__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros_etsi_its_msgs__msg__DENM__TYPE_NAME, 26, 26},
      {ros_etsi_its_msgs__msg__DENM__FIELDS, 7, 7},
    },
    {ros_etsi_its_msgs__msg__DENM__REFERENCED_TYPE_DESCRIPTIONS, 22, 22},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ActionID__EXPECTED_HASH, ros_etsi_its_msgs__msg__ActionID__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = ros_etsi_its_msgs__msg__ActionID__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Altitude__EXPECTED_HASH, ros_etsi_its_msgs__msg__Altitude__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = ros_etsi_its_msgs__msg__Altitude__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__CauseCode__EXPECTED_HASH, ros_etsi_its_msgs__msg__CauseCode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = ros_etsi_its_msgs__msg__CauseCode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__DeltaReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = ros_etsi_its_msgs__msg__DeltaReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__EventPoint__EXPECTED_HASH, ros_etsi_its_msgs__msg__EventPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = ros_etsi_its_msgs__msg__EventPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Heading__EXPECTED_HASH, ros_etsi_its_msgs__msg__Heading__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = ros_etsi_its_msgs__msg__Heading__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__InformationQuality__EXPECTED_HASH, ros_etsi_its_msgs__msg__InformationQuality__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = ros_etsi_its_msgs__msg__InformationQuality__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ItsPduHeader__EXPECTED_HASH, ros_etsi_its_msgs__msg__ItsPduHeader__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[8].fields = ros_etsi_its_msgs__msg__ItsPduHeader__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__LocationContainer__EXPECTED_HASH, ros_etsi_its_msgs__msg__LocationContainer__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[9].fields = ros_etsi_its_msgs__msg__LocationContainer__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ManagementContainer__EXPECTED_HASH, ros_etsi_its_msgs__msg__ManagementContainer__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[10].fields = ros_etsi_its_msgs__msg__ManagementContainer__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathDeltaTime__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathDeltaTime__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[11].fields = ros_etsi_its_msgs__msg__PathDeltaTime__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathHistory__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathHistory__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[12].fields = ros_etsi_its_msgs__msg__PathHistory__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PathPoint__EXPECTED_HASH, ros_etsi_its_msgs__msg__PathPoint__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[13].fields = ros_etsi_its_msgs__msg__PathPoint__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__PositionConfidenceEllipse__EXPECTED_HASH, ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[14].fields = ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__ReferencePosition__EXPECTED_HASH, ros_etsi_its_msgs__msg__ReferencePosition__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[15].fields = ros_etsi_its_msgs__msg__ReferencePosition__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__RelevanceDistance__EXPECTED_HASH, ros_etsi_its_msgs__msg__RelevanceDistance__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[16].fields = ros_etsi_its_msgs__msg__RelevanceDistance__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__RelevanceTrafficDirection__EXPECTED_HASH, ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[17].fields = ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__SituationContainer__EXPECTED_HASH, ros_etsi_its_msgs__msg__SituationContainer__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[18].fields = ros_etsi_its_msgs__msg__SituationContainer__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__Speed__EXPECTED_HASH, ros_etsi_its_msgs__msg__Speed__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[19].fields = ros_etsi_its_msgs__msg__Speed__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&ros_etsi_its_msgs__msg__StationType__EXPECTED_HASH, ros_etsi_its_msgs__msg__StationType__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[20].fields = ros_etsi_its_msgs__msg__StationType__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[21].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "ItsPduHeader its_header\n"
  "\n"
  "ManagementContainer management\n"
  "\n"
  "bool has_situation\n"
  "SituationContainer situation\n"
  "\n"
  "bool has_location\n"
  "LocationContainer location\n"
  "\n"
  "# TODO AlacarteContainer is missing";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros_etsi_its_msgs__msg__DENM__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros_etsi_its_msgs__msg__DENM__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 211, 211},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros_etsi_its_msgs__msg__DENM__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[23];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 23, 23};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros_etsi_its_msgs__msg__DENM__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros_etsi_its_msgs__msg__ActionID__get_individual_type_description_source(NULL);
    sources[3] = *ros_etsi_its_msgs__msg__Altitude__get_individual_type_description_source(NULL);
    sources[4] = *ros_etsi_its_msgs__msg__CauseCode__get_individual_type_description_source(NULL);
    sources[5] = *ros_etsi_its_msgs__msg__DeltaReferencePosition__get_individual_type_description_source(NULL);
    sources[6] = *ros_etsi_its_msgs__msg__EventPoint__get_individual_type_description_source(NULL);
    sources[7] = *ros_etsi_its_msgs__msg__Heading__get_individual_type_description_source(NULL);
    sources[8] = *ros_etsi_its_msgs__msg__InformationQuality__get_individual_type_description_source(NULL);
    sources[9] = *ros_etsi_its_msgs__msg__ItsPduHeader__get_individual_type_description_source(NULL);
    sources[10] = *ros_etsi_its_msgs__msg__LocationContainer__get_individual_type_description_source(NULL);
    sources[11] = *ros_etsi_its_msgs__msg__ManagementContainer__get_individual_type_description_source(NULL);
    sources[12] = *ros_etsi_its_msgs__msg__PathDeltaTime__get_individual_type_description_source(NULL);
    sources[13] = *ros_etsi_its_msgs__msg__PathHistory__get_individual_type_description_source(NULL);
    sources[14] = *ros_etsi_its_msgs__msg__PathPoint__get_individual_type_description_source(NULL);
    sources[15] = *ros_etsi_its_msgs__msg__PositionConfidenceEllipse__get_individual_type_description_source(NULL);
    sources[16] = *ros_etsi_its_msgs__msg__ReferencePosition__get_individual_type_description_source(NULL);
    sources[17] = *ros_etsi_its_msgs__msg__RelevanceDistance__get_individual_type_description_source(NULL);
    sources[18] = *ros_etsi_its_msgs__msg__RelevanceTrafficDirection__get_individual_type_description_source(NULL);
    sources[19] = *ros_etsi_its_msgs__msg__SituationContainer__get_individual_type_description_source(NULL);
    sources[20] = *ros_etsi_its_msgs__msg__Speed__get_individual_type_description_source(NULL);
    sources[21] = *ros_etsi_its_msgs__msg__StationType__get_individual_type_description_source(NULL);
    sources[22] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
