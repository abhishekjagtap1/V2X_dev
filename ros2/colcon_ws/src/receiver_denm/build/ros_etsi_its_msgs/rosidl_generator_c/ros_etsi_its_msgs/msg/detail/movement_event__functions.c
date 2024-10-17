// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/movement_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `event_state`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_etsi_its_msgs__msg__MovementEvent__init(ros_etsi_its_msgs__msg__MovementEvent * msg)
{
  if (!msg) {
    return false;
  }
  // event_state
  if (!rosidl_runtime_c__String__init(&msg->event_state)) {
    ros_etsi_its_msgs__msg__MovementEvent__fini(msg);
    return false;
  }
  // min_end_time
  return true;
}

void
ros_etsi_its_msgs__msg__MovementEvent__fini(ros_etsi_its_msgs__msg__MovementEvent * msg)
{
  if (!msg) {
    return;
  }
  // event_state
  rosidl_runtime_c__String__fini(&msg->event_state);
  // min_end_time
}

bool
ros_etsi_its_msgs__msg__MovementEvent__are_equal(const ros_etsi_its_msgs__msg__MovementEvent * lhs, const ros_etsi_its_msgs__msg__MovementEvent * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->event_state), &(rhs->event_state)))
  {
    return false;
  }
  // min_end_time
  if (lhs->min_end_time != rhs->min_end_time) {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__MovementEvent__copy(
  const ros_etsi_its_msgs__msg__MovementEvent * input,
  ros_etsi_its_msgs__msg__MovementEvent * output)
{
  if (!input || !output) {
    return false;
  }
  // event_state
  if (!rosidl_runtime_c__String__copy(
      &(input->event_state), &(output->event_state)))
  {
    return false;
  }
  // min_end_time
  output->min_end_time = input->min_end_time;
  return true;
}

ros_etsi_its_msgs__msg__MovementEvent *
ros_etsi_its_msgs__msg__MovementEvent__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MovementEvent * msg = (ros_etsi_its_msgs__msg__MovementEvent *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__MovementEvent), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__MovementEvent));
  bool success = ros_etsi_its_msgs__msg__MovementEvent__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__MovementEvent__destroy(ros_etsi_its_msgs__msg__MovementEvent * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__MovementEvent__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__MovementEvent__Sequence__init(ros_etsi_its_msgs__msg__MovementEvent__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MovementEvent * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__MovementEvent *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__MovementEvent), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__MovementEvent__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__MovementEvent__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__MovementEvent__Sequence__fini(ros_etsi_its_msgs__msg__MovementEvent__Sequence * array)
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
      ros_etsi_its_msgs__msg__MovementEvent__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__MovementEvent__Sequence *
ros_etsi_its_msgs__msg__MovementEvent__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MovementEvent__Sequence * array = (ros_etsi_its_msgs__msg__MovementEvent__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__MovementEvent__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__MovementEvent__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__MovementEvent__Sequence__destroy(ros_etsi_its_msgs__msg__MovementEvent__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__MovementEvent__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__MovementEvent__Sequence__are_equal(const ros_etsi_its_msgs__msg__MovementEvent__Sequence * lhs, const ros_etsi_its_msgs__msg__MovementEvent__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__MovementEvent__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__MovementEvent__Sequence__copy(
  const ros_etsi_its_msgs__msg__MovementEvent__Sequence * input,
  ros_etsi_its_msgs__msg__MovementEvent__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__MovementEvent);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__MovementEvent * data =
      (ros_etsi_its_msgs__msg__MovementEvent *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__MovementEvent__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__MovementEvent__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__MovementEvent__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
