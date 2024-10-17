// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
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
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__struct.h"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__functions.h"

bool ros_etsi_its_msgs__msg__vehicle_role__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__vehicle_role__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__exterior_lights__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__exterior_lights__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__path_history__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__path_history__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__basic_vehicle_container_low_frequency__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[95];
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
    assert(strncmp("ros_etsi_its_msgs.msg._basic_vehicle_container_low_frequency.BasicVehicleContainerLowFrequency", full_classname_dest, 94) == 0);
  }
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * ros_message = _ros_message;
  {  // vehicle_role
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_role");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__vehicle_role__convert_from_py(field, &ros_message->vehicle_role)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // exterior_lights
    PyObject * field = PyObject_GetAttrString(_pymsg, "exterior_lights");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__exterior_lights__convert_from_py(field, &ros_message->exterior_lights)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // path_history
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_history");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__path_history__convert_from_py(field, &ros_message->path_history)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__basic_vehicle_container_low_frequency__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BasicVehicleContainerLowFrequency */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._basic_vehicle_container_low_frequency");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BasicVehicleContainerLowFrequency");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency * ros_message = (ros_etsi_its_msgs__msg__BasicVehicleContainerLowFrequency *)raw_ros_message;
  {  // vehicle_role
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__vehicle_role__convert_to_py(&ros_message->vehicle_role);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_role", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exterior_lights
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__exterior_lights__convert_to_py(&ros_message->exterior_lights);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "exterior_lights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_history
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__path_history__convert_to_py(&ros_message->path_history);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_history", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
