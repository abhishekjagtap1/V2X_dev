// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/movement_event.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__MovementEvent __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__MovementEvent __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementEvent_
{
  using Type = MovementEvent_<ContainerAllocator>;

  explicit MovementEvent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_state = "";
      this->min_end_time = 0;
    }
  }

  explicit MovementEvent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->event_state = "";
      this->min_end_time = 0;
    }
  }

  // field types and members
  using _event_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _event_state_type event_state;
  using _min_end_time_type =
    uint16_t;
  _min_end_time_type min_end_time;

  // setters for named parameter idiom
  Type & set__event_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->event_state = _arg;
    return *this;
  }
  Type & set__min_end_time(
    const uint16_t & _arg)
  {
    this->min_end_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__MovementEvent
    std::shared_ptr<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__MovementEvent
    std::shared_ptr<ros_etsi_its_msgs::msg::MovementEvent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementEvent_ & other) const
  {
    if (this->event_state != other.event_state) {
      return false;
    }
    if (this->min_end_time != other.min_end_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementEvent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementEvent_

// alias to use template instance with default allocator
using MovementEvent =
  ros_etsi_its_msgs::msg::MovementEvent_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_EVENT__STRUCT_HPP_
