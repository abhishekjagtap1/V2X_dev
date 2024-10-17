// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ObjectDimension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_dimension.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DIMENSION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DIMENSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_ONE_METER'.
enum
{
  ros_etsi_its_msgs__msg__ObjectDimension__VALUE_ONE_METER = 10l
};

/// Constant 'CONFIDENCE_ZEROPOINTZEROONEMETER'.
enum
{
  ros_etsi_its_msgs__msg__ObjectDimension__CONFIDENCE_ZEROPOINTZEROONEMETER = 1
};

/// Constant 'CONFIDENCE_M'.
enum
{
  ros_etsi_its_msgs__msg__ObjectDimension__CONFIDENCE_M = 100
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__ObjectDimension__CONFIDENCE_OUT_OF_RANGE = 101
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__ObjectDimension__CONFIDENCE_UNAVAILABLE = 102
};

/// Struct defined in msg/ObjectDimension in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__ObjectDimension
{
  /// 0.1m = 1
  int32_t value;
  int8_t confidence;
} ros_etsi_its_msgs__msg__ObjectDimension;

// Struct for a sequence of ros_etsi_its_msgs__msg__ObjectDimension.
typedef struct ros_etsi_its_msgs__msg__ObjectDimension__Sequence
{
  ros_etsi_its_msgs__msg__ObjectDimension * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ObjectDimension__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DIMENSION__STRUCT_H_
