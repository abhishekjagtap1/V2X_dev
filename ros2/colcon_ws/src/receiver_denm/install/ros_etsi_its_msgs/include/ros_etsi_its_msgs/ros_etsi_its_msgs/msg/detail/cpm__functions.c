// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_etsi_its_msgs:msg/CPM.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/cpm__functions.h"

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
// Member `station_type`
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"
// Member `reference_position`
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
// Member `originating_vehicle_container`
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__functions.h"
// Member `sensor_information_container`
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__functions.h"
// Member `list_of_perceived_objects`
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__functions.h"

bool
ros_etsi_its_msgs__msg__CPM__init(ros_etsi_its_msgs__msg__CPM * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_etsi_its_msgs__msg__CPM__fini(msg);
    return false;
  }
  // its_header
  if (!ros_etsi_its_msgs__msg__ItsPduHeader__init(&msg->its_header)) {
    ros_etsi_its_msgs__msg__CPM__fini(msg);
    return false;
  }
  // generation_delta_time
  // station_type
  if (!ros_etsi_its_msgs__msg__StationType__init(&msg->station_type)) {
    ros_etsi_its_msgs__msg__CPM__fini(msg);
    return false;
  }
  // reference_position
  if (!ros_etsi_its_msgs__msg__ReferencePosition__init(&msg->reference_position)) {
    ros_etsi_its_msgs__msg__CPM__fini(msg);
    return false;
  }
  // originating_vehicle_container
  if (!ros_etsi_its_msgs__msg__OriginatingVehicleContainer__init(&msg->originating_vehicle_container)) {
    ros_etsi_its_msgs__msg__CPM__fini(msg);
    return false;
  }
  // has_sensor_information_container
  // sensor_information_container
  if (!ros_etsi_its_msgs__msg__SensorInformationContainer__init(&msg->sensor_information_container)) {
    ros_etsi_its_msgs__msg__CPM__fini(msg);
    return false;
  }
  // has_list_of_perceived_object
  // list_of_perceived_objects
  if (!ros_etsi_its_msgs__msg__ListOfPerceivedObjects__init(&msg->list_of_perceived_objects)) {
    ros_etsi_its_msgs__msg__CPM__fini(msg);
    return false;
  }
  // number_of_perceived_objects
  return true;
}

void
ros_etsi_its_msgs__msg__CPM__fini(ros_etsi_its_msgs__msg__CPM * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // its_header
  ros_etsi_its_msgs__msg__ItsPduHeader__fini(&msg->its_header);
  // generation_delta_time
  // station_type
  ros_etsi_its_msgs__msg__StationType__fini(&msg->station_type);
  // reference_position
  ros_etsi_its_msgs__msg__ReferencePosition__fini(&msg->reference_position);
  // originating_vehicle_container
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer__fini(&msg->originating_vehicle_container);
  // has_sensor_information_container
  // sensor_information_container
  ros_etsi_its_msgs__msg__SensorInformationContainer__fini(&msg->sensor_information_container);
  // has_list_of_perceived_object
  // list_of_perceived_objects
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects__fini(&msg->list_of_perceived_objects);
  // number_of_perceived_objects
}

bool
ros_etsi_its_msgs__msg__CPM__are_equal(const ros_etsi_its_msgs__msg__CPM * lhs, const ros_etsi_its_msgs__msg__CPM * rhs)
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
  // generation_delta_time
  if (lhs->generation_delta_time != rhs->generation_delta_time) {
    return false;
  }
  // station_type
  if (!ros_etsi_its_msgs__msg__StationType__are_equal(
      &(lhs->station_type), &(rhs->station_type)))
  {
    return false;
  }
  // reference_position
  if (!ros_etsi_its_msgs__msg__ReferencePosition__are_equal(
      &(lhs->reference_position), &(rhs->reference_position)))
  {
    return false;
  }
  // originating_vehicle_container
  if (!ros_etsi_its_msgs__msg__OriginatingVehicleContainer__are_equal(
      &(lhs->originating_vehicle_container), &(rhs->originating_vehicle_container)))
  {
    return false;
  }
  // has_sensor_information_container
  if (lhs->has_sensor_information_container != rhs->has_sensor_information_container) {
    return false;
  }
  // sensor_information_container
  if (!ros_etsi_its_msgs__msg__SensorInformationContainer__are_equal(
      &(lhs->sensor_information_container), &(rhs->sensor_information_container)))
  {
    return false;
  }
  // has_list_of_perceived_object
  if (lhs->has_list_of_perceived_object != rhs->has_list_of_perceived_object) {
    return false;
  }
  // list_of_perceived_objects
  if (!ros_etsi_its_msgs__msg__ListOfPerceivedObjects__are_equal(
      &(lhs->list_of_perceived_objects), &(rhs->list_of_perceived_objects)))
  {
    return false;
  }
  // number_of_perceived_objects
  if (lhs->number_of_perceived_objects != rhs->number_of_perceived_objects) {
    return false;
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__CPM__copy(
  const ros_etsi_its_msgs__msg__CPM * input,
  ros_etsi_its_msgs__msg__CPM * output)
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
  // generation_delta_time
  output->generation_delta_time = input->generation_delta_time;
  // station_type
  if (!ros_etsi_its_msgs__msg__StationType__copy(
      &(input->station_type), &(output->station_type)))
  {
    return false;
  }
  // reference_position
  if (!ros_etsi_its_msgs__msg__ReferencePosition__copy(
      &(input->reference_position), &(output->reference_position)))
  {
    return false;
  }
  // originating_vehicle_container
  if (!ros_etsi_its_msgs__msg__OriginatingVehicleContainer__copy(
      &(input->originating_vehicle_container), &(output->originating_vehicle_container)))
  {
    return false;
  }
  // has_sensor_information_container
  output->has_sensor_information_container = input->has_sensor_information_container;
  // sensor_information_container
  if (!ros_etsi_its_msgs__msg__SensorInformationContainer__copy(
      &(input->sensor_information_container), &(output->sensor_information_container)))
  {
    return false;
  }
  // has_list_of_perceived_object
  output->has_list_of_perceived_object = input->has_list_of_perceived_object;
  // list_of_perceived_objects
  if (!ros_etsi_its_msgs__msg__ListOfPerceivedObjects__copy(
      &(input->list_of_perceived_objects), &(output->list_of_perceived_objects)))
  {
    return false;
  }
  // number_of_perceived_objects
  output->number_of_perceived_objects = input->number_of_perceived_objects;
  return true;
}

ros_etsi_its_msgs__msg__CPM *
ros_etsi_its_msgs__msg__CPM__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__CPM * msg = (ros_etsi_its_msgs__msg__CPM *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__CPM), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_etsi_its_msgs__msg__CPM));
  bool success = ros_etsi_its_msgs__msg__CPM__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_etsi_its_msgs__msg__CPM__destroy(ros_etsi_its_msgs__msg__CPM * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_etsi_its_msgs__msg__CPM__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_etsi_its_msgs__msg__CPM__Sequence__init(ros_etsi_its_msgs__msg__CPM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__CPM * data = NULL;

  if (size) {
    data = (ros_etsi_its_msgs__msg__CPM *)allocator.zero_allocate(size, sizeof(ros_etsi_its_msgs__msg__CPM), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_etsi_its_msgs__msg__CPM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_etsi_its_msgs__msg__CPM__fini(&data[i - 1]);
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
ros_etsi_its_msgs__msg__CPM__Sequence__fini(ros_etsi_its_msgs__msg__CPM__Sequence * array)
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
      ros_etsi_its_msgs__msg__CPM__fini(&array->data[i]);
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

ros_etsi_its_msgs__msg__CPM__Sequence *
ros_etsi_its_msgs__msg__CPM__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_etsi_its_msgs__msg__CPM__Sequence * array = (ros_etsi_its_msgs__msg__CPM__Sequence *)allocator.allocate(sizeof(ros_etsi_its_msgs__msg__CPM__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_etsi_its_msgs__msg__CPM__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_etsi_its_msgs__msg__CPM__Sequence__destroy(ros_etsi_its_msgs__msg__CPM__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_etsi_its_msgs__msg__CPM__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_etsi_its_msgs__msg__CPM__Sequence__are_equal(const ros_etsi_its_msgs__msg__CPM__Sequence * lhs, const ros_etsi_its_msgs__msg__CPM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_etsi_its_msgs__msg__CPM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_etsi_its_msgs__msg__CPM__Sequence__copy(
  const ros_etsi_its_msgs__msg__CPM__Sequence * input,
  ros_etsi_its_msgs__msg__CPM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_etsi_its_msgs__msg__CPM);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_etsi_its_msgs__msg__CPM * data =
      (ros_etsi_its_msgs__msg__CPM *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_etsi_its_msgs__msg__CPM__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_etsi_its_msgs__msg__CPM__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_etsi_its_msgs__msg__CPM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
