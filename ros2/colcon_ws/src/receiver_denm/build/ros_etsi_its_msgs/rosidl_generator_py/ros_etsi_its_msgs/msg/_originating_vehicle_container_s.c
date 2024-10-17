// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__struct.h"
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__functions.h"

bool ros_etsi_its_msgs__msg__heading__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__heading__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__speed__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__wgs84_angle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__wgs84_angle__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__drive_direction__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__drive_direction__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__vehicle_length__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__vehicle_length__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__vehicle_width__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__vehicle_width__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__longitudinal_acceleration__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__longitudinal_acceleration__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__yaw_rate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__yaw_rate__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__originating_vehicle_container__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ros_etsi_its_msgs.msg._originating_vehicle_container.OriginatingVehicleContainer", full_classname_dest, 80) == 0);
  }
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer * ros_message = _ros_message;
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__heading__convert_from_py(field, &ros_message->heading)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__speed__convert_from_py(field, &ros_message->speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_vehicle_orientation_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_vehicle_orientation_angle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_vehicle_orientation_angle = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_orientation_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_orientation_angle");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__wgs84_angle__convert_from_py(field, &ros_message->vehicle_orientation_angle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // drive_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "drive_direction");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__drive_direction__convert_from_py(field, &ros_message->drive_direction)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_vehicle_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_vehicle_length");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_vehicle_length = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_length");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__vehicle_length__convert_from_py(field, &ros_message->vehicle_length)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_vehicle_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_vehicle_width");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_vehicle_width = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_width");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__vehicle_width__convert_from_py(field, &ros_message->vehicle_width)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_vehicle_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_vehicle_height");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_vehicle_height = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vehicle_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_height");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_height = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // has_longitudinal_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_longitudinal_acceleration");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_longitudinal_acceleration = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longitudinal_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_acceleration");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__longitudinal_acceleration__convert_from_py(field, &ros_message->longitudinal_acceleration)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_yaw_rate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__yaw_rate__convert_from_py(field, &ros_message->yaw_rate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__originating_vehicle_container__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OriginatingVehicleContainer */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._originating_vehicle_container");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OriginatingVehicleContainer");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer * ros_message = (ros_etsi_its_msgs__msg__OriginatingVehicleContainer *)raw_ros_message;
  {  // heading
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__heading__convert_to_py(&ros_message->heading);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__speed__convert_to_py(&ros_message->speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_vehicle_orientation_angle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_vehicle_orientation_angle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_vehicle_orientation_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_orientation_angle
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__wgs84_angle__convert_to_py(&ros_message->vehicle_orientation_angle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_orientation_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drive_direction
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__drive_direction__convert_to_py(&ros_message->drive_direction);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "drive_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_vehicle_length
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_vehicle_length ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_vehicle_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_length
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__vehicle_length__convert_to_py(&ros_message->vehicle_length);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_vehicle_width
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_vehicle_width ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_vehicle_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_width
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__vehicle_width__convert_to_py(&ros_message->vehicle_width);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_vehicle_height
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_vehicle_height ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_vehicle_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_height
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_longitudinal_acceleration
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_longitudinal_acceleration ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_longitudinal_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_acceleration
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__longitudinal_acceleration__convert_to_py(&ros_message->longitudinal_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_yaw_rate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_yaw_rate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__yaw_rate__convert_to_py(&ros_message->yaw_rate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
