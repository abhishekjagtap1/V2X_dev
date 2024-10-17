// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/SensorInformation.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/sensor_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detection_area`
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__functions.h"

bool
ros_etsi_its_msgs__msg__SensorInformation__init(ros_etsi_its_msgs__msg__SensorInformation * msg)
{
  if (!msg) {
    return false;
  }
  // sensor_id
  // type
  // detection_area
  if (!ros_etsi_its_msgs__msg__VehicleSensor__init(&msg->detection_area)) {
    ros_etsi_its_msgs__msg__SensorInformation__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__SensorInformation__fini(ros_etsi_its_msgs__msg__SensorInformation * msg)
{
  if (!msg) {
    return;
  }
  // sensor_id
  // type
  // detection_area
  ros_etsi_its_msgs__msg__VehicleSensor__fini(&msg->detection_area);
}

bool
ros_etsi_its_msgs__msg__SensorInformation__are_equal(const ros_etsi_its_msgs__msg__SensorInformation * lhs, const ros_etsi_its_msgs__msg__SensorInformation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensor_id
  if (lhs->sensor_id != rhs->sensor_id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // detection_area
  if (!ros_etsi_its_msgs__msg__VehicleSensor__are_equal(
      &(lhs->detection_area), &(rhs->detection_area)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__SensorInformation__copy(
  const ros_etsi_its_msgs__msg__SensorInformation * input,
  ros_etsi_its_msgs__msg__SensorInformation * output)
{
  if (!input || !output) {
    return false;
  }
  // sensor_id
  output->sensor_id = input->sensor_id;
  // type
  output->type = input->type;
  // detection_area
  if (!ros_etsi_its_msgs__msg__VehicleSensor__copy(
      &(input->detection_area), &(output->detection_area)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__SensorInformation *
ros_etsi_its_msgs__msg__SensorInformation__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__SensorInformation * msg = (ros_etsi_its_msgs__msg__SensorInformation *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__SensorInformation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__SensorInformation));
  bool success = ros_etsi_its_msgs__msg__SensorInformation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__SensorInformation__destroy(ros_etsi_its_msgs__msg__SensorInformation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__SensorInformation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__SensorInformation__Sequence__init(ros_etsi_its_msgs__msg__SensorInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__SensorInformation * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__SensorInformation *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__SensorInformation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__SensorInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__SensorInformation__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__SensorInformation__Sequence__fini(ros_etsi_its_msgs__msg__SensorInformation__Sequence * array)
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
      ros_etsi_its_msgs__msg__SensorInformation__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__SensorInformation__Sequence *
ros_etsi_its_msgs__msg__SensorInformation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__SensorInformation__Sequence * array = (ros_etsi_its_msgs__msg__SensorInformation__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__SensorInformation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__SensorInformation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__SensorInformation__Sequence__destroy(ros_etsi_its_msgs__msg__SensorInformation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__SensorInformation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__SensorInformation__Sequence__are_equal(const ros_etsi_its_msgs__msg__SensorInformation__Sequence * lhs, const ros_etsi_its_msgs__msg__SensorInformation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__SensorInformation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__SensorInformation__Sequence__copy(
  const ros_etsi_its_msgs__msg__SensorInformation__Sequence * input,
  ros_etsi_its_msgs__msg__SensorInformation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__SensorInformation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__SensorInformation * data =
      (ros_etsi_its_msgs__msg__SensorInformation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__SensorInformation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__SensorInformation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__SensorInformation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
