# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/GenericLane.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GenericLane(type):
    """Metaclass of message 'GenericLane'."""

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
                'ros_etsi_its_msgs.msg.GenericLane')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__generic_lane
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__generic_lane
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__generic_lane
            cls._TYPE_SUPPORT = module.type_support_msg__msg__generic_lane
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__generic_lane

            from ros_etsi_its_msgs.msg import Connection
            if Connection.__class__._TYPE_SUPPORT is None:
                Connection.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import NodeSetXY
            if NodeSetXY.__class__._TYPE_SUPPORT is None:
                NodeSetXY.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GenericLane(metaclass=Metaclass_GenericLane):
    """Message class 'GenericLane'."""

    __slots__ = [
        '_lane_id',
        '_name',
        '_ingress_approach',
        '_egress_approach',
        '_lane_direction',
        '_node_list',
        '_connects_to',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'lane_id': 'uint8',
        'name': 'string',
        'ingress_approach': 'uint8',
        'egress_approach': 'uint8',
        'lane_direction': 'uint8',
        'node_list': 'sequence<ros_etsi_its_msgs/NodeSetXY>',
        'connects_to': 'sequence<ros_etsi_its_msgs/Connection>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'NodeSetXY')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'Connection')),  # noqa: E501
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
        self.lane_id = kwargs.get('lane_id', int())
        self.name = kwargs.get('name', str())
        self.ingress_approach = kwargs.get('ingress_approach', int())
        self.egress_approach = kwargs.get('egress_approach', int())
        self.lane_direction = kwargs.get('lane_direction', int())
        self.node_list = kwargs.get('node_list', [])
        self.connects_to = kwargs.get('connects_to', [])

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
        if self.lane_id != other.lane_id:
            return False
        if self.name != other.name:
            return False
        if self.ingress_approach != other.ingress_approach:
            return False
        if self.egress_approach != other.egress_approach:
            return False
        if self.lane_direction != other.lane_direction:
            return False
        if self.node_list != other.node_list:
            return False
        if self.connects_to != other.connects_to:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_id(self):
        """Message field 'lane_id'."""
        return self._lane_id

    @lane_id.setter
    def lane_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'lane_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_id' field must be an unsigned integer in [0, 255]"
        self._lane_id = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def ingress_approach(self):
        """Message field 'ingress_approach'."""
        return self._ingress_approach

    @ingress_approach.setter
    def ingress_approach(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ingress_approach' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ingress_approach' field must be an unsigned integer in [0, 255]"
        self._ingress_approach = value

    @builtins.property
    def egress_approach(self):
        """Message field 'egress_approach'."""
        return self._egress_approach

    @egress_approach.setter
    def egress_approach(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'egress_approach' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'egress_approach' field must be an unsigned integer in [0, 255]"
        self._egress_approach = value

    @builtins.property
    def lane_direction(self):
        """Message field 'lane_direction'."""
        return self._lane_direction

    @lane_direction.setter
    def lane_direction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'lane_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_direction' field must be an unsigned integer in [0, 255]"
        self._lane_direction = value

    @builtins.property
    def node_list(self):
        """Message field 'node_list'."""
        return self._node_list

    @node_list.setter
    def node_list(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import NodeSetXY
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
                 all(isinstance(v, NodeSetXY) for v in value) and
                 True), \
                "The 'node_list' field must be a set or sequence and each value of type 'NodeSetXY'"
        self._node_list = value

    @builtins.property
    def connects_to(self):
        """Message field 'connects_to'."""
        return self._connects_to

    @connects_to.setter
    def connects_to(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import Connection
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
                 all(isinstance(v, Connection) for v in value) and
                 True), \
                "The 'connects_to' field must be a set or sequence and each value of type 'Connection'"
        self._connects_to = value
