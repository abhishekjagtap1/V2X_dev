// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/ListOfPerceivedObjects.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `perceived_object_container`
#include "ros_etsi_its_msgs/msg/detail/perceived_object__functions.h"

bool
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__init(ros_etsi_its_msgs__msg__ListOfPerceivedObjects * msg)
{
  if (!msg) {
    return false;
  }
  // perceived_object_container
  if (!ros_etsi_its_msgs__msg__PerceivedObject__Sequence__init(&msg->perceived_object_container, 0)) {
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__fini(ros_etsi_its_msgs__msg__ListOfPerceivedObjects * msg)
{
  if (!msg) {
    return;
  }
  // perceived_object_container
  ros_etsi_its_msgs__msg__PerceivedObject__Sequence__fini(&msg->perceived_object_container);
}

bool
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__are_equal(const ros_etsi_its_msgs__msg__ListOfPerceivedObjects * lhs, const ros_etsi_its_msgs__msg__ListOfPerceivedObjects * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // perceived_object_container
  if (!ros_etsi_its_msgs__msg__PerceivedObject__Sequence__are_equal(
      &(lhs->perceived_object_container), &(rhs->perceived_object_container)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__copy(
  const ros_etsi_its_msgs__msg__ListOfPerceivedObjects * input,
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects * output)
{
  if (!input || !output) {
    return false;
  }
  // perceived_object_container
  if (!ros_etsi_its_msgs__msg__PerceivedObject__Sequence__copy(
      &(input->perceived_object_container), &(output->perceived_object_container)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__ListOfPerceivedObjects *
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects * msg = (ros_etsi_its_msgs__msg__ListOfPerceivedObjects *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__ListOfPerceivedObjects), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__ListOfPerceivedObjects));
  bool success = ros_etsi_its_msgs__msg__ListOfPerceivedObjects__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__destroy(ros_etsi_its_msgs__msg__ListOfPerceivedObjects * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence__init(ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__ListOfPerceivedObjects *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__ListOfPerceivedObjects), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__ListOfPerceivedObjects__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__ListOfPerceivedObjects__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence__fini(ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence * array)
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
      ros_etsi_its_msgs__msg__ListOfPerceivedObjects__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence *
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence * array = (ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence__destroy(ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence__are_equal(const ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence * lhs, const ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__ListOfPerceivedObjects__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence__copy(
  const ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence * input,
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__ListOfPerceivedObjects);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__ListOfPerceivedObjects * data =
      (ros_etsi_its_msgs__msg__ListOfPerceivedObjects *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__ListOfPerceivedObjects__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__ListOfPerceivedObjects__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__ListOfPerceivedObjects__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
