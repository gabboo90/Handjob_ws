# generated from rosidl_generator_py/resource/_idl.py.em
# with input from leap_node:msg/HandData.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HandData(type):
    """Metaclass of message 'HandData'."""

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
            module = import_type_support('leap_node')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'leap_node.msg.HandData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hand_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hand_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hand_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hand_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hand_data

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from leap_node.msg import FingerData
            if FingerData.__class__._TYPE_SUPPORT is None:
                FingerData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HandData(metaclass=Metaclass_HandData):
    """Message class 'HandData'."""

    __slots__ = [
        '_timestamp',
        '_hand_id',
        '_is_right',
        '_palm_position',
        '_normal',
        '_direction',
        '_fingers',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'hand_id': 'int32',
        'is_right': 'boolean',
        'palm_position': 'geometry_msgs/Point',
        'normal': 'geometry_msgs/Vector3',
        'direction': 'geometry_msgs/Vector3',
        'fingers': 'sequence<leap_node/FingerData>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['leap_node', 'msg'], 'FingerData')),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.hand_id = kwargs.get('hand_id', int())
        self.is_right = kwargs.get('is_right', bool())
        from geometry_msgs.msg import Point
        self.palm_position = kwargs.get('palm_position', Point())
        from geometry_msgs.msg import Vector3
        self.normal = kwargs.get('normal', Vector3())
        from geometry_msgs.msg import Vector3
        self.direction = kwargs.get('direction', Vector3())
        self.fingers = kwargs.get('fingers', [])

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
        if self.timestamp != other.timestamp:
            return False
        if self.hand_id != other.hand_id:
            return False
        if self.is_right != other.is_right:
            return False
        if self.palm_position != other.palm_position:
            return False
        if self.normal != other.normal:
            return False
        if self.direction != other.direction:
            return False
        if self.fingers != other.fingers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @builtins.property
    def hand_id(self):
        """Message field 'hand_id'."""
        return self._hand_id

    @hand_id.setter
    def hand_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hand_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hand_id' field must be an integer in [-2147483648, 2147483647]"
        self._hand_id = value

    @builtins.property
    def is_right(self):
        """Message field 'is_right'."""
        return self._is_right

    @is_right.setter
    def is_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_right' field must be of type 'bool'"
        self._is_right = value

    @builtins.property
    def palm_position(self):
        """Message field 'palm_position'."""
        return self._palm_position

    @palm_position.setter
    def palm_position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'palm_position' field must be a sub message of type 'Point'"
        self._palm_position = value

    @builtins.property
    def normal(self):
        """Message field 'normal'."""
        return self._normal

    @normal.setter
    def normal(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'normal' field must be a sub message of type 'Vector3'"
        self._normal = value

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'direction' field must be a sub message of type 'Vector3'"
        self._direction = value

    @builtins.property
    def fingers(self):
        """Message field 'fingers'."""
        return self._fingers

    @fingers.setter
    def fingers(self, value):
        if self._check_fields:
            from leap_node.msg import FingerData
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
                 all(isinstance(v, FingerData) for v in value) and
                 True), \
                "The 'fingers' field must be a set or sequence and each value of type 'FingerData'"
        self._fingers = value
