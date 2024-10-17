// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/SensorInformationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/sensor_information_container.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'sensors_information'
#include "ros_etsi_its_msgs/msg/detail/sensor_information__struct.h"

/// Struct defined in msg/SensorInformationContainer in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__SensorInformationContainer
{
  ros_etsi_its_msgs__msg__SensorInformation__Sequence sensors_information;
} ros_etsi_its_msgs__msg__SensorInformationContainer;

// Struct for a sequence of ros_etsi_its_msgs__msg__SensorInformationContainer.
typedef struct ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence
{
  ros_etsi_its_msgs__msg__SensorInformationContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__STRUCT_H_
