// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack:msg/UDPMsgType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/udp_msg_type.hpp"


#ifndef V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__STRUCT_HPP_
#define V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_stack__msg__UDPMsgType __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack__msg__UDPMsgType __declspec(deprecated)
#endif

namespace v2x_stack
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UDPMsgType_
{
  using Type = UDPMsgType_<ContainerAllocator>;

  explicit UDPMsgType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->msg_id = 0;
      this->msg_length = 0;
    }
  }

  explicit UDPMsgType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = 0;
      this->msg_id = 0;
      this->msg_length = 0;
    }
  }

  // field types and members
  using _version_type =
    uint8_t;
  _version_type version;
  using _msg_id_type =
    uint8_t;
  _msg_id_type msg_id;
  using _msg_length_type =
    uint8_t;
  _msg_length_type msg_length;

  // setters for named parameter idiom
  Type & set__version(
    const uint8_t & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__msg_id(
    const uint8_t & _arg)
  {
    this->msg_id = _arg;
    return *this;
  }
  Type & set__msg_length(
    const uint8_t & _arg)
  {
    this->msg_length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack::msg::UDPMsgType_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack::msg::UDPMsgType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack::msg::UDPMsgType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack::msg::UDPMsgType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::UDPMsgType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::UDPMsgType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::UDPMsgType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::UDPMsgType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack::msg::UDPMsgType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack::msg::UDPMsgType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack__msg__UDPMsgType
    std::shared_ptr<v2x_stack::msg::UDPMsgType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack__msg__UDPMsgType
    std::shared_ptr<v2x_stack::msg::UDPMsgType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UDPMsgType_ & other) const
  {
    if (this->version != other.version) {
      return false;
    }
    if (this->msg_id != other.msg_id) {
      return false;
    }
    if (this->msg_length != other.msg_length) {
      return false;
    }
    return true;
  }
  bool operator!=(const UDPMsgType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UDPMsgType_

// alias to use template instance with default allocator
using UDPMsgType =
  v2x_stack::msg::UDPMsgType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__STRUCT_HPP_
