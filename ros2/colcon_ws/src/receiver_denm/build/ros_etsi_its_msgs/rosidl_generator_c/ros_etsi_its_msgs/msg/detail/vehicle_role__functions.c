// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/VehicleRole.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/vehicle_role__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_etsi_its_msgs__msg__VehicleRole__init(ros_etsi_its_msgs__msg__VehicleRole * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
ros_etsi_its_msgs__msg__VehicleRole__fini(ros_etsi_its_msgs__msg__VehicleRole * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
ros_etsi_its_msgs__msg__VehicleRole__are_equal(const ros_etsi_its_msgs__msg__VehicleRole * lhs, const ros_etsi_its_msgs__msg__VehicleRole * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__VehicleRole__copy(
  const ros_etsi_its_msgs__msg__VehicleRole * input,
  ros_etsi_its_msgs__msg__VehicleRole * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

ros_etsi_its_msgs__msg__VehicleRole *
ros_etsi_its_msgs__msg__VehicleRole__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleRole * msg = (ros_etsi_its_msgs__msg__VehicleRole *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__VehicleRole), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__VehicleRole));
  bool success = ros_etsi_its_msgs__msg__VehicleRole__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__VehicleRole__destroy(ros_etsi_its_msgs__msg__VehicleRole * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__VehicleRole__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__VehicleRole__Sequence__init(ros_etsi_its_msgs__msg__VehicleRole__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleRole * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__VehicleRole *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__VehicleRole), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__VehicleRole__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__VehicleRole__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__VehicleRole__Sequence__fini(ros_etsi_its_msgs__msg__VehicleRole__Sequence * array)
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
      ros_etsi_its_msgs__msg__VehicleRole__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__VehicleRole__Sequence *
ros_etsi_its_msgs__msg__VehicleRole__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleRole__Sequence * array = (ros_etsi_its_msgs__msg__VehicleRole__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__VehicleRole__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__VehicleRole__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__VehicleRole__Sequence__destroy(ros_etsi_its_msgs__msg__VehicleRole__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__VehicleRole__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__VehicleRole__Sequence__are_equal(const ros_etsi_its_msgs__msg__VehicleRole__Sequence * lhs, const ros_etsi_its_msgs__msg__VehicleRole__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__VehicleRole__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__VehicleRole__Sequence__copy(
  const ros_etsi_its_msgs__msg__VehicleRole__Sequence * input,
  ros_etsi_its_msgs__msg__VehicleRole__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__VehicleRole);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__VehicleRole * data =
      (ros_etsi_its_msgs__msg__VehicleRole *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__VehicleRole__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__VehicleRole__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__VehicleRole__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
