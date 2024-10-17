# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/VehicleRole.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleRole(type):
    """Metaclass of message 'VehicleRole'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEFAULT': 0,
        'PUBLIC_TRANSPORT': 1,
        'SPECIAL_TRANSPORT': 2,
        'DANGEROUS_GOODS': 3,
        'ROAD_WORK': 4,
        'RESCUE': 5,
        'EMERGENCY': 6,
        'SAFETY_CAR': 7,
        'AGRICULTURE': 8,
        'COMMERCIAL': 9,
        'MILITARY': 10,
        'ROAD_OPERATOR': 11,
        'TAXI': 12,
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
                'ros_etsi_its_msgs.msg.VehicleRole')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_role
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_role
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_role
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_role
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_role

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEFAULT': cls.__constants['DEFAULT'],
            'PUBLIC_TRANSPORT': cls.__constants['PUBLIC_TRANSPORT'],
            'SPECIAL_TRANSPORT': cls.__constants['SPECIAL_TRANSPORT'],
            'DANGEROUS_GOODS': cls.__constants['DANGEROUS_GOODS'],
            'ROAD_WORK': cls.__constants['ROAD_WORK'],
            'RESCUE': cls.__constants['RESCUE'],
            'EMERGENCY': cls.__constants['EMERGENCY'],
            'SAFETY_CAR': cls.__constants['SAFETY_CAR'],
            'AGRICULTURE': cls.__constants['AGRICULTURE'],
            'COMMERCIAL': cls.__constants['COMMERCIAL'],
            'MILITARY': cls.__constants['MILITARY'],
            'ROAD_OPERATOR': cls.__constants['ROAD_OPERATOR'],
            'TAXI': cls.__constants['TAXI'],
        }

    @property
    def DEFAULT(self):
        """Message constant 'DEFAULT'."""
        return Metaclass_VehicleRole.__constants['DEFAULT']

    @property
    def PUBLIC_TRANSPORT(self):
        """Message constant 'PUBLIC_TRANSPORT'."""
        return Metaclass_VehicleRole.__constants['PUBLIC_TRANSPORT']

    @property
    def SPECIAL_TRANSPORT(self):
        """Message constant 'SPECIAL_TRANSPORT'."""
        return Metaclass_VehicleRole.__constants['SPECIAL_TRANSPORT']

    @property
    def DANGEROUS_GOODS(self):
        """Message constant 'DANGEROUS_GOODS'."""
        return Metaclass_VehicleRole.__constants['DANGEROUS_GOODS']

    @property
    def ROAD_WORK(self):
        """Message constant 'ROAD_WORK'."""
        return Metaclass_VehicleRole.__constants['ROAD_WORK']

    @property
    def RESCUE(self):
        """Message constant 'RESCUE'."""
        return Metaclass_VehicleRole.__constants['RESCUE']

    @property
    def EMERGENCY(self):
        """Message constant 'EMERGENCY'."""
        return Metaclass_VehicleRole.__constants['EMERGENCY']

    @property
    def SAFETY_CAR(self):
        """Message constant 'SAFETY_CAR'."""
        return Metaclass_VehicleRole.__constants['SAFETY_CAR']

    @property
    def AGRICULTURE(self):
        """Message constant 'AGRICULTURE'."""
        return Metaclass_VehicleRole.__constants['AGRICULTURE']

    @property
    def COMMERCIAL(self):
        """Message constant 'COMMERCIAL'."""
        return Metaclass_VehicleRole.__constants['COMMERCIAL']

    @property
    def MILITARY(self):
        """Message constant 'MILITARY'."""
        return Metaclass_VehicleRole.__constants['MILITARY']

    @property
    def ROAD_OPERATOR(self):
        """Message constant 'ROAD_OPERATOR'."""
        return Metaclass_VehicleRole.__constants['ROAD_OPERATOR']

    @property
    def TAXI(self):
        """Message constant 'TAXI'."""
        return Metaclass_VehicleRole.__constants['TAXI']


class VehicleRole(metaclass=Metaclass_VehicleRole):
    """
    Message class 'VehicleRole'.

    Constants:
      DEFAULT
      PUBLIC_TRANSPORT
      SPECIAL_TRANSPORT
      DANGEROUS_GOODS
      ROAD_WORK
      RESCUE
      EMERGENCY
      SAFETY_CAR
      AGRICULTURE
      COMMERCIAL
      MILITARY
      ROAD_OPERATOR
      TAXI
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
