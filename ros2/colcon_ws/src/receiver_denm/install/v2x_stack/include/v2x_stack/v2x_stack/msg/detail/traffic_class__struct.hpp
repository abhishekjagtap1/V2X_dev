// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack:msg/TrafficClass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/traffic_class.hpp"


#ifndef V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__STRUCT_HPP_
#define V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_stack__msg__TrafficClass __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack__msg__TrafficClass __declspec(deprecated)
#endif

namespace v2x_stack
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficClass_
{
  using Type = TrafficClass_<ContainerAllocator>;

  explicit TrafficClass_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->store_carry_forwarding = false;
      this->channel_offloading = false;
      this->id = 0;
    }
  }

  explicit TrafficClass_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->store_carry_forwarding = false;
      this->channel_offloading = false;
      this->id = 0;
    }
  }

  // field types and members
  using _store_carry_forwarding_type =
    bool;
  _store_carry_forwarding_type store_carry_forwarding;
  using _channel_offloading_type =
    bool;
  _channel_offloading_type channel_offloading;
  using _id_type =
    uint8_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__store_carry_forwarding(
    const bool & _arg)
  {
    this->store_carry_forwarding = _arg;
    return *this;
  }
  Type & set__channel_offloading(
    const bool & _arg)
  {
    this->channel_offloading = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ID_DCC_DP0 =
    0u;
  static constexpr uint8_t ID_DCC_DP1 =
    1u;
  static constexpr uint8_t ID_DCC_DP2 =
    2u;
  static constexpr uint8_t ID_DCC_DP3 =
    3u;

  // pointer types
  using RawPtr =
    v2x_stack::msg::TrafficClass_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack::msg::TrafficClass_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack::msg::TrafficClass_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack::msg::TrafficClass_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::TrafficClass_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::TrafficClass_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::TrafficClass_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::TrafficClass_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack::msg::TrafficClass_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack::msg::TrafficClass_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack__msg__TrafficClass
    std::shared_ptr<v2x_stack::msg::TrafficClass_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack__msg__TrafficClass
    std::shared_ptr<v2x_stack::msg::TrafficClass_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficClass_ & other) const
  {
    if (this->store_carry_forwarding != other.store_carry_forwarding) {
      return false;
    }
    if (this->channel_offloading != other.channel_offloading) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficClass_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficClass_

// alias to use template instance with default allocator
using TrafficClass =
  v2x_stack::msg::TrafficClass_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficClass_<ContainerAllocator>::ID_DCC_DP0;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficClass_<ContainerAllocator>::ID_DCC_DP1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficClass_<ContainerAllocator>::ID_DCC_DP2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrafficClass_<ContainerAllocator>::ID_DCC_DP3;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__STRUCT_HPP_
