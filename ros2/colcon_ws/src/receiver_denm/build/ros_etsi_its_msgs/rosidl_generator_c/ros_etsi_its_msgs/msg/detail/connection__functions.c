// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/connection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_etsi_its_msgs__msg__Connection__init(ros_etsi_its_msgs__msg__Connection * msg)
{
  if (!msg) {
    return false;
  }
  // connecting_lane
  // remote_intersection
  // signal_group
  // connection_id
  return true;
}

void
ros_etsi_its_msgs__msg__Connection__fini(ros_etsi_its_msgs__msg__Connection * msg)
{
  if (!msg) {
    return;
  }
  // connecting_lane
  // remote_intersection
  // signal_group
  // connection_id
}

bool
ros_etsi_its_msgs__msg__Connection__are_equal(const ros_etsi_its_msgs__msg__Connection * lhs, const ros_etsi_its_msgs__msg__Connection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connecting_lane
  if (lhs->connecting_lane != rhs->connecting_lane) {
    return false;
  }
  // remote_intersection
  if (lhs->remote_intersection != rhs->remote_intersection) {
    return false;
  }
  // signal_group
  if (lhs->signal_group != rhs->signal_group) {
    return false;
  }
  // connection_id
  if (lhs->connection_id != rhs->connection_id) {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__Connection__copy(
  const ros_etsi_its_msgs__msg__Connection * input,
  ros_etsi_its_msgs__msg__Connection * output)
{
  if (!input || !output) {
    return false;
  }
  // connecting_lane
  output->connecting_lane = input->connecting_lane;
  // remote_intersection
  output->remote_intersection = input->remote_intersection;
  // signal_group
  output->signal_group = input->signal_group;
  // connection_id
  output->connection_id = input->connection_id;
  return true;
}

ros_etsi_its_msgs__msg__Connection *
ros_etsi_its_msgs__msg__Connection__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__Connection * msg = (ros_etsi_its_msgs__msg__Connection *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__Connection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__Connection));
  bool success = ros_etsi_its_msgs__msg__Connection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__Connection__destroy(ros_etsi_its_msgs__msg__Connection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__Connection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__Connection__Sequence__init(ros_etsi_its_msgs__msg__Connection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__Connection * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__Connection *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__Connection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__Connection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__Connection__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__Connection__Sequence__fini(ros_etsi_its_msgs__msg__Connection__Sequence * array)
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
      ros_etsi_its_msgs__msg__Connection__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__Connection__Sequence *
ros_etsi_its_msgs__msg__Connection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__Connection__Sequence * array = (ros_etsi_its_msgs__msg__Connection__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__Connection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__Connection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__Connection__Sequence__destroy(ros_etsi_its_msgs__msg__Connection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__Connection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__Connection__Sequence__are_equal(const ros_etsi_its_msgs__msg__Connection__Sequence * lhs, const ros_etsi_its_msgs__msg__Connection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__Connection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__Connection__Sequence__copy(
  const ros_etsi_its_msgs__msg__Connection__Sequence * input,
  ros_etsi_its_msgs__msg__Connection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__Connection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__Connection * data =
      (ros_etsi_its_msgs__msg__Connection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__Connection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__Connection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__Connection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
