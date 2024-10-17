// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_etsi_its_msgs__msg__VehicleLength__init(ros_etsi_its_msgs__msg__VehicleLength * msg)
{
  if (!msg) {
    return false;
  }
  // value
  // confidence_indication
  return true;
}

void
ros_etsi_its_msgs__msg__VehicleLength__fini(ros_etsi_its_msgs__msg__VehicleLength * msg)
{
  if (!msg) {
    return;
  }
  // value
  // confidence_indication
}

bool
ros_etsi_its_msgs__msg__VehicleLength__are_equal(const ros_etsi_its_msgs__msg__VehicleLength * lhs, const ros_etsi_its_msgs__msg__VehicleLength * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // confidence_indication
  if (lhs->confidence_indication != rhs->confidence_indication) {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__VehicleLength__copy(
  const ros_etsi_its_msgs__msg__VehicleLength * input,
  ros_etsi_its_msgs__msg__VehicleLength * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  // confidence_indication
  output->confidence_indication = input->confidence_indication;
  return true;
}

ros_etsi_its_msgs__msg__VehicleLength *
ros_etsi_its_msgs__msg__VehicleLength__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleLength * msg = (ros_etsi_its_msgs__msg__VehicleLength *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__VehicleLength), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__VehicleLength));
  bool success = ros_etsi_its_msgs__msg__VehicleLength__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__VehicleLength__destroy(ros_etsi_its_msgs__msg__VehicleLength * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__VehicleLength__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__VehicleLength__Sequence__init(ros_etsi_its_msgs__msg__VehicleLength__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleLength * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__VehicleLength *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__VehicleLength), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__VehicleLength__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__VehicleLength__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__VehicleLength__Sequence__fini(ros_etsi_its_msgs__msg__VehicleLength__Sequence * array)
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
      ros_etsi_its_msgs__msg__VehicleLength__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__VehicleLength__Sequence *
ros_etsi_its_msgs__msg__VehicleLength__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleLength__Sequence * array = (ros_etsi_its_msgs__msg__VehicleLength__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__VehicleLength__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__VehicleLength__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__VehicleLength__Sequence__destroy(ros_etsi_its_msgs__msg__VehicleLength__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__VehicleLength__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__VehicleLength__Sequence__are_equal(const ros_etsi_its_msgs__msg__VehicleLength__Sequence * lhs, const ros_etsi_its_msgs__msg__VehicleLength__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__VehicleLength__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__VehicleLength__Sequence__copy(
  const ros_etsi_its_msgs__msg__VehicleLength__Sequence * input,
  ros_etsi_its_msgs__msg__VehicleLength__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__VehicleLength);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__VehicleLength * data =
      (ros_etsi_its_msgs__msg__VehicleLength *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__VehicleLength__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__VehicleLength__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__VehicleLength__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
