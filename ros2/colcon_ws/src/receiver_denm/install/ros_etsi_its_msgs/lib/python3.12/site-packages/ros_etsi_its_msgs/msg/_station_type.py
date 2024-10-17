# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/StationType.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StationType(type):
    """Metaclass of message 'StationType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'PEDESTRIAN': 1,
        'CYCLIST': 2,
        'MOPED': 3,
        'MOTORCYCLE': 4,
        'PASSENGER_CAR': 5,
        'BUS': 6,
        'LIGHT_TRUCK': 7,
        'HEAVY_TRUCK': 8,
        'TRAILER': 9,
        'SPECIAL_VEHICLE': 10,
        'TRAM': 11,
        'ROAD_SIDE_UNIT': 15,
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
                'ros_etsi_its_msgs.msg.StationType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__station_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__station_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__station_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__station_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__station_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'PEDESTRIAN': cls.__constants['PEDESTRIAN'],
            'CYCLIST': cls.__constants['CYCLIST'],
            'MOPED': cls.__constants['MOPED'],
            'MOTORCYCLE': cls.__constants['MOTORCYCLE'],
            'PASSENGER_CAR': cls.__constants['PASSENGER_CAR'],
            'BUS': cls.__constants['BUS'],
            'LIGHT_TRUCK': cls.__constants['LIGHT_TRUCK'],
            'HEAVY_TRUCK': cls.__constants['HEAVY_TRUCK'],
            'TRAILER': cls.__constants['TRAILER'],
            'SPECIAL_VEHICLE': cls.__constants['SPECIAL_VEHICLE'],
            'TRAM': cls.__constants['TRAM'],
            'ROAD_SIDE_UNIT': cls.__constants['ROAD_SIDE_UNIT'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_StationType.__constants['UNKNOWN']

    @property
    def PEDESTRIAN(self):
        """Message constant 'PEDESTRIAN'."""
        return Metaclass_StationType.__constants['PEDESTRIAN']

    @property
    def CYCLIST(self):
        """Message constant 'CYCLIST'."""
        return Metaclass_StationType.__constants['CYCLIST']

    @property
    def MOPED(self):
        """Message constant 'MOPED'."""
        return Metaclass_StationType.__constants['MOPED']

    @property
    def MOTORCYCLE(self):
        """Message constant 'MOTORCYCLE'."""
        return Metaclass_StationType.__constants['MOTORCYCLE']

    @property
    def PASSENGER_CAR(self):
        """Message constant 'PASSENGER_CAR'."""
        return Metaclass_StationType.__constants['PASSENGER_CAR']

    @property
    def BUS(self):
        """Message constant 'BUS'."""
        return Metaclass_StationType.__constants['BUS']

    @property
    def LIGHT_TRUCK(self):
        """Message constant 'LIGHT_TRUCK'."""
        return Metaclass_StationType.__constants['LIGHT_TRUCK']

    @property
    def HEAVY_TRUCK(self):
        """Message constant 'HEAVY_TRUCK'."""
        return Metaclass_StationType.__constants['HEAVY_TRUCK']

    @property
    def TRAILER(self):
        """Message constant 'TRAILER'."""
        return Metaclass_StationType.__constants['TRAILER']

    @property
    def SPECIAL_VEHICLE(self):
        """Message constant 'SPECIAL_VEHICLE'."""
        return Metaclass_StationType.__constants['SPECIAL_VEHICLE']

    @property
    def TRAM(self):
        """Message constant 'TRAM'."""
        return Metaclass_StationType.__constants['TRAM']

    @property
    def ROAD_SIDE_UNIT(self):
        """Message constant 'ROAD_SIDE_UNIT'."""
        return Metaclass_StationType.__constants['ROAD_SIDE_UNIT']


class StationType(metaclass=Metaclass_StationType):
    """
    Message class 'StationType'.

    Constants:
      UNKNOWN
      PEDESTRIAN
      CYCLIST
      MOPED
      MOTORCYCLE
      PASSENGER_CAR
      BUS
      LIGHT_TRUCK
      HEAVY_TRUCK
      TRAILER
      SPECIAL_VEHICLE
      TRAM
      ROAD_SIDE_UNIT
    """

    __slots__ = [
        '_value',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'value': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
            assert value >= 0 and value < 256, \
                "The 'value' field must be an unsigned integer in [0, 255]"
        self._value = value
