# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/Connection.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Connection(type):
    """Metaclass of message 'Connection'."""

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
                'ros_etsi_its_msgs.msg.Connection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__connection
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__connection
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__connection
            cls._TYPE_SUPPORT = module.type_support_msg__msg__connection
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__connection

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Connection(metaclass=Metaclass_Connection):
    """Message class 'Connection'."""

    __slots__ = [
        '_connecting_lane',
        '_remote_intersection',
        '_signal_group',
        '_connection_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'connecting_lane': 'uint16',
        'remote_intersection': 'uint16',
        'signal_group': 'uint8',
        'connection_id': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
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
        self.connecting_lane = kwargs.get('connecting_lane', int())
        self.remote_intersection = kwargs.get('remote_intersection', int())
        self.signal_group = kwargs.get('signal_group', int())
        self.connection_id = kwargs.get('connection_id', int())

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
        if self.connecting_lane != other.connecting_lane:
            return False
        if self.remote_intersection != other.remote_intersection:
            return False
        if self.signal_group != other.signal_group:
            return False
        if self.connection_id != other.connection_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def connecting_lane(self):
        """Message field 'connecting_lane'."""
        return self._connecting_lane

    @connecting_lane.setter
    def connecting_lane(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'connecting_lane' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'connecting_lane' field must be an unsigned integer in [0, 65535]"
        self._connecting_lane = value

    @builtins.property
    def remote_intersection(self):
        """Message field 'remote_intersection'."""
        return self._remote_intersection

    @remote_intersection.setter
    def remote_intersection(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'remote_intersection' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remote_intersection' field must be an unsigned integer in [0, 65535]"
        self._remote_intersection = value

    @builtins.property
    def signal_group(self):
        """Message field 'signal_group'."""
        return self._signal_group

    @signal_group.setter
    def signal_group(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'signal_group' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signal_group' field must be an unsigned integer in [0, 255]"
        self._signal_group = value

    @builtins.property
    def connection_id(self):
        """Message field 'connection_id'."""
        return self._connection_id

    @connection_id.setter
    def connection_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'connection_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'connection_id' field must be an unsigned integer in [0, 255]"
        self._connection_id = value
