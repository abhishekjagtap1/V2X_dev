// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/PathPoint.idl
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
#include "ros_etsi_its_msgs/msg/detail/path_point__struct.h"
#include "ros_etsi_its_msgs/msg/detail/path_point__functions.h"

bool ros_etsi_its_msgs__msg__delta_reference_position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__delta_reference_position__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__path_delta_time__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__path_delta_time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("ros_etsi_its_msgs.msg._path_point.PathPoint", full_classname_dest, 43) == 0);
  }
  ros_etsi_its_msgs__msg__PathPoint * ros_message = _ros_message;
  {  // path_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_position");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__delta_reference_position__convert_from_py(field, &ros_message->path_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // path_delta_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_delta_time");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__path_delta_time__convert_from_py(field, &ros_message->path_delta_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__path_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._path_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__PathPoint * ros_message = (ros_etsi_its_msgs__msg__PathPoint *)raw_ros_message;
  {  // path_position
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__delta_reference_position__convert_to_py(&ros_message->path_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_delta_time
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__path_delta_time__convert_to_py(&ros_message->path_delta_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_delta_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
