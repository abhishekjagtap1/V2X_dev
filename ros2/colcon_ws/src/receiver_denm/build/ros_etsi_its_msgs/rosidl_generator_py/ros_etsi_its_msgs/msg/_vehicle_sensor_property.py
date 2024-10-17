# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleSensorProperty(type):
    """Metaclass of message 'VehicleSensorProperty'."""

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
                'ros_etsi_its_msgs.msg.VehicleSensorProperty')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_sensor_property
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_sensor_property
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_sensor_property
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_sensor_property
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_sensor_property

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleSensorProperty(metaclass=Metaclass_VehicleSensorProperty):
    """Message class 'VehicleSensorProperty'."""

    __slots__ = [
        '_range',
        '_horizontal_opening_angle_start',
        '_horizontal_opening_angle_end',
        '_has_vertical_opening_angle_start',
        '_vertical_opening_angle_start',
        '_has_vertical_opening_angle_end',
        '_vertical_opening_angle_end',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'range': 'int32',
        'horizontal_opening_angle_start': 'int32',
        'horizontal_opening_angle_end': 'int32',
        'has_vertical_opening_angle_start': 'boolean',
        'vertical_opening_angle_start': 'int32',
        'has_vertical_opening_angle_end': 'boolean',
        'vertical_opening_angle_end': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.range = kwargs.get('range', int())
        self.horizontal_opening_angle_start = kwargs.get('horizontal_opening_angle_start', int())
        self.horizontal_opening_angle_end = kwargs.get('horizontal_opening_angle_end', int())
        self.has_vertical_opening_angle_start = kwargs.get('has_vertical_opening_angle_start', bool())
        self.vertical_opening_angle_start = kwargs.get('vertical_opening_angle_start', int())
        self.has_vertical_opening_angle_end = kwargs.get('has_vertical_opening_angle_end', bool())
        self.vertical_opening_angle_end = kwargs.get('vertical_opening_angle_end', int())

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
        if self.range != other.range:
            return False
        if self.horizontal_opening_angle_start != other.horizontal_opening_angle_start:
            return False
        if self.horizontal_opening_angle_end != other.horizontal_opening_angle_end:
            return False
        if self.has_vertical_opening_angle_start != other.has_vertical_opening_angle_start:
            return False
        if self.vertical_opening_angle_start != other.vertical_opening_angle_start:
            return False
        if self.has_vertical_opening_angle_end != other.has_vertical_opening_angle_end:
            return False
        if self.vertical_opening_angle_end != other.vertical_opening_angle_end:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def range(self):  # noqa: A003
        """Message field 'range'."""
        return self._range

    @range.setter  # noqa: A003
    def range(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'range' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'range' field must be an integer in [-2147483648, 2147483647]"
        self._range = value

    @builtins.property
    def horizontal_opening_angle_start(self):
        """Message field 'horizontal_opening_angle_start'."""
        return self._horizontal_opening_angle_start

    @horizontal_opening_angle_start.setter
    def horizontal_opening_angle_start(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'horizontal_opening_angle_start' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'horizontal_opening_angle_start' field must be an integer in [-2147483648, 2147483647]"
        self._horizontal_opening_angle_start = value

    @builtins.property
    def horizontal_opening_angle_end(self):
        """Message field 'horizontal_opening_angle_end'."""
        return self._horizontal_opening_angle_end

    @horizontal_opening_angle_end.setter
    def horizontal_opening_angle_end(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'horizontal_opening_angle_end' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'horizontal_opening_angle_end' field must be an integer in [-2147483648, 2147483647]"
        self._horizontal_opening_angle_end = value

    @builtins.property
    def has_vertical_opening_angle_start(self):
        """Message field 'has_vertical_opening_angle_start'."""
        return self._has_vertical_opening_angle_start

    @has_vertical_opening_angle_start.setter
    def has_vertical_opening_angle_start(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_vertical_opening_angle_start' field must be of type 'bool'"
        self._has_vertical_opening_angle_start = value

    @builtins.property
    def vertical_opening_angle_start(self):
        """Message field 'vertical_opening_angle_start'."""
        return self._vertical_opening_angle_start

    @vertical_opening_angle_start.setter
    def vertical_opening_angle_start(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'vertical_opening_angle_start' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vertical_opening_angle_start' field must be an integer in [-2147483648, 2147483647]"
        self._vertical_opening_angle_start = value

    @builtins.property
    def has_vertical_opening_angle_end(self):
        """Message field 'has_vertical_opening_angle_end'."""
        return self._has_vertical_opening_angle_end

    @has_vertical_opening_angle_end.setter
    def has_vertical_opening_angle_end(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_vertical_opening_angle_end' field must be of type 'bool'"
        self._has_vertical_opening_angle_end = value

    @builtins.property
    def vertical_opening_angle_end(self):
        """Message field 'vertical_opening_angle_end'."""
        return self._vertical_opening_angle_end

    @vertical_opening_angle_end.setter
    def vertical_opening_angle_end(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'vertical_opening_angle_end' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'vertical_opening_angle_end' field must be an integer in [-2147483648, 2147483647]"
        self._vertical_opening_angle_end = value
