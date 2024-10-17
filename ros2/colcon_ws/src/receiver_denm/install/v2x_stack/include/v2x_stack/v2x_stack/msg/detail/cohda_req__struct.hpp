// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack:msg/CohdaReq.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/cohda_req.hpp"


#ifndef V2X_STACK__MSG__DETAIL__COHDA_REQ__STRUCT_HPP_
#define V2X_STACK__MSG__DETAIL__COHDA_REQ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__v2x_stack__msg__CohdaReq __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack__msg__CohdaReq __declspec(deprecated)
#endif

namespace v2x_stack
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CohdaReq_
{
  using Type = CohdaReq_<ContainerAllocator>;

  explicit CohdaReq_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CohdaReq_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack::msg::CohdaReq_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack::msg::CohdaReq_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack::msg::CohdaReq_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack::msg::CohdaReq_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::CohdaReq_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::CohdaReq_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::CohdaReq_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::CohdaReq_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack::msg::CohdaReq_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack::msg::CohdaReq_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack__msg__CohdaReq
    std::shared_ptr<v2x_stack::msg::CohdaReq_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack__msg__CohdaReq
    std::shared_ptr<v2x_stack::msg::CohdaReq_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CohdaReq_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CohdaReq_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CohdaReq_

// alias to use template instance with default allocator
using CohdaReq =
  v2x_stack::msg::CohdaReq_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__COHDA_REQ__STRUCT_HPP_
