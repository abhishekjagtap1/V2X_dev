# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/WGS84Angle.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WGS84Angle(type):
    """Metaclass of message 'WGS84Angle'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'WGS84NORTH': 0,
        'WGS84EAST': 900,
        'WGS84SOUTH': 2700,
        'VALUE_UNAVAILABLE': 3601,
        'CONFIDENCE_ZERO_POINT_ONE_DEGREE': 1,
        'CONFIDENCE_ONE_DEGREE': 10,
        'CONFIDENCE_OUT_OF_RANGE': 126,
        'CONFIDENCE_UNAVAILABLE': 127,
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
                'ros_etsi_its_msgs.msg.WGS84Angle')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wgs84_angle
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wgs84_angle
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wgs84_angle
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wgs84_angle
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wgs84_angle

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WGS84NORTH': cls.__constants['WGS84NORTH'],
            'WGS84EAST': cls.__constants['WGS84EAST'],
            'WGS84SOUTH': cls.__constants['WGS84SOUTH'],
            'VALUE_UNAVAILABLE': cls.__constants['VALUE_UNAVAILABLE'],
            'CONFIDENCE_ZERO_POINT_ONE_DEGREE': cls.__constants['CONFIDENCE_ZERO_POINT_ONE_DEGREE'],
            'CONFIDENCE_ONE_DEGREE': cls.__constants['CONFIDENCE_ONE_DEGREE'],
            'CONFIDENCE_OUT_OF_RANGE': cls.__constants['CONFIDENCE_OUT_OF_RANGE'],
            'CONFIDENCE_UNAVAILABLE': cls.__constants['CONFIDENCE_UNAVAILABLE'],
        }

    @property
    def WGS84NORTH(self):
        """Message constant 'WGS84NORTH'."""
        return Metaclass_WGS84Angle.__constants['WGS84NORTH']

    @property
    def WGS84EAST(self):
        """Message constant 'WGS84EAST'."""
        return Metaclass_WGS84Angle.__constants['WGS84EAST']

    @property
    def WGS84SOUTH(self):
        """Message constant 'WGS84SOUTH'."""
        return Metaclass_WGS84Angle.__constants['WGS84SOUTH']

    @property
    def VALUE_UNAVAILABLE(self):
        """Message constant 'VALUE_UNAVAILABLE'."""
        return Metaclass_WGS84Angle.__constants['VALUE_UNAVAILABLE']

    @property
    def CONFIDENCE_ZERO_POINT_ONE_DEGREE(self):
        """Message constant 'CONFIDENCE_ZERO_POINT_ONE_DEGREE'."""
        return Metaclass_WGS84Angle.__constants['CONFIDENCE_ZERO_POINT_ONE_DEGREE']

    @property
    def CONFIDENCE_ONE_DEGREE(self):
        """Message constant 'CONFIDENCE_ONE_DEGREE'."""
        return Metaclass_WGS84Angle.__constants['CONFIDENCE_ONE_DEGREE']

    @property
    def CONFIDENCE_OUT_OF_RANGE(self):
        """Message constant 'CONFIDENCE_OUT_OF_RANGE'."""
        return Metaclass_WGS84Angle.__constants['CONFIDENCE_OUT_OF_RANGE']

    @property
    def CONFIDENCE_UNAVAILABLE(self):
        """Message constant 'CONFIDENCE_UNAVAILABLE'."""
        return Metaclass_WGS84Angle.__constants['CONFIDENCE_UNAVAILABLE']


class WGS84Angle(metaclass=Metaclass_WGS84Angle):
    """
    Message class 'WGS84Angle'.

    Constants:
      WGS84NORTH
      WGS84EAST
      WGS84SOUTH
      VALUE_UNAVAILABLE
      CONFIDENCE_ZERO_POINT_ONE_DEGREE
      CONFIDENCE_ONE_DEGREE
      CONFIDENCE_OUT_OF_RANGE
      CONFIDENCE_UNAVAILABLE
    """

    __slots__ = [
        '_value',
        '_confidence',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'value': 'int16',
        'confidence': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.value = kwargs.get('value', int())
        self.confidence = kwargs.get('confidence', int())

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
        if self.value != other.value:
            return False
        if self.confidence != other.confidence:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'value' field must be an integer in [-32768, 32767]"
        self._value = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confidence' field must be an unsigned integer in [0, 255]"
        self._confidence = value
