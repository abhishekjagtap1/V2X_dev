// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/intersection_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `ref_point`
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
// Member `lane_set`
#include "ros_etsi_its_msgs/msg/detail/generic_lane__functions.h"

bool
ros_etsi_its_msgs__msg__IntersectionGeometry__init(ros_etsi_its_msgs__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    ros_etsi_its_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // id
  // revision
  // ref_point
  if (!ros_etsi_its_msgs__msg__ReferencePosition__init(&msg->ref_point)) {
    ros_etsi_its_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  // lane_width
  // lane_set
  if (!ros_etsi_its_msgs__msg__GenericLane__Sequence__init(&msg->lane_set, 0)) {
    ros_etsi_its_msgs__msg__IntersectionGeometry__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__IntersectionGeometry__fini(ros_etsi_its_msgs__msg__IntersectionGeometry * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // id
  // revision
  // ref_point
  ros_etsi_its_msgs__msg__ReferencePosition__fini(&msg->ref_point);
  // lane_width
  // lane_set
  ros_etsi_its_msgs__msg__GenericLane__Sequence__fini(&msg->lane_set);
}

bool
ros_etsi_its_msgs__msg__IntersectionGeometry__are_equal(const ros_etsi_its_msgs__msg__IntersectionGeometry * lhs, const ros_etsi_its_msgs__msg__IntersectionGeometry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // revision
  if (lhs->revision != rhs->revision) {
    return false;
  }
  // ref_point
  if (!ros_etsi_its_msgs__msg__ReferencePosition__are_equal(
      &(lhs->ref_point), &(rhs->ref_point)))
  {
    return false;
  }
  // lane_width
  if (lhs->lane_width != rhs->lane_width) {
    return false;
  }
  // lane_set
  if (!ros_etsi_its_msgs__msg__GenericLane__Sequence__are_equal(
      &(lhs->lane_set), &(rhs->lane_set)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__IntersectionGeometry__copy(
  const ros_etsi_its_msgs__msg__IntersectionGeometry * input,
  ros_etsi_its_msgs__msg__IntersectionGeometry * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // revision
  output->revision = input->revision;
  // ref_point
  if (!ros_etsi_its_msgs__msg__ReferencePosition__copy(
      &(input->ref_point), &(output->ref_point)))
  {
    return false;
  }
  // lane_width
  output->lane_width = input->lane_width;
  // lane_set
  if (!ros_etsi_its_msgs__msg__GenericLane__Sequence__copy(
      &(input->lane_set), &(output->lane_set)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__IntersectionGeometry *
ros_etsi_its_msgs__msg__IntersectionGeometry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__IntersectionGeometry * msg = (ros_etsi_its_msgs__msg__IntersectionGeometry *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__IntersectionGeometry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__IntersectionGeometry));
  bool success = ros_etsi_its_msgs__msg__IntersectionGeometry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__IntersectionGeometry__destroy(ros_etsi_its_msgs__msg__IntersectionGeometry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__IntersectionGeometry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence__init(ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__IntersectionGeometry * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__IntersectionGeometry *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__IntersectionGeometry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__IntersectionGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__IntersectionGeometry__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence__fini(ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence * array)
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
      ros_etsi_its_msgs__msg__IntersectionGeometry__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence *
ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence * array = (ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence__destroy(ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence__are_equal(const ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence * lhs, const ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__IntersectionGeometry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence__copy(
  const ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence * input,
  ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__IntersectionGeometry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__IntersectionGeometry * data =
      (ros_etsi_its_msgs__msg__IntersectionGeometry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__IntersectionGeometry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__IntersectionGeometry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__IntersectionGeometry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
