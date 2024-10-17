// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/ItsPduHeader.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros_etsi_its_msgs__msg__ItsPduHeader__init(ros_etsi_its_msgs__msg__ItsPduHeader * msg)
{
  if (!msg) {
    return false;
  }
  // protocol_version
  // message_id
  // station_id
  return true;
}

void
ros_etsi_its_msgs__msg__ItsPduHeader__fini(ros_etsi_its_msgs__msg__ItsPduHeader * msg)
{
  if (!msg) {
    return;
  }
  // protocol_version
  // message_id
  // station_id
}

bool
ros_etsi_its_msgs__msg__ItsPduHeader__are_equal(const ros_etsi_its_msgs__msg__ItsPduHeader * lhs, const ros_etsi_its_msgs__msg__ItsPduHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // protocol_version
  if (lhs->protocol_version != rhs->protocol_version) {
    return false;
  }
  // message_id
  if (lhs->message_id != rhs->message_id) {
    return false;
  }
  // station_id
  if (lhs->station_id != rhs->station_id) {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__ItsPduHeader__copy(
  const ros_etsi_its_msgs__msg__ItsPduHeader * input,
  ros_etsi_its_msgs__msg__ItsPduHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // protocol_version
  output->protocol_version = input->protocol_version;
  // message_id
  output->message_id = input->message_id;
  // station_id
  output->station_id = input->station_id;
  return true;
}

ros_etsi_its_msgs__msg__ItsPduHeader *
ros_etsi_its_msgs__msg__ItsPduHeader__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ItsPduHeader * msg = (ros_etsi_its_msgs__msg__ItsPduHeader *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__ItsPduHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__ItsPduHeader));
  bool success = ros_etsi_its_msgs__msg__ItsPduHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__ItsPduHeader__destroy(ros_etsi_its_msgs__msg__ItsPduHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__ItsPduHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__ItsPduHeader__Sequence__init(ros_etsi_its_msgs__msg__ItsPduHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ItsPduHeader * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__ItsPduHeader *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__ItsPduHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__ItsPduHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__ItsPduHeader__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__ItsPduHeader__Sequence__fini(ros_etsi_its_msgs__msg__ItsPduHeader__Sequence * array)
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
      ros_etsi_its_msgs__msg__ItsPduHeader__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__ItsPduHeader__Sequence *
ros_etsi_its_msgs__msg__ItsPduHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ItsPduHeader__Sequence * array = (ros_etsi_its_msgs__msg__ItsPduHeader__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__ItsPduHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__ItsPduHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__ItsPduHeader__Sequence__destroy(ros_etsi_its_msgs__msg__ItsPduHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__ItsPduHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__ItsPduHeader__Sequence__are_equal(const ros_etsi_its_msgs__msg__ItsPduHeader__Sequence * lhs, const ros_etsi_its_msgs__msg__ItsPduHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__ItsPduHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__ItsPduHeader__Sequence__copy(
  const ros_etsi_its_msgs__msg__ItsPduHeader__Sequence * input,
  ros_etsi_its_msgs__msg__ItsPduHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__ItsPduHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__ItsPduHeader * data =
      (ros_etsi_its_msgs__msg__ItsPduHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__ItsPduHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__ItsPduHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__ItsPduHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
