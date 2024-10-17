// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/basic_vehicle_container_low_frequency.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'vehicle_role'
#include "ros_etsi_its_msgs/msg/detail/vehicle_role__struct.h"
// Member 'exterior_lights'
#include "ros_etsi_its_msgs/msg/detail/exterior_lights__struct.h"
// Member 'path_history'
#include "ros_etsi_its_msgs/msg/detail/path_history__struct.h"

/// Struct defined in msg/BasicVehicleContainerLowFrequency in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency
{
  ros_etsi_its_msgs__msg__VehicleRole vehicle_role;
  ros_etsi_its_msgs__msg__ExteriorLights exterior_lights;
  ros_etsi_its_msgs__msg__PathHistory path_history;
} ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency;

// Struct for a sequence of ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency.
typedef struct ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence
{
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_H_
