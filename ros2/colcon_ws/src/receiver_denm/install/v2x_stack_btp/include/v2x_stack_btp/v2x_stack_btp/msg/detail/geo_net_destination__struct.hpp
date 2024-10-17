// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack_btp:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/geo_net_destination.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__STRUCT_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'area'
#include "v2x_stack_btp/msg/detail/geo_net_area__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_stack_btp__msg__GeoNetDestination __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack_btp__msg__GeoNetDestination __declspec(deprecated)
#endif

namespace v2x_stack_btp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeoNetDestination_
{
  using Type = GeoNetDestination_<ContainerAllocator>;

  explicit GeoNetDestination_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : area(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->address.begin(), this->address.end(), 0);
    }
  }

  explicit GeoNetDestination_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : address(_alloc),
    area(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->address.begin(), this->address.end(), 0);
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _address_type =
    std::array<uint8_t, 8>;
  _address_type address;
  using _area_type =
    v2x_stack_btp::msg::GeoNetArea_<ContainerAllocator>;
  _area_type area;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__address(
    const std::array<uint8_t, 8> & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__area(
    const v2x_stack_btp::msg::GeoNetArea_<ContainerAllocator> & _arg)
  {
    this->area = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_NONE =
    0u;
  static constexpr uint8_t TYPE_ADDRESS =
    1u;
  static constexpr uint8_t TYPE_AREA =
    2u;

  // pointer types
  using RawPtr =
    v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack_btp__msg__GeoNetDestination
    std::shared_ptr<v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack_btp__msg__GeoNetDestination
    std::shared_ptr<v2x_stack_btp::msg::GeoNetDestination_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeoNetDestination_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->address != other.address) {
      return false;
    }
    if (this->area != other.area) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeoNetDestination_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeoNetDestination_

// alias to use template instance with default allocator
using GeoNetDestination =
  v2x_stack_btp::msg::GeoNetDestination_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeoNetDestination_<ContainerAllocator>::TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeoNetDestination_<ContainerAllocator>::TYPE_ADDRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GeoNetDestination_<ContainerAllocator>::TYPE_AREA;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__STRUCT_HPP_
