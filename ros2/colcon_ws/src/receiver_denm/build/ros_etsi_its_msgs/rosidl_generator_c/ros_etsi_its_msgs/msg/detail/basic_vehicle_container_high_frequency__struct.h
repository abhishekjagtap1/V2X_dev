// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/basic_vehicle_container_high_frequency.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'heading'
#include "ros_etsi_its_msgs/msg/detail/heading__struct.h"
// Member 'speed'
#include "ros_etsi_its_msgs/msg/detail/speed__struct.h"
// Member 'drive_direction'
#include "ros_etsi_its_msgs/msg/detail/drive_direction__struct.h"
// Member 'vehicle_length'
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__struct.h"
// Member 'vehicle_width'
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__struct.h"
// Member 'longitudinal_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__struct.h"
// Member 'curvature'
#include "ros_etsi_its_msgs/msg/detail/curvature__struct.h"
// Member 'curvature_calculation_mode'
#include "ros_etsi_its_msgs/msg/detail/curvature_calculation_mode__struct.h"
// Member 'yaw_rate'
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__struct.h"
// Member 'acceleration_control'
#include "ros_etsi_its_msgs/msg/detail/acceleration_control__struct.h"

/// Struct defined in msg/BasicVehicleContainerHighFrequency in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency
{
  ros_etsi_its_msgs__msg__Heading heading;
  ros_etsi_its_msgs__msg__Speed speed;
  ros_etsi_its_msgs__msg__DriveDirection drive_direction;
  ros_etsi_its_msgs__msg__VehicleLength vehicle_length;
  ros_etsi_its_msgs__msg__VehicleWidth vehicle_width;
  ros_etsi_its_msgs__msg__LongitudinalAcceleration longitudinal_acceleration;
  ros_etsi_its_msgs__msg__Curvature curvature;
  ros_etsi_its_msgs__msg__CurvatureCalculationMode curvature_calculation_mode;
  ros_etsi_its_msgs__msg__YawRate yaw_rate;
  /// optional data fields
  bool has_acceleration_control;
  ros_etsi_its_msgs__msg__AccelerationControl acceleration_control;
} ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency;

// Struct for a sequence of ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency.
typedef struct ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence
{
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_HIGH_FREQUENCY__STRUCT_H_
