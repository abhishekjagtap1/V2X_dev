# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_stack_btp:srv/BtpData.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BtpData_Request(type):
    """Metaclass of message 'BtpData_Request'."""

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
                'v2x_stack_btp.srv.BtpData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__btp_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__btp_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__btp_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__btp_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__btp_data__request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

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
        }


class BtpData_Request(metaclass=Metaclass_BtpData_Request):
    """Message class 'BtpData_Request'."""

    __slots__ = [
        '_btp_type',
        '_source_port',
        '_destination_port',
        '_destination_port_info',
        '_transport_type',
        '_destination',
        '_its_aid',
        '_hop_limit',
        '_traffic_class',
        '_lifetime',
        '_repetition_interval',
        '_repetition_duration',
        '_data',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'btp_type': 'uint8',
        'source_port': 'uint16',
        'destination_port': 'uint16',
        'destination_port_info': 'uint16',
        'transport_type': 'uint8',
        'destination': 'v2x_stack_btp/GeoNetDestination',
        'its_aid': 'uint32',
        'hop_limit': 'uint8',
        'traffic_class': 'v2x_stack_btp/TrafficClass',
        'lifetime': 'builtin_interfaces/Duration',
        'repetition_interval': 'builtin_interfaces/Duration',
        'repetition_duration': 'builtin_interfaces/Duration',
        'data': 'uint8[1]',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_stack_btp', 'msg'], 'GeoNetDestination'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_stack_btp', 'msg'], 'TrafficClass'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 1),  # noqa: E501
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
        self.btp_type = kwargs.get('btp_type', int())
        self.source_port = kwargs.get('source_port', int())
        self.destination_port = kwargs.get('destination_port', int())
        self.destination_port_info = kwargs.get('destination_port_info', int())
        self.transport_type = kwargs.get('transport_type', int())
        from v2x_stack_btp.msg import GeoNetDestination
        self.destination = kwargs.get('destination', GeoNetDestination())
        self.its_aid = kwargs.get('its_aid', int())
        self.hop_limit = kwargs.get('hop_limit', int())
        from v2x_stack_btp.msg import TrafficClass
        self.traffic_class = kwargs.get('traffic_class', TrafficClass())
        from builtin_interfaces.msg import Duration
        self.lifetime = kwargs.get('lifetime', Duration())
        from builtin_interfaces.msg import Duration
        self.repetition_interval = kwargs.get('repetition_interval', Duration())
        from builtin_interfaces.msg import Duration
        self.repetition_duration = kwargs.get('repetition_duration', Duration())
        if 'data' not in kwargs:
            self.data = numpy.zeros(1, dtype=numpy.uint8)
        else:
            self.data = numpy.array(kwargs.get('data'), dtype=numpy.uint8)
            assert self.data.shape == (1, )

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
        if self.btp_type != other.btp_type:
            return False
        if self.source_port != other.source_port:
            return False
        if self.destination_port != other.destination_port:
            return False
        if self.destination_port_info != other.destination_port_info:
            return False
        if self.transport_type != other.transport_type:
            return False
        if self.destination != other.destination:
            return False
        if self.its_aid != other.its_aid:
            return False
        if self.hop_limit != other.hop_limit:
            return False
        if self.traffic_class != other.traffic_class:
            return False
        if self.lifetime != other.lifetime:
            return False
        if self.repetition_interval != other.repetition_interval:
            return False
        if self.repetition_duration != other.repetition_duration:
            return False
        if all(self.data != other.data):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def transport_type(self):
        """Message field 'transport_type'."""
        return self._transport_type

    @transport_type.setter
    def transport_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'transport_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'transport_type' field must be an unsigned integer in [0, 255]"
        self._transport_type = value

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
    def hop_limit(self):
        """Message field 'hop_limit'."""
        return self._hop_limit

    @hop_limit.setter
    def hop_limit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hop_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hop_limit' field must be an unsigned integer in [0, 255]"
        self._hop_limit = value

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
    def lifetime(self):
        """Message field 'lifetime'."""
        return self._lifetime

    @lifetime.setter
    def lifetime(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'lifetime' field must be a sub message of type 'Duration'"
        self._lifetime = value

    @builtins.property
    def repetition_interval(self):
        """Message field 'repetition_interval'."""
        return self._repetition_interval

    @repetition_interval.setter
    def repetition_interval(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'repetition_interval' field must be a sub message of type 'Duration'"
        self._repetition_interval = value

    @builtins.property
    def repetition_duration(self):
        """Message field 'repetition_duration'."""
        return self._repetition_duration

    @repetition_duration.setter
    def repetition_duration(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'repetition_duration' field must be a sub message of type 'Duration'"
        self._repetition_duration = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 1, \
                    "The 'data' numpy.ndarray() must have a size of 1"
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
                 len(value) == 1 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 1 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BtpData_Response(type):
    """Metaclass of message 'BtpData_Response'."""

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
                'v2x_stack_btp.srv.BtpData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__btp_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__btp_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__btp_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__btp_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__btp_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BtpData_Response(metaclass=Metaclass_BtpData_Response):
    """Message class 'BtpData_Response'."""

    __slots__ = [
        '_confirm',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'confirm': 'uint8',
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
        self.confirm = kwargs.get('confirm', int())

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
        if self.confirm != other.confirm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def confirm(self):
        """Message field 'confirm'."""
        return self._confirm

    @confirm.setter
    def confirm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'confirm' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confirm' field must be an unsigned integer in [0, 255]"
        self._confirm = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BtpData_Event(type):
    """Metaclass of message 'BtpData_Event'."""

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
                'v2x_stack_btp.srv.BtpData_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__btp_data__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__btp_data__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__btp_data__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__btp_data__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__btp_data__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BtpData_Event(metaclass=Metaclass_BtpData_Event):
    """Message class 'BtpData_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<v2x_stack_btp/BtpData_Request, 1>',
        'response': 'sequence<v2x_stack_btp/BtpData_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['v2x_stack_btp', 'srv'], 'BtpData_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['v2x_stack_btp', 'srv'], 'BtpData_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from v2x_stack_btp.srv import BtpData_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, BtpData_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'BtpData_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from v2x_stack_btp.srv import BtpData_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, BtpData_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'BtpData_Response'"
        self._response = value


class Metaclass_BtpData(type):
    """Metaclass of service 'BtpData'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('v2x_stack_btp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2x_stack_btp.srv.BtpData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__btp_data

            from v2x_stack_btp.srv import _btp_data
            if _btp_data.Metaclass_BtpData_Request._TYPE_SUPPORT is None:
                _btp_data.Metaclass_BtpData_Request.__import_type_support__()
            if _btp_data.Metaclass_BtpData_Response._TYPE_SUPPORT is None:
                _btp_data.Metaclass_BtpData_Response.__import_type_support__()
            if _btp_data.Metaclass_BtpData_Event._TYPE_SUPPORT is None:
                _btp_data.Metaclass_BtpData_Event.__import_type_support__()


class BtpData(metaclass=Metaclass_BtpData):
    from v2x_stack_btp.srv._btp_data import BtpData_Request as Request
    from v2x_stack_btp.srv._btp_data import BtpData_Response as Response
    from v2x_stack_btp.srv._btp_data import BtpData_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
