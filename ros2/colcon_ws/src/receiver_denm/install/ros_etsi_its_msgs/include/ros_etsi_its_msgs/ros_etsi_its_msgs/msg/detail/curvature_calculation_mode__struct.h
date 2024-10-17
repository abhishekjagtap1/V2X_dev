// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/CurvatureCalculationMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/curvature_calculation_mode.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'YAW_RATE_USED'.
enum
{
  ros_etsi_its_msgs__msg__CurvatureCalculationMode__YAW_RATE_USED = 0
};

/// Constant 'YAW_RATE_NOT_USED'.
enum
{
  ros_etsi_its_msgs__msg__CurvatureCalculationMode__YAW_RATE_NOT_USED = 1
};

/// Constant 'UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__CurvatureCalculationMode__UNAVAILABLE = 2
};

/// Struct defined in msg/CurvatureCalculationMode in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__CurvatureCalculationMode
{
  uint8_t value;
} ros_etsi_its_msgs__msg__CurvatureCalculationMode;

// Struct for a sequence of ros_etsi_its_msgs__msg__CurvatureCalculationMode.
typedef struct ros_etsi_its_msgs__msg__CurvatureCalculationMode__Sequence
{
  ros_etsi_its_msgs__msg__CurvatureCalculationMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__CurvatureCalculationMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE_CALCULATION_MODE__STRUCT_H_
