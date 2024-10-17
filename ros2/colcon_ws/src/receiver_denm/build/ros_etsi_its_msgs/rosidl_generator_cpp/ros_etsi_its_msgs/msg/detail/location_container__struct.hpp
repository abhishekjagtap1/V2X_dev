// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/LocationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/location_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'event_speed'
#include "ros_etsi_its_msgs/msg/detail/speed__struct.hpp"
// Member 'event_position_heading'
#include "ros_etsi_its_msgs/msg/detail/heading__struct.hpp"
// Member 'traces'
#include "ros_etsi_its_msgs/msg/detail/path_history__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__LocationContainer __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__LocationContainer __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocationContainer_
{
  using Type = LocationContainer_<ContainerAllocator>;

  explicit LocationContainer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_speed(_init),
    event_position_heading(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_type = 0;
    }
  }

  explicit LocationContainer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : event_speed(_alloc, _init),
    event_position_heading(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_type = 0;
    }
  }

  // field types and members
  using _event_speed_type =
    ros_etsi_its_msgs::msg::Speed_<ContainerAllocator>;
  _event_speed_type event_speed;
  using _event_position_heading_type =
    ros_etsi_its_msgs::msg::Heading_<ContainerAllocator>;
  _event_position_heading_type event_position_heading;
  using _traces_type =
    std::vector<ros_etsi_its_msgs::msg::PathHistory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::PathHistory_<ContainerAllocator>>>;
  _traces_type traces;
  using _road_type_type =
    uint8_t;
  _road_type_type road_type;

  // setters for named parameter idiom
  Type & set__event_speed(
    const ros_etsi_its_msgs::msg::Speed_<ContainerAllocator> & _arg)
  {
    this->event_speed = _arg;
    return *this;
  }
  Type & set__event_position_heading(
    const ros_etsi_its_msgs::msg::Heading_<ContainerAllocator> & _arg)
  {
    this->event_position_heading = _arg;
    return *this;
  }
  Type & set__traces(
    const std::vector<ros_etsi_its_msgs::msg::PathHistory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::PathHistory_<ContainerAllocator>>> & _arg)
  {
    this->traces = _arg;
    return *this;
  }
  Type & set__road_type(
    const uint8_t & _arg)
  {
    this->road_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES =
    0u;
  static constexpr uint8_t ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES =
    1u;
  static constexpr uint8_t ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES =
    2u;
  static constexpr uint8_t ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES =
    3u;
  static constexpr uint8_t ROAD_TYPE_UNAVAILABLE =
    255u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__LocationContainer
    std::shared_ptr<ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__LocationContainer
    std::shared_ptr<ros_etsi_its_msgs::msg::LocationContainer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocationContainer_ & other) const
  {
    if (this->event_speed != other.event_speed) {
      return false;
    }
    if (this->event_position_heading != other.event_position_heading) {
      return false;
    }
    if (this->traces != other.traces) {
      return false;
    }
    if (this->road_type != other.road_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocationContainer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocationContainer_

// alias to use template instance with default allocator
using LocationContainer =
  ros_etsi_its_msgs::msg::LocationContainer_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LocationContainer_<ContainerAllocator>::ROAD_TYPE_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LocationContainer_<ContainerAllocator>::ROAD_TYPE_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LocationContainer_<ContainerAllocator>::ROAD_TYPE_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LocationContainer_<ContainerAllocator>::ROAD_TYPE_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LocationContainer_<ContainerAllocator>::ROAD_TYPE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_HPP_
