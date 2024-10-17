// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_length.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_TEN_CENTIMETERS'.
enum
{
  ros_etsi_its_msgs__msg__VehicleLength__VALUE_TEN_CENTIMETERS = 1
};

/// Constant 'VALUE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__VehicleLength__VALUE_OUT_OF_RANGE = 1022
};

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__VehicleLength__VALUE_UNAVAILABLE = 1023
};

/// Constant 'CONFIDENCE_INDICATION_NO_TRAILER'.
enum
{
  ros_etsi_its_msgs__msg__VehicleLength__CONFIDENCE_INDICATION_NO_TRAILER = 0
};

/// Constant 'CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH'.
enum
{
  ros_etsi_its_msgs__msg__VehicleLength__CONFIDENCE_INDICATION_TRAILER_WITH_KNOWN_LENGTH = 1
};

/// Constant 'CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH'.
enum
{
  ros_etsi_its_msgs__msg__VehicleLength__CONFIDENCE_INDICATION_TRAILER_WITH_UNKNOWN_LENGTH = 2
};

/// Constant 'CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE'.
enum
{
  ros_etsi_its_msgs__msg__VehicleLength__CONFIDENCE_INDICATION_UNKNOWN_TRAILER_PRESENCE = 3
};

/// Constant 'CONFIDENCE_INDICATION_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__VehicleLength__CONFIDENCE_INDICATION_UNAVAILABLE = 4
};

/// Struct defined in msg/VehicleLength in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__VehicleLength
{
  /// 0.1 meter
  uint16_t value;
  uint8_t confidence_indication;
} ros_etsi_its_msgs__msg__VehicleLength;

// Struct for a sequence of ros_etsi_its_msgs__msg__VehicleLength.
typedef struct ros_etsi_its_msgs__msg__VehicleLength__Sequence
{
  ros_etsi_its_msgs__msg__VehicleLength * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__VehicleLength__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_
