// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/VehicleSensor.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_sensor_property_list`
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__functions.h"

bool
ros_etsi_its_msgs__msg__VehicleSensor__init(ros_etsi_its_msgs__msg__VehicleSensor * msg)
{
  if (!msg) {
    return false;
  }
  // ref_point_id
  // x_sensor_offset
  // y_sensor_offset
  // z_sensor_offset
  // vehicle_sensor_property_list
  if (!ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence__init(&msg->vehicle_sensor_property_list, 0)) {
    ros_etsi_its_msgs__msg__VehicleSensor__fini(msg);
    return false;
  }
  return true;
}

void
ros_etsi_its_msgs__msg__VehicleSensor__fini(ros_etsi_its_msgs__msg__VehicleSensor * msg)
{
  if (!msg) {
    return;
  }
  // ref_point_id
  // x_sensor_offset
  // y_sensor_offset
  // z_sensor_offset
  // vehicle_sensor_property_list
  ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence__fini(&msg->vehicle_sensor_property_list);
}

bool
ros_etsi_its_msgs__msg__VehicleSensor__are_equal(const ros_etsi_its_msgs__msg__VehicleSensor * lhs, const ros_etsi_its_msgs__msg__VehicleSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ref_point_id
  if (lhs->ref_point_id != rhs->ref_point_id) {
    return false;
  }
  // x_sensor_offset
  if (lhs->x_sensor_offset != rhs->x_sensor_offset) {
    return false;
  }
  // y_sensor_offset
  if (lhs->y_sensor_offset != rhs->y_sensor_offset) {
    return false;
  }
  // z_sensor_offset
  if (lhs->z_sensor_offset != rhs->z_sensor_offset) {
    return false;
  }
  // vehicle_sensor_property_list
  if (!ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence__are_equal(
      &(lhs->vehicle_sensor_property_list), &(rhs->vehicle_sensor_property_list)))
  {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__VehicleSensor__copy(
  const ros_etsi_its_msgs__msg__VehicleSensor * input,
  ros_etsi_its_msgs__msg__VehicleSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // ref_point_id
  output->ref_point_id = input->ref_point_id;
  // x_sensor_offset
  output->x_sensor_offset = input->x_sensor_offset;
  // y_sensor_offset
  output->y_sensor_offset = input->y_sensor_offset;
  // z_sensor_offset
  output->z_sensor_offset = input->z_sensor_offset;
  // vehicle_sensor_property_list
  if (!ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence__copy(
      &(input->vehicle_sensor_property_list), &(output->vehicle_sensor_property_list)))
  {
    return false;
  }
  return true;
}

ros_etsi_its_msgs__msg__VehicleSensor *
ros_etsi_its_msgs__msg__VehicleSensor__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleSensor * msg = (ros_etsi_its_msgs__msg__VehicleSensor *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__VehicleSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__VehicleSensor));
  bool success = ros_etsi_its_msgs__msg__VehicleSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__VehicleSensor__destroy(ros_etsi_its_msgs__msg__VehicleSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__VehicleSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__VehicleSensor__Sequence__init(ros_etsi_its_msgs__msg__VehicleSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleSensor * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__VehicleSensor *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__VehicleSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__VehicleSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__VehicleSensor__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__VehicleSensor__Sequence__fini(ros_etsi_its_msgs__msg__VehicleSensor__Sequence * array)
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
      ros_etsi_its_msgs__msg__VehicleSensor__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__VehicleSensor__Sequence *
ros_etsi_its_msgs__msg__VehicleSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__VehicleSensor__Sequence * array = (ros_etsi_its_msgs__msg__VehicleSensor__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__VehicleSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__VehicleSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__VehicleSensor__Sequence__destroy(ros_etsi_its_msgs__msg__VehicleSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__VehicleSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__VehicleSensor__Sequence__are_equal(const ros_etsi_its_msgs__msg__VehicleSensor__Sequence * lhs, const ros_etsi_its_msgs__msg__VehicleSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__VehicleSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__VehicleSensor__Sequence__copy(
  const ros_etsi_its_msgs__msg__VehicleSensor__Sequence * input,
  ros_etsi_its_msgs__msg__VehicleSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__VehicleSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__VehicleSensor * data =
      (ros_etsi_its_msgs__msg__VehicleSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__VehicleSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__VehicleSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__VehicleSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
