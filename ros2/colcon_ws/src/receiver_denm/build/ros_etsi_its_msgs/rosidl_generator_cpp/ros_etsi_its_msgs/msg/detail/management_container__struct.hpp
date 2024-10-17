// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/management_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'action_id'
#include "ros_etsi_its_msgs/msg/detail/action_id__struct.hpp"
// Member 'event_position'
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.hpp"
// Member 'relevance_distance'
#include "ros_etsi_its_msgs/msg/detail/relevance_distance__struct.hpp"
// Member 'relevance_traffic_direction'
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__struct.hpp"
// Member 'station_type'
#include "ros_etsi_its_msgs/msg/detail/station_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__ManagementContainer __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__ManagementContainer __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManagementContainer_
{
  using Type = ManagementContainer_<ContainerAllocator>;

  explicit ManagementContainer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action_id(_init),
    event_position(_init),
    relevance_distance(_init),
    relevance_traffic_direction(_init),
    station_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detection_time = 0ull;
      this->reference_time = 0ull;
      this->termination = 0;
      this->validity_duration = 0ul;
      this->transmission_interval = 0ul;
    }
  }

  explicit ManagementContainer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action_id(_alloc, _init),
    event_position(_alloc, _init),
    relevance_distance(_alloc, _init),
    relevance_traffic_direction(_alloc, _init),
    station_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detection_time = 0ull;
      this->reference_time = 0ull;
      this->termination = 0;
      this->validity_duration = 0ul;
      this->transmission_interval = 0ul;
    }
  }

  // field types and members
  using _action_id_type =
    ros_etsi_its_msgs::msg::ActionID_<ContainerAllocator>;
  _action_id_type action_id;
  using _detection_time_type =
    uint64_t;
  _detection_time_type detection_time;
  using _reference_time_type =
    uint64_t;
  _reference_time_type reference_time;
  using _termination_type =
    uint8_t;
  _termination_type termination;
  using _event_position_type =
    ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator>;
  _event_position_type event_position;
  using _relevance_distance_type =
    ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator>;
  _relevance_distance_type relevance_distance;
  using _relevance_traffic_direction_type =
    ros_etsi_its_msgs::msg::RelevanceTrafficDirection_<ContainerAllocator>;
  _relevance_traffic_direction_type relevance_traffic_direction;
  using _validity_duration_type =
    uint32_t;
  _validity_duration_type validity_duration;
  using _transmission_interval_type =
    uint32_t;
  _transmission_interval_type transmission_interval;
  using _station_type_type =
    ros_etsi_its_msgs::msg::StationType_<ContainerAllocator>;
  _station_type_type station_type;

  // setters for named parameter idiom
  Type & set__action_id(
    const ros_etsi_its_msgs::msg::ActionID_<ContainerAllocator> & _arg)
  {
    this->action_id = _arg;
    return *this;
  }
  Type & set__detection_time(
    const uint64_t & _arg)
  {
    this->detection_time = _arg;
    return *this;
  }
  Type & set__reference_time(
    const uint64_t & _arg)
  {
    this->reference_time = _arg;
    return *this;
  }
  Type & set__termination(
    const uint8_t & _arg)
  {
    this->termination = _arg;
    return *this;
  }
  Type & set__event_position(
    const ros_etsi_its_msgs::msg::ReferencePosition_<ContainerAllocator> & _arg)
  {
    this->event_position = _arg;
    return *this;
  }
  Type & set__relevance_distance(
    const ros_etsi_its_msgs::msg::RelevanceDistance_<ContainerAllocator> & _arg)
  {
    this->relevance_distance = _arg;
    return *this;
  }
  Type & set__relevance_traffic_direction(
    const ros_etsi_its_msgs::msg::RelevanceTrafficDirection_<ContainerAllocator> & _arg)
  {
    this->relevance_traffic_direction = _arg;
    return *this;
  }
  Type & set__validity_duration(
    const uint32_t & _arg)
  {
    this->validity_duration = _arg;
    return *this;
  }
  Type & set__transmission_interval(
    const uint32_t & _arg)
  {
    this->transmission_interval = _arg;
    return *this;
  }
  Type & set__station_type(
    const ros_etsi_its_msgs::msg::StationType_<ContainerAllocator> & _arg)
  {
    this->station_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TERMINATION_CANCELLATION =
    0u;
  static constexpr uint8_t TERMINATION_NEGATION =
    1u;
  static constexpr uint8_t TERMINATION_UNAVAILABLE =
    255u;
  static constexpr uint32_t TRANSMISSION_INTERVAL_ONE_MILLISECOND =
    1u;
  static constexpr uint32_t TRANSMISSION_INTERVAL_TEN_SECONDS =
    10000u;
  static constexpr uint32_t TRANSMISSION_INTERVAL_UNAVAILABLE =
    0u;
  static constexpr uint32_t VALIDITY_DURATION_DEFAULT =
    600u;
  static constexpr uint32_t VALIDITY_DURATION_TIME_OF_DETECTION =
    0u;
  static constexpr uint32_t VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION =
    1u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ManagementContainer
    std::shared_ptr<ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ManagementContainer
    std::shared_ptr<ros_etsi_its_msgs::msg::ManagementContainer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManagementContainer_ & other) const
  {
    if (this->action_id != other.action_id) {
      return false;
    }
    if (this->detection_time != other.detection_time) {
      return false;
    }
    if (this->reference_time != other.reference_time) {
      return false;
    }
    if (this->termination != other.termination) {
      return false;
    }
    if (this->event_position != other.event_position) {
      return false;
    }
    if (this->relevance_distance != other.relevance_distance) {
      return false;
    }
    if (this->relevance_traffic_direction != other.relevance_traffic_direction) {
      return false;
    }
    if (this->validity_duration != other.validity_duration) {
      return false;
    }
    if (this->transmission_interval != other.transmission_interval) {
      return false;
    }
    if (this->station_type != other.station_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManagementContainer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManagementContainer_

// alias to use template instance with default allocator
using ManagementContainer =
  ros_etsi_its_msgs::msg::ManagementContainer_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManagementContainer_<ContainerAllocator>::TERMINATION_CANCELLATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManagementContainer_<ContainerAllocator>::TERMINATION_NEGATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ManagementContainer_<ContainerAllocator>::TERMINATION_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ManagementContainer_<ContainerAllocator>::TRANSMISSION_INTERVAL_ONE_MILLISECOND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ManagementContainer_<ContainerAllocator>::TRANSMISSION_INTERVAL_TEN_SECONDS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ManagementContainer_<ContainerAllocator>::TRANSMISSION_INTERVAL_UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ManagementContainer_<ContainerAllocator>::VALIDITY_DURATION_DEFAULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ManagementContainer_<ContainerAllocator>::VALIDITY_DURATION_TIME_OF_DETECTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t ManagementContainer_<ContainerAllocator>::VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MANAGEMENT_CONTAINER__STRUCT_HPP_
