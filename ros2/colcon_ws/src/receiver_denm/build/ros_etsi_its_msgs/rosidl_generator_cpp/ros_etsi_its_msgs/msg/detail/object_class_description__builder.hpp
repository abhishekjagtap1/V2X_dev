// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/ObjectClassDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_class_description.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/object_class_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectClassDescription_type
{
public:
  Init_ObjectClassDescription_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_etsi_its_msgs::msg::ObjectClassDescription type(::ros_etsi_its_msgs::msg::ObjectClassDescription::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ObjectClassDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::ObjectClassDescription>()
{
  return ros_etsi_its_msgs::msg::builder::Init_ObjectClassDescription_type();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__BUILDER_HPP_
