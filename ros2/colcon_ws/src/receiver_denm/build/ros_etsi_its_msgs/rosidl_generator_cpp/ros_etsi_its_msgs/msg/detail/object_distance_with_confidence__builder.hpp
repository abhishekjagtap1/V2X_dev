// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/ObjectDistanceWithConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_distance_with_confidence.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectDistanceWithConfidence_confidence
{
public:
  explicit Init_ObjectDistanceWithConfidence_confidence(::ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence confidence(::ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence msg_;
};

class Init_ObjectDistanceWithConfidence_value
{
public:
  Init_ObjectDistanceWithConfidence_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectDistanceWithConfidence_confidence value(::ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_ObjectDistanceWithConfidence_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::ObjectDistanceWithConfidence>()
{
  return ros_etsi_its_msgs::msg::builder::Init_ObjectDistanceWithConfidence_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__BUILDER_HPP_
