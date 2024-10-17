// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/ObjectDimension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_dimension.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DIMENSION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DIMENSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/object_dimension__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectDimension_confidence
{
public:
  explicit Init_ObjectDimension_confidence(::ros_etsi_its_msgs::msg::ObjectDimension & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::ObjectDimension confidence(::ros_etsi_its_msgs::msg::ObjectDimension::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ObjectDimension msg_;
};

class Init_ObjectDimension_value
{
public:
  Init_ObjectDimension_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDimension_confidence value(::ros_etsi_its_msgs::msg::ObjectDimension::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_ObjectDimension_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ObjectDimension msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::ObjectDimension>()
{
  return ros_etsi_its_msgs::msg::builder::Init_ObjectDimension_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DIMENSION__BUILDER_HPP_
