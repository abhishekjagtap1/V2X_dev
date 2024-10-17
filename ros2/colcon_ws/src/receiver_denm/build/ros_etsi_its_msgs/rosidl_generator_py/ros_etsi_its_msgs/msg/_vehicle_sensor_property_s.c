// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
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
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__struct.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ros_etsi_its_msgs__msg__vehicle_sensor_property__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("ros_etsi_its_msgs.msg._vehicle_sensor_property.VehicleSensorProperty", full_classname_dest, 68) == 0);
  }
  ros_etsi_its_msgs__msg__VehicleSensorProperty * ros_message = _ros_message;
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->range = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // horizontal_opening_angle_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_opening_angle_start");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->horizontal_opening_angle_start = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // horizontal_opening_angle_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_opening_angle_end");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->horizontal_opening_angle_end = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // has_vertical_opening_angle_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_vertical_opening_angle_start");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_vertical_opening_angle_start = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vertical_opening_angle_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_opening_angle_start");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vertical_opening_angle_start = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // has_vertical_opening_angle_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_vertical_opening_angle_end");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_vertical_opening_angle_end = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vertical_opening_angle_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_opening_angle_end");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vertical_opening_angle_end = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ros_etsi_its_msgs__msg__vehicle_sensor_property__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleSensorProperty */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ros_etsi_its_msgs.msg._vehicle_sensor_property");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleSensorProperty");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ros_etsi_its_msgs__msg__VehicleSensorProperty * ros_message = (ros_etsi_its_msgs__msg__VehicleSensorProperty *)raw_ros_message;
  {  // range
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_opening_angle_start
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->horizontal_opening_angle_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_opening_angle_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_opening_angle_end
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->horizontal_opening_angle_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_opening_angle_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_vertical_opening_angle_start
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_vertical_opening_angle_start ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_vertical_opening_angle_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_opening_angle_start
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vertical_opening_angle_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_opening_angle_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_vertical_opening_angle_end
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_vertical_opening_angle_end ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_vertical_opening_angle_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_opening_angle_end
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->vertical_opening_angle_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_opening_angle_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
