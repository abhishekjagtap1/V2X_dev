// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/ItsPduHeader.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/its_pdu_header.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__ItsPduHeader __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__ItsPduHeader __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ItsPduHeader_
{
  using Type = ItsPduHeader_<ContainerAllocator>;

  explicit ItsPduHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->protocol_version = 0;
      this->message_id = 0;
      this->station_id = 0ul;
    }
  }

  explicit ItsPduHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->protocol_version = 0;
      this->message_id = 0;
      this->station_id = 0ul;
    }
  }

  // field types and members
  using _protocol_version_type =
    uint8_t;
  _protocol_version_type protocol_version;
  using _message_id_type =
    uint8_t;
  _message_id_type message_id;
  using _station_id_type =
    uint32_t;
  _station_id_type station_id;

  // setters for named parameter idiom
  Type & set__protocol_version(
    const uint8_t & _arg)
  {
    this->protocol_version = _arg;
    return *this;
  }
  Type & set__message_id(
    const uint8_t & _arg)
  {
    this->message_id = _arg;
    return *this;
  }
  Type & set__station_id(
    const uint32_t & _arg)
  {
    this->station_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MESSAGE_ID_DENM =
    1u;
  static constexpr uint8_t MESSAGE_ID_CAM =
    2u;
  static constexpr uint8_t MESSAGE_ID_CPM =
    3u;

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ItsPduHeader
    std::shared_ptr<ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ItsPduHeader
    std::shared_ptr<ros_etsi_its_msgs::msg::ItsPduHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ItsPduHeader_ & other) const
  {
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->message_id != other.message_id) {
      return false;
    }
    if (this->station_id != other.station_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ItsPduHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ItsPduHeader_

// alias to use template instance with default allocator
using ItsPduHeader =
  ros_etsi_its_msgs::msg::ItsPduHeader_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ItsPduHeader_<ContainerAllocator>::MESSAGE_ID_DENM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ItsPduHeader_<ContainerAllocator>::MESSAGE_ID_CAM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ItsPduHeader_<ContainerAllocator>::MESSAGE_ID_CPM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ITS_PDU_HEADER__STRUCT_HPP_
