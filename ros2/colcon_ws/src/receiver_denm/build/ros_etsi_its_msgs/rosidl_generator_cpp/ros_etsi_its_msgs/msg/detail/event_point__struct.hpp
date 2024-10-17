// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/EventPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/event_point.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'event_position'
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__struct.hpp"
// Member 'event_delta_time'
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__struct.hpp"
// Member 'information_quality'
#include "ros_etsi_its_msgs/msg/detail/information_quality__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__EventPoint __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__EventPoint __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventPoint_
{
  using Type = EventPoint_<ContainerAllocator>;

  explicit EventPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_position(_init),
    event_delta_time(_init),
    information_quality(_init)
  {
    (void)_init;
  }

  explicit EventPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_position(_alloc, _init),
    event_delta_time(_alloc, _init),
    information_quality(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _event_position_type =
    ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator>;
  _event_position_type event_position;
  using _event_delta_time_type =
    ros_etsi_its_msgs::msg::PathDeltaTime_<ContainerAllocator>;
  _event_delta_time_type event_delta_time;
  using _information_quality_type =
    ros_etsi_its_msgs::msg::InformationQuality_<ContainerAllocator>;
  _information_quality_type information_quality;

  // setters for named parameter idiom
  Type & set__event_position(
    const ros_etsi_its_msgs::msg::DeltaReferencePosition_<ContainerAllocator> & _arg)
  {
    this->event_position = _arg;
    return *this;
  }
  Type & set__event_delta_time(
    const ros_etsi_its_msgs::msg::PathDeltaTime_<ContainerAllocator> & _arg)
  {
    this->event_delta_time = _arg;
    return *this;
  }
  Type & set__information_quality(
    const ros_etsi_its_msgs::msg::InformationQuality_<ContainerAllocator> & _arg)
  {
    this->information_quality = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__EventPoint
    std::shared_ptr<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__EventPoint
    std::shared_ptr<ros_etsi_its_msgs::msg::EventPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventPoint_ & other) const
  {
    if (this->event_position != other.event_position) {
      return false;
    }
    if (this->event_delta_time != other.event_delta_time) {
      return false;
    }
    if (this->information_quality != other.information_quality) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventPoint_

// alias to use template instance with default allocator
using EventPoint =
  ros_etsi_its_msgs::msg::EventPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__EVENT_POINT__STRUCT_HPP_
