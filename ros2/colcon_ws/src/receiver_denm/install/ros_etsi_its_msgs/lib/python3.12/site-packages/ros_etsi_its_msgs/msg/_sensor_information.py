# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/SensorInformation.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorInformation(type):
    """Metaclass of message 'SensorInformation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros_etsi_its_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros_etsi_its_msgs.msg.SensorInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_information

            from ros_etsi_its_msgs.msg import VehicleSensor
            if VehicleSensor.__class__._TYPE_SUPPORT is None:
                VehicleSensor.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorInformation(metaclass=Metaclass_SensorInformation):
    """Message class 'SensorInformation'."""

    __slots__ = [
        '_sensor_id',
        '_type',
        '_detection_area',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'sensor_id': 'uint8',
        'type': 'int8',
        'detection_area': 'ros_etsi_its_msgs/VehicleSensor',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'VehicleSensor'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sensor_id = kwargs.get('sensor_id', int())
        self.type = kwargs.get('type', int())
        from ros_etsi_its_msgs.msg import VehicleSensor
        self.detection_area = kwargs.get('detection_area', VehicleSensor())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.sensor_id != other.sensor_id:
            return False
        if self.type != other.type:
            return False
        if self.detection_area != other.detection_area:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sensor_id(self):
        """Message field 'sensor_id'."""
        return self._sensor_id

    @sensor_id.setter
    def sensor_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_id' field must be an unsigned integer in [0, 255]"
        self._sensor_id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'type' field must be an integer in [-128, 127]"
        self._type = value

    @builtins.property
    def detection_area(self):
        """Message field 'detection_area'."""
        return self._detection_area

    @detection_area.setter
    def detection_area(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import VehicleSensor
            assert \
                isinstance(value, VehicleSensor), \
                "The 'detection_area' field must be a sub message of type 'VehicleSensor'"
        self._detection_area = value
