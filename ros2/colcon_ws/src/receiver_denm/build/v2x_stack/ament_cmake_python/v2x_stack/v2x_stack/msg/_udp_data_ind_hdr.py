# generated from rosidl_generator_py/resource/_idl.py.em
# with input from v2x_stack:msg/UDPDataIndHdr.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'ssp_bits'
# Member 'cert_id'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UDPDataIndHdr(type):
    """Metaclass of message 'UDPDataIndHdr'."""

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
            module = import_type_support('v2x_stack')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'v2x_stack.msg.UDPDataIndHdr')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__udp_data_ind_hdr
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__udp_data_ind_hdr
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__udp_data_ind_hdr
            cls._TYPE_SUPPORT = module.type_support_msg__msg__udp_data_ind_hdr
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__udp_data_ind_hdr

            from v2x_stack.msg import Area
            if Area.__class__._TYPE_SUPPORT is None:
                Area.__class__.__import_type_support__()

            from v2x_stack.msg import Location
            if Location.__class__._TYPE_SUPPORT is None:
                Location.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UDPDataIndHdr(metaclass=Metaclass_UDPDataIndHdr):
    """Message class 'UDPDataIndHdr'."""

    __slots__ = [
        '_btp_type',
        '_pkt_transport',
        '_traffic_class',
        '_max_pkt_life_time',
        '_dest_port',
        '_src_port',
        '_dest_info',
        '_location',
        '_area',
        '_sec_profile',
        '_parser_result',
        '_verification_result',
        '_ssp_len',
        '_aid',
        '_ssp_bits',
        '_cert_id',
        '_length',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'btp_type': 'uint8',
        'pkt_transport': 'uint8',
        'traffic_class': 'uint8',
        'max_pkt_life_time': 'uint8',
        'dest_port': 'uint16',
        'src_port': 'uint16',
        'dest_info': 'uint16',
        'location': 'v2x_stack/Location',
        'area': 'v2x_stack/Area',
        'sec_profile': 'uint8',
        'parser_result': 'uint8',
        'verification_result': 'uint8',
        'ssp_len': 'uint8',
        'aid': 'uint32',
        'ssp_bits': 'uint8[32]',
        'cert_id': 'uint8[32]',
        'length': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_stack', 'msg'], 'Location'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['v2x_stack', 'msg'], 'Area'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 32),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.pkt_transport = kwargs.get('pkt_transport', int())
        self.traffic_class = kwargs.get('traffic_class', int())
        self.max_pkt_life_time = kwargs.get('max_pkt_life_time', int())
        self.dest_port = kwargs.get('dest_port', int())
        self.src_port = kwargs.get('src_port', int())
        self.dest_info = kwargs.get('dest_info', int())
        from v2x_stack.msg import Location
        self.location = kwargs.get('location', Location())
        from v2x_stack.msg import Area
        self.area = kwargs.get('area', Area())
        self.sec_profile = kwargs.get('sec_profile', int())
        self.parser_result = kwargs.get('parser_result', int())
        self.verification_result = kwargs.get('verification_result', int())
        self.ssp_len = kwargs.get('ssp_len', int())
        self.aid = kwargs.get('aid', int())
        if 'ssp_bits' not in kwargs:
            self.ssp_bits = numpy.zeros(32, dtype=numpy.uint8)
        else:
            self.ssp_bits = numpy.array(kwargs.get('ssp_bits'), dtype=numpy.uint8)
            assert self.ssp_bits.shape == (32, )
        if 'cert_id' not in kwargs:
            self.cert_id = numpy.zeros(32, dtype=numpy.uint8)
        else:
            self.cert_id = numpy.array(kwargs.get('cert_id'), dtype=numpy.uint8)
            assert self.cert_id.shape == (32, )
        self.length = kwargs.get('length', int())

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
        if self.pkt_transport != other.pkt_transport:
            return False
        if self.traffic_class != other.traffic_class:
            return False
        if self.max_pkt_life_time != other.max_pkt_life_time:
            return False
        if self.dest_port != other.dest_port:
            return False
        if self.src_port != other.src_port:
            return False
        if self.dest_info != other.dest_info:
            return False
        if self.location != other.location:
            return False
        if self.area != other.area:
            return False
        if self.sec_profile != other.sec_profile:
            return False
        if self.parser_result != other.parser_result:
            return False
        if self.verification_result != other.verification_result:
            return False
        if self.ssp_len != other.ssp_len:
            return False
        if self.aid != other.aid:
            return False
        if all(self.ssp_bits != other.ssp_bits):
            return False
        if all(self.cert_id != other.cert_id):
            return False
        if self.length != other.length:
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
    def pkt_transport(self):
        """Message field 'pkt_transport'."""
        return self._pkt_transport

    @pkt_transport.setter
    def pkt_transport(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'pkt_transport' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pkt_transport' field must be an unsigned integer in [0, 255]"
        self._pkt_transport = value

    @builtins.property
    def traffic_class(self):
        """Message field 'traffic_class'."""
        return self._traffic_class

    @traffic_class.setter
    def traffic_class(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'traffic_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'traffic_class' field must be an unsigned integer in [0, 255]"
        self._traffic_class = value

    @builtins.property
    def max_pkt_life_time(self):
        """Message field 'max_pkt_life_time'."""
        return self._max_pkt_life_time

    @max_pkt_life_time.setter
    def max_pkt_life_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'max_pkt_life_time' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'max_pkt_life_time' field must be an unsigned integer in [0, 255]"
        self._max_pkt_life_time = value

    @builtins.property
    def dest_port(self):
        """Message field 'dest_port'."""
        return self._dest_port

    @dest_port.setter
    def dest_port(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dest_port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'dest_port' field must be an unsigned integer in [0, 65535]"
        self._dest_port = value

    @builtins.property
    def src_port(self):
        """Message field 'src_port'."""
        return self._src_port

    @src_port.setter
    def src_port(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'src_port' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'src_port' field must be an unsigned integer in [0, 65535]"
        self._src_port = value

    @builtins.property
    def dest_info(self):
        """Message field 'dest_info'."""
        return self._dest_info

    @dest_info.setter
    def dest_info(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'dest_info' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'dest_info' field must be an unsigned integer in [0, 65535]"
        self._dest_info = value

    @builtins.property
    def location(self):
        """Message field 'location'."""
        return self._location

    @location.setter
    def location(self, value):
        if self._check_fields:
            from v2x_stack.msg import Location
            assert \
                isinstance(value, Location), \
                "The 'location' field must be a sub message of type 'Location'"
        self._location = value

    @builtins.property
    def area(self):
        """Message field 'area'."""
        return self._area

    @area.setter
    def area(self, value):
        if self._check_fields:
            from v2x_stack.msg import Area
            assert \
                isinstance(value, Area), \
                "The 'area' field must be a sub message of type 'Area'"
        self._area = value

    @builtins.property
    def sec_profile(self):
        """Message field 'sec_profile'."""
        return self._sec_profile

    @sec_profile.setter
    def sec_profile(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sec_profile' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sec_profile' field must be an unsigned integer in [0, 255]"
        self._sec_profile = value

    @builtins.property
    def parser_result(self):
        """Message field 'parser_result'."""
        return self._parser_result

    @parser_result.setter
    def parser_result(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'parser_result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'parser_result' field must be an unsigned integer in [0, 255]"
        self._parser_result = value

    @builtins.property
    def verification_result(self):
        """Message field 'verification_result'."""
        return self._verification_result

    @verification_result.setter
    def verification_result(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'verification_result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'verification_result' field must be an unsigned integer in [0, 255]"
        self._verification_result = value

    @builtins.property
    def ssp_len(self):
        """Message field 'ssp_len'."""
        return self._ssp_len

    @ssp_len.setter
    def ssp_len(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ssp_len' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ssp_len' field must be an unsigned integer in [0, 255]"
        self._ssp_len = value

    @builtins.property
    def aid(self):
        """Message field 'aid'."""
        return self._aid

    @aid.setter
    def aid(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'aid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aid' field must be an unsigned integer in [0, 4294967295]"
        self._aid = value

    @builtins.property
    def ssp_bits(self):
        """Message field 'ssp_bits'."""
        return self._ssp_bits

    @ssp_bits.setter
    def ssp_bits(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'ssp_bits' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 32, \
                    "The 'ssp_bits' numpy.ndarray() must have a size of 32"
                self._ssp_bits = value
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
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'ssp_bits' field must be a set or sequence with length 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._ssp_bits = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def cert_id(self):
        """Message field 'cert_id'."""
        return self._cert_id

    @cert_id.setter
    def cert_id(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.uint8, \
                    "The 'cert_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
                assert value.size == 32, \
                    "The 'cert_id' numpy.ndarray() must have a size of 32"
                self._cert_id = value
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
                 len(value) == 32 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'cert_id' field must be a set or sequence with length 32 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._cert_id = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'length' field must be an unsigned integer in [0, 65535]"
        self._length = value
