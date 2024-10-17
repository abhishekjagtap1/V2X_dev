// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/Altitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/altitude.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_REFERENCE_ELLIPSOID_SURFACE'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__VALUE_REFERENCE_ELLIPSOID_SURFACE = 0l
};

/// Constant 'VALUE_ONE_CENTIMETER'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__VALUE_ONE_CENTIMETER = 1l
};

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__VALUE_UNAVAILABLE = 800001l
};

/// Constant 'CONFIDENCE_1CM'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_1CM = 0
};

/// Constant 'CONFIDENCE_2CM'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_2CM = 1
};

/// Constant 'CONFIDENCE_5CM'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_5CM = 2
};

/// Constant 'CONFIDENCE_10CM'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_10CM = 3
};

/// Constant 'CONFIDENCE_20CM'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_20CM = 4
};

/// Constant 'CONFIDENCE_50CM'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_50CM = 5
};

/// Constant 'CONFIDENCE_1M'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_1M = 6
};

/// Constant 'CONFIDENCE_2M'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_2M = 7
};

/// Constant 'CONFIDENCE_5M'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_5M = 8
};

/// Constant 'CONFIDENCE_10M'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_10M = 9
};

/// Constant 'CONFIDENCE_20M'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_20M = 10
};

/// Constant 'CONFIDENCE_50M'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_50M = 11
};

/// Constant 'CONFIDENCE_100M'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_100M = 12
};

/// Constant 'CONFIDENCE_200M'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_200M = 13
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_OUT_OF_RANGE = 14
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__Altitude__CONFIDENCE_UNAVAILABLE = 15
};

/// Struct defined in msg/Altitude in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__Altitude
{
  /// 0.01 meter
  int32_t value;
  uint8_t confidence;
} ros_etsi_its_msgs__msg__Altitude;

// Struct for a sequence of ros_etsi_its_msgs__msg__Altitude.
typedef struct ros_etsi_its_msgs__msg__Altitude__Sequence
{
  ros_etsi_its_msgs__msg__Altitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__Altitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__STRUCT_H_
