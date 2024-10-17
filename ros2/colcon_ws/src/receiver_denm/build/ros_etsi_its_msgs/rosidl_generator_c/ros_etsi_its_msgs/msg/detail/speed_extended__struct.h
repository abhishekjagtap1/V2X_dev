// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/SpeedExtended.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/speed_extended.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_STANDSTILL'.
enum
{
  ros_etsi_its_msgs__msg__SpeedExtended__VALUE_STANDSTILL = 0l
};

/// Constant 'VALUE_ONE_CENTIMETER_PER_SECOND'.
enum
{
  ros_etsi_its_msgs__msg__SpeedExtended__VALUE_ONE_CENTIMETER_PER_SECOND = 1l
};

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__SpeedExtended__VALUE_UNAVAILABLE = 16383l
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__SpeedExtended__CONFIDENCE_OUT_OF_RANGE = 126
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__SpeedExtended__CONFIDENCE_UNAVAILABLE = 127
};

/// Struct defined in msg/SpeedExtended in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__SpeedExtended
{
  /// 0.01 m/s
  int32_t value;
  /// 0.01 m/s
  uint8_t confidence;
} ros_etsi_its_msgs__msg__SpeedExtended;

// Struct for a sequence of ros_etsi_its_msgs__msg__SpeedExtended.
typedef struct ros_etsi_its_msgs__msg__SpeedExtended__Sequence
{
  ros_etsi_its_msgs__msg__SpeedExtended * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__SpeedExtended__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_H_
