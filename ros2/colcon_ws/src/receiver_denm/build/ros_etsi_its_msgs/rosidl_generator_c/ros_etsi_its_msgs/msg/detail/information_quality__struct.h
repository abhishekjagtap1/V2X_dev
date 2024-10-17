// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/InformationQuality.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/information_quality.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INFORMATION_QUALITY__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INFORMATION_QUALITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__InformationQuality__UNAVAILABLE = 0
};

/// Constant 'LOWEST'.
enum
{
  ros_etsi_its_msgs__msg__InformationQuality__LOWEST = 1
};

/// Constant 'HIGHEST'.
enum
{
  ros_etsi_its_msgs__msg__InformationQuality__HIGHEST = 7
};

/// Struct defined in msg/InformationQuality in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__InformationQuality
{
  int8_t value;
} ros_etsi_its_msgs__msg__InformationQuality;

// Struct for a sequence of ros_etsi_its_msgs__msg__InformationQuality.
typedef struct ros_etsi_its_msgs__msg__InformationQuality__Sequence
{
  ros_etsi_its_msgs__msg__InformationQuality * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__InformationQuality__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INFORMATION_QUALITY__STRUCT_H_
