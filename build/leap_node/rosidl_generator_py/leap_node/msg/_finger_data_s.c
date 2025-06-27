// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from leap_node:msg/FingerData.idl
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
#include "leap_node/msg/detail/finger_data__struct.h"
#include "leap_node/msg/detail/finger_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "leap_node/msg/detail/bone_data__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool leap_node__msg__bone_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * leap_node__msg__bone_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool leap_node__msg__finger_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("leap_node.msg._finger_data.FingerData", full_classname_dest, 37) == 0);
  }
  leap_node__msg__FingerData * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // finger_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "finger_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->finger_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mcp_pitch_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "mcp_pitch_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mcp_pitch_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mcp_yaw_deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "mcp_yaw_deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mcp_yaw_deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bones
    PyObject * field = PyObject_GetAttrString(_pymsg, "bones");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'bones'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!leap_node__msg__BoneData__Sequence__init(&(ros_message->bones), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create leap_node__msg__BoneData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    leap_node__msg__BoneData * dest = ros_message->bones.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!leap_node__msg__bone_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * leap_node__msg__finger_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FingerData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("leap_node.msg._finger_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FingerData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  leap_node__msg__FingerData * ros_message = (leap_node__msg__FingerData *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // finger_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->finger_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "finger_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mcp_pitch_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mcp_pitch_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mcp_pitch_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mcp_yaw_deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mcp_yaw_deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mcp_yaw_deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bones
    PyObject * field = NULL;
    size_t size = ros_message->bones.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    leap_node__msg__BoneData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->bones.data[i]);
      PyObject * pyitem = leap_node__msg__bone_data__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "bones", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
