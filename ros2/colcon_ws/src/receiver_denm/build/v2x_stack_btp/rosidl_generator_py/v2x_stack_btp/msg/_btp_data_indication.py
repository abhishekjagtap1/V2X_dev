# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_stack_btp:msg/BtpDataIndication.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'permissions'
# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BtpDataIndication(type):
    """Metaclass of message 'BtpDataIndication'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BTP_TYPE_A': 1,
        'BTP_TYPE_INTERACTIVE': 1,
        'BTP_TYPE_B': 2,
        'BTP_TYPE_NON_INTERACTIVE': 2,
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
                'v2x_stack_btp.msg.BtpDataIndication')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__btp_data_indication
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__btp_data_indication
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__btp_data_indication
            cls._TYPE_SUPPORT = module.type_support_msg__msg__btp_data_indication
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__btp_data_indication

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from v2x_stack_btp.msg import GeoNetDestination
            if GeoNetDestination.__class__._TYPE_SUPPORT is None:
                GeoNetDestination.__class__.__import_type_support__()

            from v2x_stack_btp.msg import TrafficClass
            if TrafficClass.__class__._TYPE_SUPPORT is None:
                TrafficClass.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BTP_TYPE_A': cls.__constants['BTP_TYPE_A'],
            'BTP_TYPE_INTERACTIVE': cls.__constants['BTP_TYPE_INTERACTIVE'],
            'BTP_TYPE_B': cls.__constants['BTP_TYPE_B'],
            'BTP_TYPE_NON_INTERACTIVE': cls.__constants['BTP_TYPE_NON_INTERACTIVE'],
        }

    @property
    def BTP_TYPE_A(self):
        """Message constant 'BTP_TYPE_A'."""
        return Metaclass_BtpDataIndication.__constants['BTP_TYPE_A']

    @property
    def BTP_TYPE_INTERACTIVE(self):
        """Message constant 'BTP_TYPE_INTERACTIVE'."""
        return Metaclass_BtpDataIndication.__constants['BTP_TYPE_INTERACTIVE']

    @property
    def BTP_TYPE_B(self):
        """Message constant 'BTP_TYPE_B'."""
        return Metaclass_BtpDataIndication.__constants['BTP_TYPE_B']

    @property
    def BTP_TYPE_NON_INTERACTIVE(self):
        """Message constant 'BTP_TYPE_NON_INTERACTIVE'."""
        return Metaclass_BtpDataIndication.__constants['BTP_TYPE_NON_INTERACTIVE']


class BtpDataIndication(metaclass=Metaclass_BtpDataIndication):
    """
    Message class 'BtpDataIndication'.

    Constants:
      BTP_TYPE_A
      BTP_TYPE_INTERACTIVE
      BTP_TYPE_B
      BTP_TYPE_NON_INTERACTIVE
    """

    __slots__ = [
        '_header',
        '_btp_type',
        '_source_port',
        '_destination_port',
        '_destination_port_info',
        '_destination',
        '_its_aid',
        '_permissions',
        '_traffic_class',
        '_remaining_packet_lifetime',
        '_data',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'btp_type': 'uint8',
        'source_port': 'uint16',
        'destination_port': 'uint16',
        'destination_port_info': 'uint16',
        'destination': 'v2x_stack_btp/GeoNetDestination',
        'its_aid': 'uint32',
        'permissions': 'sequence<uint8>',
        'traffic_class': 'v2x_stack_btp/TrafficClass',
        'remaining_packet_lifetime': 'builtin_interfaces/Duration',
        'data': 'sequence<uint8>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_stack_btp', 'msg'], 'GeoNetDestination'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_stack_btp', 'msg'], 'TrafficClass'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.btp_type = kwargs.get('btp_type', int())
        self.source_port = kwargs.get('source_port', int())
        self.destination_port = kwargs.get('destination_port', int())
        self.destination_port_info = kwargs.get('destination_port_info', int())
        from v2x_stack_btp.msg import GeoNetDestination
        self.destination = kwargs.get('destination', GeoNetDestination())
        self.its_aid = kwargs.get('its_aid', int())
        self.permissions = array.array('B', kwargs.get('permissions', []))
        from v2x_stack_btp.msg import TrafficClass
        self.traffic_class = kwargs.get('traffic_class', TrafficClass())
        from builtin_interfaces.msg import Duration
        self.remaining_packet_lifetime = kwargs.get('remaining_packet_lifetime', Duration())
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.header != other.header:
            return False
        if self.btp_type != other.btp_type:
            return False
        if self.source_port != other.source_port:
            return False
        if self.destination_port != other.destination_port:
            return False
        if self.destination_port_info != other.destination_port_info:
            return False
        if self.destination != other.destination:
            return False
        if self.its_aid != other.its_aid:
            return False
        if self.permissions != other.permissions:
            return False
        if self.traffic_class != other.traffic_class:
            return False
        if self.remaining_packet_lifetime != other.remaining_packet_lifetime:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def btp_type(self):
        """Message field 'btp_type'."""
        return self._btp_type

    @btp_type.setter
    def btp_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'btp_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'btp_type' field must be an unsigned integer in [0, 255]"
        self._btp_type = value

    @builtins.property
    def source_port(self):
        """Message field 'source_port'."""
        return self._source_port

    @source_port.setter
    def source_port(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'source_port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'source_port' field must be an unsigned integer in [0, 65535]"
        self._source_port = value

    @builtins.property
    def destination_port(self):
        """Message field 'destination_port'."""
        return self._destination_port

    @destination_port.setter
    def destination_port(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'destination_port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'destination_port' field must be an unsigned integer in [0, 65535]"
        self._destination_port = value

    @builtins.property
    def destination_port_info(self):
        """Message field 'destination_port_info'."""
        return self._destination_port_info

    @destination_port_info.setter
    def destination_port_info(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'destination_port_info' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'destination_port_info' field must be an unsigned integer in [0, 65535]"
        self._destination_port_info = value

    @builtins.property
    def destination(self):
        """Message field 'destination'."""
        return self._destination

    @destination.setter
    def destination(self, value):
        if self._check_fields:
            from v2x_stack_btp.msg import GeoNetDestination
            assert \
                isinstance(value, GeoNetDestination), \
                "The 'destination' field must be a sub message of type 'GeoNetDestination'"
        self._destination = value

    @builtins.property
    def its_aid(self):
        """Message field 'its_aid'."""
        return self._its_aid

    @its_aid.setter
    def its_aid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'its_aid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'its_aid' field must be an unsigned integer in [0, 4294967295]"
        self._its_aid = value

    @builtins.property
    def permissions(self):
        """Message field 'permissions'."""
        return self._permissions

    @permissions.setter
    def permissions(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'permissions' array.array() must have the type code of 'B'"
                self._permissions = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'permissions' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._permissions = array.array('B', value)

    @builtins.property
    def traffic_class(self):
        """Message field 'traffic_class'."""
        return self._traffic_class

    @traffic_class.setter
    def traffic_class(self, value):
        if self._check_fields:
            from v2x_stack_btp.msg import TrafficClass
            assert \
                isinstance(value, TrafficClass), \
                "The 'traffic_class' field must be a sub message of type 'TrafficClass'"
        self._traffic_class = value

    @builtins.property
    def remaining_packet_lifetime(self):
        """Message field 'remaining_packet_lifetime'."""
        return self._remaining_packet_lifetime

    @remaining_packet_lifetime.setter
    def remaining_packet_lifetime(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'remaining_packet_lifetime' field must be a sub message of type 'Duration'"
        self._remaining_packet_lifetime = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'B', \
                    "The 'data' array.array() must have the type code of 'B'"
                self._data = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)
