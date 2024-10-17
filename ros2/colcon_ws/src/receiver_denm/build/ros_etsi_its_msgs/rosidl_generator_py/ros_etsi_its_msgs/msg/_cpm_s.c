// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/CPM.idl
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
#include "ros_etsi_its_msgs/msg/detail/cpm__struct.h"
#include "ros_etsi_its_msgs/msg/detail/cpm__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__its_pdu_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__its_pdu_header__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__station_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__station_type__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__reference_position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__reference_position__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__originating_vehicle_container__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__originating_vehicle_container__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__sensor_information_container__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__sensor_information_container__convert_to_py(void * raw_ros_message);
bool ros_etsi_its_msgs__msg__list_of_perceived_objects__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ros_etsi_its_msgs__msg__list_of_perceived_objects__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__cpm__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("ros_etsi_its_msgs.msg._cpm.CPM", full_classname_dest, 30) == 0);
  }
  ros_etsi_its_msgs__msg__CPM * ros_message = _ros_message;
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
  {  // generation_delta_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "generation_delta_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->generation_delta_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // station_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "station_type");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__station_type__convert_from_py(field, &ros_message->station_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reference_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_position");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__reference_position__convert_from_py(field, &ros_message->reference_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // originating_vehicle_container
    PyObject * field = PyObject_GetAttrString(_pymsg, "originating_vehicle_container");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__originating_vehicle_container__convert_from_py(field, &ros_message->originating_vehicle_container)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_sensor_information_container
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_sensor_information_container");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_sensor_information_container = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sensor_information_container
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_information_container");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__sensor_information_container__convert_from_py(field, &ros_message->sensor_information_container)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // has_list_of_perceived_object
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_list_of_perceived_object");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_list_of_perceived_object = (Py_True == field);
    Py_DECREF(field);
  }
  {  // list_of_perceived_objects
    PyObject * field = PyObject_GetAttrString(_pymsg, "list_of_perceived_objects");
    if (!field) {
      return false;
    }
    if (!ros_etsi_its_msgs__msg__list_of_perceived_objects__convert_from_py(field, &ros_message->list_of_perceived_objects)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // number_of_perceived_objects
    PyObject * field = PyObject_GetAttrString(_pymsg, "number_of_perceived_objects");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number_of_perceived_objects = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__cpm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CPM */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._cpm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CPM");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__CPM * ros_message = (ros_etsi_its_msgs__msg__CPM *)raw_ros_message;
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
  {  // generation_delta_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->generation_delta_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "generation_delta_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // station_type
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__station_type__convert_to_py(&ros_message->station_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "station_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_position
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__reference_position__convert_to_py(&ros_message->reference_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // originating_vehicle_container
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__originating_vehicle_container__convert_to_py(&ros_message->originating_vehicle_container);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "originating_vehicle_container", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_sensor_information_container
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_sensor_information_container ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_sensor_information_container", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_information_container
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__sensor_information_container__convert_to_py(&ros_message->sensor_information_container);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_information_container", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_list_of_perceived_object
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_list_of_perceived_object ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_list_of_perceived_object", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // list_of_perceived_objects
    PyObject * field = NULL;
    field = ros_etsi_its_msgs__msg__list_of_perceived_objects__convert_to_py(&ros_message->list_of_perceived_objects);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "list_of_perceived_objects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number_of_perceived_objects
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->number_of_perceived_objects);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number_of_perceived_objects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
