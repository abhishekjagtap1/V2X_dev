# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_stack_btp:msg/Area.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Area(type):
    """Metaclass of message 'Area'."""

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
            module = import_type_support('v2x_stack_btp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2x_stack_btp.msg.Area')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__area
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__area
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__area
            cls._TYPE_SUPPORT = module.type_support_msg__msg__area
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__area

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Area(metaclass=Metaclass_Area):
    """Message class 'Area'."""

    __slots__ = [
        '_latitude',
        '_longitude',
        '_distance_a',
        '_distance_b',
        '_angle',
        '_shape',
        '_unused',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'latitude': 'int32',
        'longitude': 'int32',
        'distance_a': 'uint16',
        'distance_b': 'uint16',
        'angle': 'uint16',
        'shape': 'uint8',
        'unused': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.latitude = kwargs.get('latitude', int())
        self.longitude = kwargs.get('longitude', int())
        self.distance_a = kwargs.get('distance_a', int())
        self.distance_b = kwargs.get('distance_b', int())
        self.angle = kwargs.get('angle', int())
        self.shape = kwargs.get('shape', int())
        self.unused = kwargs.get('unused', int())

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
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.distance_a != other.distance_a:
            return False
        if self.distance_b != other.distance_b:
            return False
        if self.angle != other.angle:
            return False
        if self.shape != other.shape:
            return False
        if self.unused != other.unused:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'latitude' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'latitude' field must be an integer in [-2147483648, 2147483647]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'longitude' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'longitude' field must be an integer in [-2147483648, 2147483647]"
        self._longitude = value

    @builtins.property
    def distance_a(self):
        """Message field 'distance_a'."""
        return self._distance_a

    @distance_a.setter
    def distance_a(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'distance_a' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'distance_a' field must be an unsigned integer in [0, 65535]"
        self._distance_a = value

    @builtins.property
    def distance_b(self):
        """Message field 'distance_b'."""
        return self._distance_b

    @distance_b.setter
    def distance_b(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'distance_b' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'distance_b' field must be an unsigned integer in [0, 65535]"
        self._distance_b = value

    @builtins.property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'angle' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'angle' field must be an unsigned integer in [0, 65535]"
        self._angle = value

    @builtins.property
    def shape(self):
        """Message field 'shape'."""
        return self._shape

    @shape.setter
    def shape(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'shape' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'shape' field must be an unsigned integer in [0, 255]"
        self._shape = value

    @builtins.property
    def unused(self):
        """Message field 'unused'."""
        return self._unused

    @unused.setter
    def unused(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'unused' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'unused' field must be an unsigned integer in [0, 255]"
        self._unused = value
