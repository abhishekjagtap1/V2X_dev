// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `heading`
#include "ros_etsi_its_msgs/msg/detail/heading__functions.h"
// Member `speed`
#include "ros_etsi_its_msgs/msg/detail/speed__functions.h"
// Member `drive_direction`
#include "ros_etsi_its_msgs/msg/detail/drive_direction__functions.h"
// Member `vehicle_length`
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__functions.h"
// Member `vehicle_width`
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__functions.h"
// Member `longitudinal_acceleration`
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"
// Member `curvature`
#include "ros_etsi_its_msgs/msg/detail/curvature__functions.h"
// Member `curvature_calculation_mode`
#include "ros_etsi_its_msgs/msg/detail/curvature_calculation_mode__functions.h"
// Member `yaw_rate`
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__functions.h"
// Member `acceleration_control`
#include "ros_etsi_its_msgs/msg/detail/acceleration_control__functions.h"

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__init(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * msg)
{
  if (!msg) {
    return false;
  }
  // heading
  if (!ros_etsi_its_msgs__msg__Heading__init(&msg->heading)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // speed
  if (!ros_etsi_its_msgs__msg__Speed__init(&msg->speed)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // drive_direction
  if (!ros_etsi_its_msgs__msg__DriveDirection__init(&msg->drive_direction)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // vehicle_length
  if (!ros_etsi_its_msgs__msg__VehicleLength__init(&msg->vehicle_length)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // vehicle_width
  if (!ros_etsi_its_msgs__msg__VehicleWidth__init(&msg->vehicle_width)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // longitudinal_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__init(&msg->longitudinal_acceleration)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // curvature
  if (!ros_etsi_its_msgs__msg__Curvature__init(&msg->curvature)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // curvature_calculation_mode
  if (!ros_etsi_its_msgs__msg__CurvatureCalculationMode__init(&msg->curvature_calculation_mode)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // yaw_rate
  if (!ros_etsi_its_msgs__msg__YawRate__init(&msg->yaw_rate)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  // has_acceleration_control
  // acceleration_control
  if (!ros_etsi_its_msgs__msg__AccelerationControl__init(&msg->acceleration_control)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * msg)
{
  if (!msg) {
    return;
  }
  // heading
  ros_etsi_its_msgs__msg__Heading__fini(&msg->heading);
  // speed
  ros_etsi_its_msgs__msg__Speed__fini(&msg->speed);
  // drive_direction
  ros_etsi_its_msgs__msg__DriveDirection__fini(&msg->drive_direction);
  // vehicle_length
  ros_etsi_its_msgs__msg__VehicleLength__fini(&msg->vehicle_length);
  // vehicle_width
  ros_etsi_its_msgs__msg__VehicleWidth__fini(&msg->vehicle_width);
  // longitudinal_acceleration
  ros_etsi_its_msgs__msg__LongitudinalAcceleration__fini(&msg->longitudinal_acceleration);
  // curvature
  ros_etsi_its_msgs__msg__Curvature__fini(&msg->curvature);
  // curvature_calculation_mode
  ros_etsi_its_msgs__msg__CurvatureCalculationMode__fini(&msg->curvature_calculation_mode);
  // yaw_rate
  ros_etsi_its_msgs__msg__YawRate__fini(&msg->yaw_rate);
  // has_acceleration_control
  // acceleration_control
  ros_etsi_its_msgs__msg__AccelerationControl__fini(&msg->acceleration_control);
}

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__are_equal(const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * lhs, const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // heading
  if (!ros_etsi_its_msgs__msg__Heading__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // speed
  if (!ros_etsi_its_msgs__msg__Speed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // drive_direction
  if (!ros_etsi_its_msgs__msg__DriveDirection__are_equal(
      &(lhs->drive_direction), &(rhs->drive_direction)))
  {
    return false;
  }
  // vehicle_length
  if (!ros_etsi_its_msgs__msg__VehicleLength__are_equal(
      &(lhs->vehicle_length), &(rhs->vehicle_length)))
  {
    return false;
  }
  // vehicle_width
  if (!ros_etsi_its_msgs__msg__VehicleWidth__are_equal(
      &(lhs->vehicle_width), &(rhs->vehicle_width)))
  {
    return false;
  }
  // longitudinal_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__are_equal(
      &(lhs->longitudinal_acceleration), &(rhs->longitudinal_acceleration)))
  {
    return false;
  }
  // curvature
  if (!ros_etsi_its_msgs__msg__Curvature__are_equal(
      &(lhs->curvature), &(rhs->curvature)))
  {
    return false;
  }
  // curvature_calculation_mode
  if (!ros_etsi_its_msgs__msg__CurvatureCalculationMode__are_equal(
      &(lhs->curvature_calculation_mode), &(rhs->curvature_calculation_mode)))
  {
    return false;
  }
  // yaw_rate
  if (!ros_etsi_its_msgs__msg__YawRate__are_equal(
      &(lhs->yaw_rate), &(rhs->yaw_rate)))
  {
    return false;
  }
  // has_acceleration_control
  if (lhs->has_acceleration_control != rhs->has_acceleration_control) {
    return false;
  }
  // acceleration_control
  if (!ros_etsi_its_msgs__msg__AccelerationControl__are_equal(
      &(lhs->acceleration_control), &(rhs->acceleration_control)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__copy(
  const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * input,
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * output)
{
  if (!input || !output) {
    return false;
  }
  // heading
  if (!ros_etsi_its_msgs__msg__Heading__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // speed
  if (!ros_etsi_its_msgs__msg__Speed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // drive_direction
  if (!ros_etsi_its_msgs__msg__DriveDirection__copy(
      &(input->drive_direction), &(output->drive_direction)))
  {
    return false;
  }
  // vehicle_length
  if (!ros_etsi_its_msgs__msg__VehicleLength__copy(
      &(input->vehicle_length), &(output->vehicle_length)))
  {
    return false;
  }
  // vehicle_width
  if (!ros_etsi_its_msgs__msg__VehicleWidth__copy(
      &(input->vehicle_width), &(output->vehicle_width)))
  {
    return false;
  }
  // longitudinal_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__copy(
      &(input->longitudinal_acceleration), &(output->longitudinal_acceleration)))
  {
    return false;
  }
  // curvature
  if (!ros_etsi_its_msgs__msg__Curvature__copy(
      &(input->curvature), &(output->curvature)))
  {
    return false;
  }
  // curvature_calculation_mode
  if (!ros_etsi_its_msgs__msg__CurvatureCalculationMode__copy(
      &(input->curvature_calculation_mode), &(output->curvature_calculation_mode)))
  {
    return false;
  }
  // yaw_rate
  if (!ros_etsi_its_msgs__msg__YawRate__copy(
      &(input->yaw_rate), &(output->yaw_rate)))
  {
    return false;
  }
  // has_acceleration_control
  output->has_acceleration_control = input->has_acceleration_control;
  // acceleration_control
  if (!ros_etsi_its_msgs__msg__AccelerationControl__copy(
      &(input->acceleration_control), &(output->acceleration_control)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency *
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * msg = (ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency));
  bool success = ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__destroy(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__init(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__fini(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence *
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * array = (ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__destroy(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__are_equal(const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * lhs, const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence__copy(
  const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * input,
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * data =
      (ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
