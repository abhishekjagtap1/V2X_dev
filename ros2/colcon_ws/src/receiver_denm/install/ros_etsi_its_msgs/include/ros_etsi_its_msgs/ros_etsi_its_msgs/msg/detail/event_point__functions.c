// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/EventPoint.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/event_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `event_position`
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__functions.h"
// Member `event_delta_time`
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__functions.h"
// Member `information_quality`
#include "ros_etsi_its_msgs/msg/detail/information_quality__functions.h"

bool
ros_etsi_its_msgs__msg__EventPoint__init(ros_etsi_its_msgs__msg__EventPoint * msg)
{
  if (!msg) {
    return false;
  }
  // event_position
  if (!ros_etsi_its_msgs__msg__DeltaReferencePosition__init(&msg->event_position)) {
    ros_etsi_its_msgs__msg__EventPoint__fini(msg);
    return false;
  }
  // event_delta_time
  if (!ros_etsi_its_msgs__msg__PathDeltaTime__init(&msg->event_delta_time)) {
    ros_etsi_its_msgs__msg__EventPoint__fini(msg);
    return false;
  }
  // information_quality
  if (!ros_etsi_its_msgs__msg__InformationQuality__init(&msg->information_quality)) {
    ros_etsi_its_msgs__msg__EventPoint__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__EventPoint__fini(ros_etsi_its_msgs__msg__EventPoint * msg)
{
  if (!msg) {
    return;
  }
  // event_position
  ros_etsi_its_msgs__msg__DeltaReferencePosition__fini(&msg->event_position);
  // event_delta_time
  ros_etsi_its_msgs__msg__PathDeltaTime__fini(&msg->event_delta_time);
  // information_quality
  ros_etsi_its_msgs__msg__InformationQuality__fini(&msg->information_quality);
}

bool
ros_etsi_its_msgs__msg__EventPoint__are_equal(const ros_etsi_its_msgs__msg__EventPoint * lhs, const ros_etsi_its_msgs__msg__EventPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event_position
  if (!ros_etsi_its_msgs__msg__DeltaReferencePosition__are_equal(
      &(lhs->event_position), &(rhs->event_position)))
  {
    return false;
  }
  // event_delta_time
  if (!ros_etsi_its_msgs__msg__PathDeltaTime__are_equal(
      &(lhs->event_delta_time), &(rhs->event_delta_time)))
  {
    return false;
  }
  // information_quality
  if (!ros_etsi_its_msgs__msg__InformationQuality__are_equal(
      &(lhs->information_quality), &(rhs->information_quality)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__EventPoint__copy(
  const ros_etsi_its_msgs__msg__EventPoint * input,
  ros_etsi_its_msgs__msg__EventPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // event_position
  if (!ros_etsi_its_msgs__msg__DeltaReferencePosition__copy(
      &(input->event_position), &(output->event_position)))
  {
    return false;
  }
  // event_delta_time
  if (!ros_etsi_its_msgs__msg__PathDeltaTime__copy(
      &(input->event_delta_time), &(output->event_delta_time)))
  {
    return false;
  }
  // information_quality
  if (!ros_etsi_its_msgs__msg__InformationQuality__copy(
      &(input->information_quality), &(output->information_quality)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__EventPoint *
ros_etsi_its_msgs__msg__EventPoint__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__EventPoint * msg = (ros_etsi_its_msgs__msg__EventPoint *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__EventPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__EventPoint));
  bool success = ros_etsi_its_msgs__msg__EventPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__EventPoint__destroy(ros_etsi_its_msgs__msg__EventPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__EventPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__EventPoint__Sequence__init(ros_etsi_its_msgs__msg__EventPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__EventPoint * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__EventPoint *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__EventPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__EventPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__EventPoint__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__EventPoint__Sequence__fini(ros_etsi_its_msgs__msg__EventPoint__Sequence * array)
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
      ros_etsi_its_msgs__msg__EventPoint__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__EventPoint__Sequence *
ros_etsi_its_msgs__msg__EventPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__EventPoint__Sequence * array = (ros_etsi_its_msgs__msg__EventPoint__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__EventPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__EventPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__EventPoint__Sequence__destroy(ros_etsi_its_msgs__msg__EventPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__EventPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__EventPoint__Sequence__are_equal(const ros_etsi_its_msgs__msg__EventPoint__Sequence * lhs, const ros_etsi_its_msgs__msg__EventPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__EventPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__EventPoint__Sequence__copy(
  const ros_etsi_its_msgs__msg__EventPoint__Sequence * input,
  ros_etsi_its_msgs__msg__EventPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__EventPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__EventPoint * data =
      (ros_etsi_its_msgs__msg__EventPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__EventPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__EventPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__EventPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
