// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from v2x_stack:msg/CohdaInd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/cohda_ind.hpp"


#ifndef V2X_STACK__MSG__DETAIL__COHDA_IND__STRUCT_HPP_
#define V2X_STACK__MSG__DETAIL__COHDA_IND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "v2x_stack/msg/detail/udp_msg_type__struct.hpp"
// Member 'header'
#include "v2x_stack/msg/detail/udp_data_ind_hdr__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__v2x_stack__msg__CohdaInd __attribute__((deprecated))
#else
# define DEPRECATED__v2x_stack__msg__CohdaInd __declspec(deprecated)
#endif

namespace v2x_stack
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CohdaInd_
{
  using Type = CohdaInd_<ContainerAllocator>;

  explicit CohdaInd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init),
    header(_init)
  {
    (void)_init;
  }

  explicit CohdaInd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _type_type =
    v2x_stack::msg::UDPMsgType_<ContainerAllocator>;
  _type_type type;
  using _header_type =
    v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator>;
  _header_type header;
  using _payload_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _payload_type payload;

  // setters for named parameter idiom
  Type & set__type(
    const v2x_stack::msg::UDPMsgType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__header(
    const v2x_stack::msg::UDPDataIndHdr_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__payload(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->payload = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    v2x_stack::msg::CohdaInd_<ContainerAllocator> *;
  using ConstRawPtr =
    const v2x_stack::msg::CohdaInd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<v2x_stack::msg::CohdaInd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<v2x_stack::msg::CohdaInd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::CohdaInd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::CohdaInd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      v2x_stack::msg::CohdaInd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<v2x_stack::msg::CohdaInd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<v2x_stack::msg::CohdaInd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<v2x_stack::msg::CohdaInd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__v2x_stack__msg__CohdaInd
    std::shared_ptr<v2x_stack::msg::CohdaInd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__v2x_stack__msg__CohdaInd
    std::shared_ptr<v2x_stack::msg::CohdaInd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CohdaInd_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->header != other.header) {
      return false;
    }
    if (this->payload != other.payload) {
      return false;
    }
    return true;
  }
  bool operator!=(const CohdaInd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CohdaInd_

// alias to use template instance with default allocator
using CohdaInd =
  v2x_stack::msg::CohdaInd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__COHDA_IND__STRUCT_HPP_
