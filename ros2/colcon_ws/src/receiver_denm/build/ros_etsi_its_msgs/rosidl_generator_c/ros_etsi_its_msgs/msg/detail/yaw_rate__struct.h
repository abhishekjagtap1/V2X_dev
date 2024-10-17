// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/yaw_rate.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__VALUE_UNAVAILABLE = 32767
};

/// Constant 'CONFIDENCE_0DOT01_DEGSEC'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_0DOT01_DEGSEC = 0
};

/// Constant 'CONFIDENCE_0DOT05_DEGSEC'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_0DOT05_DEGSEC = 1
};

/// Constant 'CONFIDENCE_0DOT1_DEGSEC'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_0DOT1_DEGSEC = 2
};

/// Constant 'CONFIDENCE_1_DEGSEC'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_1_DEGSEC = 3
};

/// Constant 'CONFIDENCE_5_DEGSEC'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_5_DEGSEC = 4
};

/// Constant 'CONFIDENCE_10_DEGSEC'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_10_DEGSEC = 5
};

/// Constant 'CONFIDENCE_100_DEGSEC'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_100_DEGSEC = 6
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_OUT_OF_RANGE = 7
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__YawRate__CONFIDENCE_UNAVAILABLE = 8
};

/// Struct defined in msg/YawRate in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__YawRate
{
  /// 0.01 degree/s
  int16_t value;
  uint8_t confidence;
} ros_etsi_its_msgs__msg__YawRate;

// Struct for a sequence of ros_etsi_its_msgs__msg__YawRate.
typedef struct ros_etsi_its_msgs__msg__YawRate__Sequence
{
  ros_etsi_its_msgs__msg__YawRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__YawRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_
