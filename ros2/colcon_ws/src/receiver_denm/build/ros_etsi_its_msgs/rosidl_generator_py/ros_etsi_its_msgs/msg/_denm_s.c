// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/DENM.idl
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
#include "ros_etsi_its_msgs/msg/detail/denm__struct.h"
#include "ros_etsi_its_msgs/msg/detail/denm__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__its_pdu_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__its_pdu_header__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__management_container__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__management_container__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__situation_container__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__situation_container__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__location_container__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__location_container__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__denm__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("ros_etsi_its_msgs.msg._denm.DENM", full_classname_dest, 32) == 0);
  }
  ros_etsi_its_msgs__msg__DENM * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // its_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "its_header");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__its_pdu_header__convert_from_py(field, &ros_message->its_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // management
    PyObject * field = PyObject_GetAttrString(_pymsg, "management");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__management_container__convert_from_py(field, &ros_message->management)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_situation
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_situation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_situation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // situation
    PyObject * field = PyObject_GetAttrString(_pymsg, "situation");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__situation_container__convert_from_py(field, &ros_message->situation)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_location");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_location = (Py_True == field);
    Py_DECREF(field);
  }
  {  // location
    PyObject * field = PyObject_GetAttrString(_pymsg, "location");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__location_container__convert_from_py(field, &ros_message->location)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__denm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DENM */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._denm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DENM");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__DENM * ros_message = (ros_etsi_its_msgs__msg__DENM *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // its_header
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__its_pdu_header__convert_to_py(&ros_message->its_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "its_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // management
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__management_container__convert_to_py(&ros_message->management);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "management", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_situation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_situation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_situation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // situation
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__situation_container__convert_to_py(&ros_message->situation);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "situation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_location
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_location ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // location
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__location_container__convert_to_py(&ros_message->location);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
