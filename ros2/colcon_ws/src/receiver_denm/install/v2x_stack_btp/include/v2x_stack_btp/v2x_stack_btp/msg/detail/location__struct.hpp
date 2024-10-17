// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack_btp:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/location.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__LOCATION__STRUCT_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__LOCATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_stack_btp__msg__Location __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack_btp__msg__Location __declspec(deprecated)
#endif

namespace v2x_stack_btp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Location_
{
  using Type = Location_<ContainerAllocator>;

  explicit Location_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->destination = 0ull;
      this->lat = 0l;
      this->lon = 0l;
    }
  }

  explicit Location_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->destination = 0ull;
      this->lat = 0l;
      this->lon = 0l;
    }
  }

  // field types and members
  using _destination_type =
    uint64_t;
  _destination_type destination;
  using _lat_type =
    int32_t;
  _lat_type lat;
  using _lon_type =
    int32_t;
  _lon_type lon;

  // setters for named parameter idiom
  Type & set__destination(
    const uint64_t & _arg)
  {
    this->destination = _arg;
    return *this;
  }
  Type & set__lat(
    const int32_t & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const int32_t & _arg)
  {
    this->lon = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack_btp::msg::Location_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack_btp::msg::Location_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack_btp::msg::Location_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack_btp::msg::Location_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::msg::Location_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::msg::Location_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack_btp::msg::Location_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack_btp::msg::Location_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack_btp::msg::Location_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack_btp::msg::Location_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack_btp__msg__Location
    std::shared_ptr<v2x_stack_btp::msg::Location_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack_btp__msg__Location
    std::shared_ptr<v2x_stack_btp::msg::Location_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Location_ & other) const
  {
    if (this->destination != other.destination) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    return true;
  }
  bool operator!=(const Location_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Location_

// alias to use template instance with default allocator
using Location =
  v2x_stack_btp::msg::Location_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__LOCATION__STRUCT_HPP_
