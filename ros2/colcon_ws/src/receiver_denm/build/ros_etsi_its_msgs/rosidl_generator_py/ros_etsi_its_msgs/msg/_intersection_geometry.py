# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros_etsi_its_msgs:msg/IntersectionGeometry.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IntersectionGeometry(type):
    """Metaclass of message 'IntersectionGeometry'."""

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
                'ros_etsi_its_msgs.msg.IntersectionGeometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__intersection_geometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__intersection_geometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__intersection_geometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__intersection_geometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__intersection_geometry

            from ros_etsi_its_msgs.msg import GenericLane
            if GenericLane.__class__._TYPE_SUPPORT is None:
                GenericLane.__class__.__import_type_support__()

            from ros_etsi_its_msgs.msg import ReferencePosition
            if ReferencePosition.__class__._TYPE_SUPPORT is None:
                ReferencePosition.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IntersectionGeometry(metaclass=Metaclass_IntersectionGeometry):
    """Message class 'IntersectionGeometry'."""

    __slots__ = [
        '_name',
        '_id',
        '_revision',
        '_ref_point',
        '_lane_width',
        '_lane_set',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'id': 'uint16',
        'revision': 'uint8',
        'ref_point': 'ros_etsi_its_msgs/ReferencePosition',
        'lane_width': 'uint16',
        'lane_set': 'sequence<ros_etsi_its_msgs/GenericLane>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'ReferencePosition'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['ros_etsi_its_msgs', 'msg'], 'GenericLane')),  # noqa: E501
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
        self.name = kwargs.get('name', str())
        self.id = kwargs.get('id', int())
        self.revision = kwargs.get('revision', int())
        from ros_etsi_its_msgs.msg import ReferencePosition
        self.ref_point = kwargs.get('ref_point', ReferencePosition())
        self.lane_width = kwargs.get('lane_width', int())
        self.lane_set = kwargs.get('lane_set', [])

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
        if self.name != other.name:
            return False
        if self.id != other.id:
            return False
        if self.revision != other.revision:
            return False
        if self.ref_point != other.ref_point:
            return False
        if self.lane_width != other.lane_width:
            return False
        if self.lane_set != other.lane_set:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'id' field must be an unsigned integer in [0, 65535]"
        self._id = value

    @builtins.property
    def revision(self):
        """Message field 'revision'."""
        return self._revision

    @revision.setter
    def revision(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'revision' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'revision' field must be an unsigned integer in [0, 255]"
        self._revision = value

    @builtins.property
    def ref_point(self):
        """Message field 'ref_point'."""
        return self._ref_point

    @ref_point.setter
    def ref_point(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import ReferencePosition
            assert \
                isinstance(value, ReferencePosition), \
                "The 'ref_point' field must be a sub message of type 'ReferencePosition'"
        self._ref_point = value

    @builtins.property
    def lane_width(self):
        """Message field 'lane_width'."""
        return self._lane_width

    @lane_width.setter
    def lane_width(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'lane_width' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lane_width' field must be an unsigned integer in [0, 65535]"
        self._lane_width = value

    @builtins.property
    def lane_set(self):
        """Message field 'lane_set'."""
        return self._lane_set

    @lane_set.setter
    def lane_set(self, value):
        if self._check_fields:
            from ros_etsi_its_msgs.msg import GenericLane
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
                 all(isinstance(v, GenericLane) for v in value) and
                 True), \
                "The 'lane_set' field must be a set or sequence and each value of type 'GenericLane'"
        self._lane_set = value
