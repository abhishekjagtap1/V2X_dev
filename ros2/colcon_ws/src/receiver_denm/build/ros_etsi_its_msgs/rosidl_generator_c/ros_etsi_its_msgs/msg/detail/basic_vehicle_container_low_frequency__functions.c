// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_role`
#include "ros_etsi_its_msgs/msg/detail/vehicle_role__functions.h"
// Member `exterior_lights`
#include "ros_etsi_its_msgs/msg/detail/exterior_lights__functions.h"
// Member `path_history`
#include "ros_etsi_its_msgs/msg/detail/path_history__functions.h"

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__init(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_role
  if (!ros_etsi_its_msgs__msg__VehicleRole__init(&msg->vehicle_role)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__fini(msg);
    return false;
  }
  // exterior_lights
  if (!ros_etsi_its_msgs__msg__ExteriorLights__init(&msg->exterior_lights)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__fini(msg);
    return false;
  }
  // path_history
  if (!ros_etsi_its_msgs__msg__PathHistory__init(&msg->path_history)) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__fini(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_role
  ros_etsi_its_msgs__msg__VehicleRole__fini(&msg->vehicle_role);
  // exterior_lights
  ros_etsi_its_msgs__msg__ExteriorLights__fini(&msg->exterior_lights);
  // path_history
  ros_etsi_its_msgs__msg__PathHistory__fini(&msg->path_history);
}

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__are_equal(const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * lhs, const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_role
  if (!ros_etsi_its_msgs__msg__VehicleRole__are_equal(
      &(lhs->vehicle_role), &(rhs->vehicle_role)))
  {
    return false;
  }
  // exterior_lights
  if (!ros_etsi_its_msgs__msg__ExteriorLights__are_equal(
      &(lhs->exterior_lights), &(rhs->exterior_lights)))
  {
    return false;
  }
  // path_history
  if (!ros_etsi_its_msgs__msg__PathHistory__are_equal(
      &(lhs->path_history), &(rhs->path_history)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__copy(
  const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * input,
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_role
  if (!ros_etsi_its_msgs__msg__VehicleRole__copy(
      &(input->vehicle_role), &(output->vehicle_role)))
  {
    return false;
  }
  // exterior_lights
  if (!ros_etsi_its_msgs__msg__ExteriorLights__copy(
      &(input->exterior_lights), &(output->exterior_lights)))
  {
    return false;
  }
  // path_history
  if (!ros_etsi_its_msgs__msg__PathHistory__copy(
      &(input->path_history), &(output->path_history)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency *
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * msg = (ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency));
  bool success = ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__destroy(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence__init(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence__fini(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence * array)
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
      ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence *
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence * array = (ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence__destroy(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence__are_equal(const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence * lhs, const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence__copy(
  const ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence * input,
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * data =
      (ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
