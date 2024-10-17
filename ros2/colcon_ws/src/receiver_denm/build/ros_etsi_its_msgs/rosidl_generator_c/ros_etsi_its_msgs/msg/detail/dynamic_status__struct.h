// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/DynamicStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/dynamic_status.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DYNAMIC_STATUS__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DYNAMIC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_DYNAMIC'.
enum
{
  ros_etsi_its_msgs__msg__DynamicStatus__VALUE_DYNAMIC = 0l
};

/// Constant 'VALUE_HASBEENDYNAMIC'.
enum
{
  ros_etsi_its_msgs__msg__DynamicStatus__VALUE_HASBEENDYNAMIC = 1l
};

/// Constant 'VALUE_STATIC'.
enum
{
  ros_etsi_its_msgs__msg__DynamicStatus__VALUE_STATIC = 2l
};

/// Struct defined in msg/DynamicStatus in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__DynamicStatus
{
  int32_t value;
} ros_etsi_its_msgs__msg__DynamicStatus;

// Struct for a sequence of ros_etsi_its_msgs__msg__DynamicStatus.
typedef struct ros_etsi_its_msgs__msg__DynamicStatus__Sequence
{
  ros_etsi_its_msgs__msg__DynamicStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__DynamicStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DYNAMIC_STATUS__STRUCT_H_
