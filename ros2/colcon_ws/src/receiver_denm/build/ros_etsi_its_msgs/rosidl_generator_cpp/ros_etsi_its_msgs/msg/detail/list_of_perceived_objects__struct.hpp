// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_etsi_its_msgs:msg/ListOfPerceivedObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/list_of_perceived_objects.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__STRUCT_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'perceived_object_container'
#include "ros_etsi_its_msgs/msg/detail/perceived_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_etsi_its_msgs__msg__ListOfPerceivedObjects __attribute__((deprecated))
#else
# define DEPRECATED__ros_etsi_its_msgs__msg__ListOfPerceivedObjects __declspec(deprecated)
#endif

namespace ros_etsi_its_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ListOfPerceivedObjects_
{
  using Type = ListOfPerceivedObjects_<ContainerAllocator>;

  explicit ListOfPerceivedObjects_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListOfPerceivedObjects_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _perceived_object_container_type =
    std::vector<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>>>;
  _perceived_object_container_type perceived_object_container;

  // setters for named parameter idiom
  Type & set__perceived_object_container(
    const std::vector<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_etsi_its_msgs::msg::PerceivedObject_<ContainerAllocator>>> & _arg)
  {
    this->perceived_object_container = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ListOfPerceivedObjects
    std::shared_ptr<ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_etsi_its_msgs__msg__ListOfPerceivedObjects
    std::shared_ptr<ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListOfPerceivedObjects_ & other) const
  {
    if (this->perceived_object_container != other.perceived_object_container) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListOfPerceivedObjects_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListOfPerceivedObjects_

// alias to use template instance with default allocator
using ListOfPerceivedObjects =
  ros_etsi_its_msgs::msg::ListOfPerceivedObjects_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__STRUCT_HPP_
