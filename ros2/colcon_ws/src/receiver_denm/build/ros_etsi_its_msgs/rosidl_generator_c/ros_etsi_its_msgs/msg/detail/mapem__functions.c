// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/MAPEM.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/mapem__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `its_header`
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"
// Member `intersections`
#include "ros_etsi_its_msgs/msg/detail/intersections__functions.h"

bool
ros_etsi_its_msgs__msg__MAPEM__init(ros_etsi_its_msgs__msg__MAPEM * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_etsi_its_msgs__msg__MAPEM__fini(msg);
    return false;
  }
  // its_header
  if (!ros_etsi_its_msgs__msg__ItsPduHeader__init(&msg->its_header)) {
    ros_etsi_its_msgs__msg__MAPEM__fini(msg);
    return false;
  }
  // time_stamp
  // msg_issue_revision
  // intersections
  if (!ros_etsi_its_msgs__msg__Intersections__init(&msg->intersections)) {
    ros_etsi_its_msgs__msg__MAPEM__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__MAPEM__fini(ros_etsi_its_msgs__msg__MAPEM * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // its_header
  ros_etsi_its_msgs__msg__ItsPduHeader__fini(&msg->its_header);
  // time_stamp
  // msg_issue_revision
  // intersections
  ros_etsi_its_msgs__msg__Intersections__fini(&msg->intersections);
}

bool
ros_etsi_its_msgs__msg__MAPEM__are_equal(const ros_etsi_its_msgs__msg__MAPEM * lhs, const ros_etsi_its_msgs__msg__MAPEM * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // its_header
  if (!ros_etsi_its_msgs__msg__ItsPduHeader__are_equal(
      &(lhs->its_header), &(rhs->its_header)))
  {
    return false;
  }
  // time_stamp
  if (lhs->time_stamp != rhs->time_stamp) {
    return false;
  }
  // msg_issue_revision
  if (lhs->msg_issue_revision != rhs->msg_issue_revision) {
    return false;
  }
  // intersections
  if (!ros_etsi_its_msgs__msg__Intersections__are_equal(
      &(lhs->intersections), &(rhs->intersections)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__MAPEM__copy(
  const ros_etsi_its_msgs__msg__MAPEM * input,
  ros_etsi_its_msgs__msg__MAPEM * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // its_header
  if (!ros_etsi_its_msgs__msg__ItsPduHeader__copy(
      &(input->its_header), &(output->its_header)))
  {
    return false;
  }
  // time_stamp
  output->time_stamp = input->time_stamp;
  // msg_issue_revision
  output->msg_issue_revision = input->msg_issue_revision;
  // intersections
  if (!ros_etsi_its_msgs__msg__Intersections__copy(
      &(input->intersections), &(output->intersections)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__MAPEM *
ros_etsi_its_msgs__msg__MAPEM__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MAPEM * msg = (ros_etsi_its_msgs__msg__MAPEM *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__MAPEM), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__MAPEM));
  bool success = ros_etsi_its_msgs__msg__MAPEM__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__MAPEM__destroy(ros_etsi_its_msgs__msg__MAPEM * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__MAPEM__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__MAPEM__Sequence__init(ros_etsi_its_msgs__msg__MAPEM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MAPEM * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__MAPEM *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__MAPEM), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__MAPEM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__MAPEM__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__MAPEM__Sequence__fini(ros_etsi_its_msgs__msg__MAPEM__Sequence * array)
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
      ros_etsi_its_msgs__msg__MAPEM__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__MAPEM__Sequence *
ros_etsi_its_msgs__msg__MAPEM__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__MAPEM__Sequence * array = (ros_etsi_its_msgs__msg__MAPEM__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__MAPEM__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__MAPEM__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__MAPEM__Sequence__destroy(ros_etsi_its_msgs__msg__MAPEM__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__MAPEM__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__MAPEM__Sequence__are_equal(const ros_etsi_its_msgs__msg__MAPEM__Sequence * lhs, const ros_etsi_its_msgs__msg__MAPEM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__MAPEM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__MAPEM__Sequence__copy(
  const ros_etsi_its_msgs__msg__MAPEM__Sequence * input,
  ros_etsi_its_msgs__msg__MAPEM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__MAPEM);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__MAPEM * data =
      (ros_etsi_its_msgs__msg__MAPEM *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__MAPEM__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__MAPEM__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__MAPEM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
