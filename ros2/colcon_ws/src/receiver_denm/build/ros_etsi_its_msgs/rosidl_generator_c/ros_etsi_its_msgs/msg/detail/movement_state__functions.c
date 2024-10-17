// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/movement_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state_time_speed`
#include "ros_etsi_its_msgs/msg/detail/movement_event__functions.h"

bool
ros_etsi_its_msgs__msg__MovementState__init(ros_etsi_its_msgs__msg__MovementState * msg)
{
  if (!msg) {
    return false;
  }
  // signal_group
  // state_time_speed
  if (!ros_etsi_its_msgs__msg__MovementEvent__Sequence__init(&msg->state_time_speed, 0)) {
    ros_etsi_its_msgs__msg__MovementState__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__MovementState__fini(ros_etsi_its_msgs__msg__MovementState * msg)
{
  if (!msg) {
    return;
  }
  // signal_group
  // state_time_speed
  ros_etsi_its_msgs__msg__MovementEvent__Sequence__fini(&msg->state_time_speed);
}

bool
ros_etsi_its_msgs__msg__MovementState__are_equal(const ros_etsi_its_msgs__msg__MovementState * lhs, const ros_etsi_its_msgs__msg__MovementState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // signal_group
  if (lhs->signal_group != rhs->signal_group) {
    return false;
  }
  // state_time_speed
  if (!ros_etsi_its_msgs__msg__MovementEvent__Sequence__are_equal(
      &(lhs->state_time_speed), &(rhs->state_time_speed)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__MovementState__copy(
  const ros_etsi_its_msgs__msg__MovementState * input,
  ros_etsi_its_msgs__msg__MovementState * output)
{
  if (!input || !output) {
    return false;
  }
  // signal_group
  output->signal_group = input->signal_group;
  // state_time_speed
  if (!ros_etsi_its_msgs__msg__MovementEvent__Sequence__copy(
      &(input->state_time_speed), &(output->state_time_speed)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__MovementState *
ros_etsi_its_msgs__msg__MovementState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MovementState * msg = (ros_etsi_its_msgs__msg__MovementState *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__MovementState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__MovementState));
  bool success = ros_etsi_its_msgs__msg__MovementState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__MovementState__destroy(ros_etsi_its_msgs__msg__MovementState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__MovementState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__MovementState__Sequence__init(ros_etsi_its_msgs__msg__MovementState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MovementState * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__MovementState *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__MovementState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__MovementState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__MovementState__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__MovementState__Sequence__fini(ros_etsi_its_msgs__msg__MovementState__Sequence * array)
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
      ros_etsi_its_msgs__msg__MovementState__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__MovementState__Sequence *
ros_etsi_its_msgs__msg__MovementState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MovementState__Sequence * array = (ros_etsi_its_msgs__msg__MovementState__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__MovementState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__MovementState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__MovementState__Sequence__destroy(ros_etsi_its_msgs__msg__MovementState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__MovementState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__MovementState__Sequence__are_equal(const ros_etsi_its_msgs__msg__MovementState__Sequence * lhs, const ros_etsi_its_msgs__msg__MovementState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__MovementState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__MovementState__Sequence__copy(
  const ros_etsi_its_msgs__msg__MovementState__Sequence * input,
  ros_etsi_its_msgs__msg__MovementState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__MovementState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__MovementState * data =
      (ros_etsi_its_msgs__msg__MovementState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__MovementState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__MovementState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__MovementState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
