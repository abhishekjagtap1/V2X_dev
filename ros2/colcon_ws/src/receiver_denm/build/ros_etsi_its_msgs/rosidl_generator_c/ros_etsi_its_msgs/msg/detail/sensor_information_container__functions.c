// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/SensorInformationContainer.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sensors_information`
#include "ros_etsi_its_msgs/msg/detail/sensor_information__functions.h"

bool
ros_etsi_its_msgs__msg__SensorInformationContainer__init(ros_etsi_its_msgs__msg__SensorInformationContainer * msg)
{
  if (!msg) {
    return false;
  }
  // sensors_information
  if (!ros_etsi_its_msgs__msg__SensorInformation__Sequence__init(&msg->sensors_information, 0)) {
    ros_etsi_its_msgs__msg__SensorInformationContainer__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__SensorInformationContainer__fini(ros_etsi_its_msgs__msg__SensorInformationContainer * msg)
{
  if (!msg) {
    return;
  }
  // sensors_information
  ros_etsi_its_msgs__msg__SensorInformation__Sequence__fini(&msg->sensors_information);
}

bool
ros_etsi_its_msgs__msg__SensorInformationContainer__are_equal(const ros_etsi_its_msgs__msg__SensorInformationContainer * lhs, const ros_etsi_its_msgs__msg__SensorInformationContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sensors_information
  if (!ros_etsi_its_msgs__msg__SensorInformation__Sequence__are_equal(
      &(lhs->sensors_information), &(rhs->sensors_information)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__SensorInformationContainer__copy(
  const ros_etsi_its_msgs__msg__SensorInformationContainer * input,
  ros_etsi_its_msgs__msg__SensorInformationContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // sensors_information
  if (!ros_etsi_its_msgs__msg__SensorInformation__Sequence__copy(
      &(input->sensors_information), &(output->sensors_information)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__SensorInformationContainer *
ros_etsi_its_msgs__msg__SensorInformationContainer__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__SensorInformationContainer * msg = (ros_etsi_its_msgs__msg__SensorInformationContainer *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__SensorInformationContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__SensorInformationContainer));
  bool success = ros_etsi_its_msgs__msg__SensorInformationContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__SensorInformationContainer__destroy(ros_etsi_its_msgs__msg__SensorInformationContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__SensorInformationContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence__init(ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__SensorInformationContainer * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__SensorInformationContainer *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__SensorInformationContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__SensorInformationContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__SensorInformationContainer__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence__fini(ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence * array)
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
      ros_etsi_its_msgs__msg__SensorInformationContainer__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence *
ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence * array = (ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence__destroy(ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence__are_equal(const ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence * lhs, const ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__SensorInformationContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence__copy(
  const ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence * input,
  ros_etsi_its_msgs__msg__SensorInformationContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__SensorInformationContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__SensorInformationContainer * data =
      (ros_etsi_its_msgs__msg__SensorInformationContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__SensorInformationContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__SensorInformationContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__SensorInformationContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
