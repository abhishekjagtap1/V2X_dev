# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/DeltaReferencePosition.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeltaReferencePosition(type):
    """Metaclass of message 'DeltaReferencePosition'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ONE_MICRODEGREE_NORTH': 10,
        'ONE_MICRODEGREE_SOUTH': -10,
        'ONE_MICRODEGREE_EAST': 10,
        'ONE_MICRODEGREE_WEST': -10,
        'ONE_CENTIMETER_UP': 1,
        'ONE_CENTIMETER_DOWN': -1,
        'LATITUDE_UNAVAILABLE': 131072,
        'LONGITUDE_UNAVAILABLE': 131072,
        'ALTITUDE_UNAVAILABLE': 12800,
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
                'ros_etsi_its_msgs.msg.DeltaReferencePosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__delta_reference_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__delta_reference_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__delta_reference_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__delta_reference_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__delta_reference_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ONE_MICRODEGREE_NORTH': cls.__constants['ONE_MICRODEGREE_NORTH'],
            'ONE_MICRODEGREE_SOUTH': cls.__constants['ONE_MICRODEGREE_SOUTH'],
            'ONE_MICRODEGREE_EAST': cls.__constants['ONE_MICRODEGREE_EAST'],
            'ONE_MICRODEGREE_WEST': cls.__constants['ONE_MICRODEGREE_WEST'],
            'ONE_CENTIMETER_UP': cls.__constants['ONE_CENTIMETER_UP'],
            'ONE_CENTIMETER_DOWN': cls.__constants['ONE_CENTIMETER_DOWN'],
            'LATITUDE_UNAVAILABLE': cls.__constants['LATITUDE_UNAVAILABLE'],
            'LONGITUDE_UNAVAILABLE': cls.__constants['LONGITUDE_UNAVAILABLE'],
            'ALTITUDE_UNAVAILABLE': cls.__constants['ALTITUDE_UNAVAILABLE'],
        }

    @property
    def ONE_MICRODEGREE_NORTH(self):
        """Message constant 'ONE_MICRODEGREE_NORTH'."""
        return Metaclass_DeltaReferencePosition.__constants['ONE_MICRODEGREE_NORTH']

    @property
    def ONE_MICRODEGREE_SOUTH(self):
        """Message constant 'ONE_MICRODEGREE_SOUTH'."""
        return Metaclass_DeltaReferencePosition.__constants['ONE_MICRODEGREE_SOUTH']

    @property
    def ONE_MICRODEGREE_EAST(self):
        """Message constant 'ONE_MICRODEGREE_EAST'."""
        return Metaclass_DeltaReferencePosition.__constants['ONE_MICRODEGREE_EAST']

    @property
    def ONE_MICRODEGREE_WEST(self):
        """Message constant 'ONE_MICRODEGREE_WEST'."""
        return Metaclass_DeltaReferencePosition.__constants['ONE_MICRODEGREE_WEST']

    @property
    def ONE_CENTIMETER_UP(self):
        """Message constant 'ONE_CENTIMETER_UP'."""
        return Metaclass_DeltaReferencePosition.__constants['ONE_CENTIMETER_UP']

    @property
    def ONE_CENTIMETER_DOWN(self):
        """Message constant 'ONE_CENTIMETER_DOWN'."""
        return Metaclass_DeltaReferencePosition.__constants['ONE_CENTIMETER_DOWN']

    @property
    def LATITUDE_UNAVAILABLE(self):
        """Message constant 'LATITUDE_UNAVAILABLE'."""
        return Metaclass_DeltaReferencePosition.__constants['LATITUDE_UNAVAILABLE']

    @property
    def LONGITUDE_UNAVAILABLE(self):
        """Message constant 'LONGITUDE_UNAVAILABLE'."""
        return Metaclass_DeltaReferencePosition.__constants['LONGITUDE_UNAVAILABLE']

    @property
    def ALTITUDE_UNAVAILABLE(self):
        """Message constant 'ALTITUDE_UNAVAILABLE'."""
        return Metaclass_DeltaReferencePosition.__constants['ALTITUDE_UNAVAILABLE']


class DeltaReferencePosition(metaclass=Metaclass_DeltaReferencePosition):
    """
    Message class 'DeltaReferencePosition'.

    Constants:
      ONE_MICRODEGREE_NORTH
      ONE_MICRODEGREE_SOUTH
      ONE_MICRODEGREE_EAST
      ONE_MICRODEGREE_WEST
      ONE_CENTIMETER_UP
      ONE_CENTIMETER_DOWN
      LATITUDE_UNAVAILABLE
      LONGITUDE_UNAVAILABLE
      ALTITUDE_UNAVAILABLE
    """

    __slots__ = [
        '_delta_latitude',
        '_delta_longitude',
        '_delta_altitude',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'delta_latitude': 'int32',
        'delta_longitude': 'int32',
        'delta_altitude': 'int16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
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
        self.delta_latitude = kwargs.get('delta_latitude', int())
        self.delta_longitude = kwargs.get('delta_longitude', int())
        self.delta_altitude = kwargs.get('delta_altitude', int())

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
        if self.delta_latitude != other.delta_latitude:
            return False
        if self.delta_longitude != other.delta_longitude:
            return False
        if self.delta_altitude != other.delta_altitude:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def delta_latitude(self):
        """Message field 'delta_latitude'."""
        return self._delta_latitude

    @delta_latitude.setter
    def delta_latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'delta_latitude' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delta_latitude' field must be an integer in [-2147483648, 2147483647]"
        self._delta_latitude = value

    @builtins.property
    def delta_longitude(self):
        """Message field 'delta_longitude'."""
        return self._delta_longitude

    @delta_longitude.setter
    def delta_longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'delta_longitude' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'delta_longitude' field must be an integer in [-2147483648, 2147483647]"
        self._delta_longitude = value

    @builtins.property
    def delta_altitude(self):
        """Message field 'delta_altitude'."""
        return self._delta_altitude

    @delta_altitude.setter
    def delta_altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'delta_altitude' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'delta_altitude' field must be an integer in [-32768, 32767]"
        self._delta_altitude = value
