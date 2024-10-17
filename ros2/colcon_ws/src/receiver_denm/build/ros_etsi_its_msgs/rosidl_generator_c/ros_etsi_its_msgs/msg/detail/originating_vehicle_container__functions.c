// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__functions.h"

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
// Member `vehicle_orientation_angle`
#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__functions.h"
// Member `drive_direction`
#include "ros_etsi_its_msgs/msg/detail/drive_direction__functions.h"
// Member `vehicle_length`
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__functions.h"
// Member `vehicle_width`
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__functions.h"
// Member `longitudinal_acceleration`
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"
// Member `yaw_rate`
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__functions.h"

bool
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__init(ros_etsi_its_msgs__msg__OriginatingVehicleContainer * msg)
{
  if (!msg) {
    return false;
  }
  // heading
  if (!ros_etsi_its_msgs__msg__Heading__init(&msg->heading)) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // speed
  if (!ros_etsi_its_msgs__msg__Speed__init(&msg->speed)) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // has_vehicle_orientation_angle
  // vehicle_orientation_angle
  if (!ros_etsi_its_msgs__msg__WGS84Angle__init(&msg->vehicle_orientation_angle)) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // drive_direction
  if (!ros_etsi_its_msgs__msg__DriveDirection__init(&msg->drive_direction)) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // has_vehicle_length
  // vehicle_length
  if (!ros_etsi_its_msgs__msg__VehicleLength__init(&msg->vehicle_length)) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // has_vehicle_width
  // vehicle_width
  if (!ros_etsi_its_msgs__msg__VehicleWidth__init(&msg->vehicle_width)) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // has_vehicle_height
  // vehicle_height
  // has_longitudinal_acceleration
  // longitudinal_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__init(&msg->longitudinal_acceleration)) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  // has_yaw_rate
  // yaw_rate
  if (!ros_etsi_its_msgs__msg__YawRate__init(&msg->yaw_rate)) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(ros_etsi_its_msgs__msg__OriginatingVehicleContainer * msg)
{
  if (!msg) {
    return;
  }
  // heading
  ros_etsi_its_msgs__msg__Heading__fini(&msg->heading);
  // speed
  ros_etsi_its_msgs__msg__Speed__fini(&msg->speed);
  // has_vehicle_orientation_angle
  // vehicle_orientation_angle
  ros_etsi_its_msgs__msg__WGS84Angle__fini(&msg->vehicle_orientation_angle);
  // drive_direction
  ros_etsi_its_msgs__msg__DriveDirection__fini(&msg->drive_direction);
  // has_vehicle_length
  // vehicle_length
  ros_etsi_its_msgs__msg__VehicleLength__fini(&msg->vehicle_length);
  // has_vehicle_width
  // vehicle_width
  ros_etsi_its_msgs__msg__VehicleWidth__fini(&msg->vehicle_width);
  // has_vehicle_height
  // vehicle_height
  // has_longitudinal_acceleration
  // longitudinal_acceleration
  ros_etsi_its_msgs__msg__LongitudinalAcceleration__fini(&msg->longitudinal_acceleration);
  // has_yaw_rate
  // yaw_rate
  ros_etsi_its_msgs__msg__YawRate__fini(&msg->yaw_rate);
}

bool
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__are_equal(const ros_etsi_its_msgs__msg__OriginatingVehicleContainer * lhs, const ros_etsi_its_msgs__msg__OriginatingVehicleContainer * rhs)
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
  // has_vehicle_orientation_angle
  if (lhs->has_vehicle_orientation_angle != rhs->has_vehicle_orientation_angle) {
    return false;
  }
  // vehicle_orientation_angle
  if (!ros_etsi_its_msgs__msg__WGS84Angle__are_equal(
      &(lhs->vehicle_orientation_angle), &(rhs->vehicle_orientation_angle)))
  {
    return false;
  }
  // drive_direction
  if (!ros_etsi_its_msgs__msg__DriveDirection__are_equal(
      &(lhs->drive_direction), &(rhs->drive_direction)))
  {
    return false;
  }
  // has_vehicle_length
  if (lhs->has_vehicle_length != rhs->has_vehicle_length) {
    return false;
  }
  // vehicle_length
  if (!ros_etsi_its_msgs__msg__VehicleLength__are_equal(
      &(lhs->vehicle_length), &(rhs->vehicle_length)))
  {
    return false;
  }
  // has_vehicle_width
  if (lhs->has_vehicle_width != rhs->has_vehicle_width) {
    return false;
  }
  // vehicle_width
  if (!ros_etsi_its_msgs__msg__VehicleWidth__are_equal(
      &(lhs->vehicle_width), &(rhs->vehicle_width)))
  {
    return false;
  }
  // has_vehicle_height
  if (lhs->has_vehicle_height != rhs->has_vehicle_height) {
    return false;
  }
  // vehicle_height
  if (lhs->vehicle_height != rhs->vehicle_height) {
    return false;
  }
  // has_longitudinal_acceleration
  if (lhs->has_longitudinal_acceleration != rhs->has_longitudinal_acceleration) {
    return false;
  }
  // longitudinal_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__are_equal(
      &(lhs->longitudinal_acceleration), &(rhs->longitudinal_acceleration)))
  {
    return false;
  }
  // has_yaw_rate
  if (lhs->has_yaw_rate != rhs->has_yaw_rate) {
    return false;
  }
  // yaw_rate
  if (!ros_etsi_its_msgs__msg__YawRate__are_equal(
      &(lhs->yaw_rate), &(rhs->yaw_rate)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__copy(
  const ros_etsi_its_msgs__msg__OriginatingVehicleContainer * input,
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer * output)
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
  // has_vehicle_orientation_angle
  output->has_vehicle_orientation_angle = input->has_vehicle_orientation_angle;
  // vehicle_orientation_angle
  if (!ros_etsi_its_msgs__msg__WGS84Angle__copy(
      &(input->vehicle_orientation_angle), &(output->vehicle_orientation_angle)))
  {
    return false;
  }
  // drive_direction
  if (!ros_etsi_its_msgs__msg__DriveDirection__copy(
      &(input->drive_direction), &(output->drive_direction)))
  {
    return false;
  }
  // has_vehicle_length
  output->has_vehicle_length = input->has_vehicle_length;
  // vehicle_length
  if (!ros_etsi_its_msgs__msg__VehicleLength__copy(
      &(input->vehicle_length), &(output->vehicle_length)))
  {
    return false;
  }
  // has_vehicle_width
  output->has_vehicle_width = input->has_vehicle_width;
  // vehicle_width
  if (!ros_etsi_its_msgs__msg__VehicleWidth__copy(
      &(input->vehicle_width), &(output->vehicle_width)))
  {
    return false;
  }
  // has_vehicle_height
  output->has_vehicle_height = input->has_vehicle_height;
  // vehicle_height
  output->vehicle_height = input->vehicle_height;
  // has_longitudinal_acceleration
  output->has_longitudinal_acceleration = input->has_longitudinal_acceleration;
  // longitudinal_acceleration
  if (!ros_etsi_its_msgs__msg__LongitudinalAcceleration__copy(
      &(input->longitudinal_acceleration), &(output->longitudinal_acceleration)))
  {
    return false;
  }
  // has_yaw_rate
  output->has_yaw_rate = input->has_yaw_rate;
  // yaw_rate
  if (!ros_etsi_its_msgs__msg__YawRate__copy(
      &(input->yaw_rate), &(output->yaw_rate)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__OriginatingVehicleContainer *
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer * msg = (ros_etsi_its_msgs__msg__OriginatingVehicleContainer *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer));
  bool success = ros_etsi_its_msgs__msg__OriginatingVehicleContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__destroy(ros_etsi_its_msgs__msg__OriginatingVehicleContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence__init(ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__OriginatingVehicleContainer *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__OriginatingVehicleContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence__fini(ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence * array)
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
      ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence *
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence * array = (ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence__destroy(ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence__are_equal(const ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence * lhs, const ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__OriginatingVehicleContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence__copy(
  const ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence * input,
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__OriginatingVehicleContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__OriginatingVehicleContainer * data =
      (ros_etsi_its_msgs__msg__OriginatingVehicleContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__OriginatingVehicleContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__OriginatingVehicleContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
