// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/PositionConfidenceEllipse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/position_confidence_ellipse.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionConfidenceEllipse_semi_major_orientation
{
public:
  explicit Init_PositionConfidenceEllipse_semi_major_orientation(::ros_etsi_its_msgs::msg::PositionConfidenceEllipse & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::PositionConfidenceEllipse semi_major_orientation(::ros_etsi_its_msgs::msg::PositionConfidenceEllipse::_semi_major_orientation_type arg)
  {
    msg_.semi_major_orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PositionConfidenceEllipse msg_;
};

class Init_PositionConfidenceEllipse_semi_minor_confidence
{
public:
  explicit Init_PositionConfidenceEllipse_semi_minor_confidence(::ros_etsi_its_msgs::msg::PositionConfidenceEllipse & msg)
  : msg_(msg)
  {}
  Init_PositionConfidenceEllipse_semi_major_orientation semi_minor_confidence(::ros_etsi_its_msgs::msg::PositionConfidenceEllipse::_semi_minor_confidence_type arg)
  {
    msg_.semi_minor_confidence = std::move(arg);
    return Init_PositionConfidenceEllipse_semi_major_orientation(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PositionConfidenceEllipse msg_;
};

class Init_PositionConfidenceEllipse_semi_major_confidence
{
public:
  Init_PositionConfidenceEllipse_semi_major_confidence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionConfidenceEllipse_semi_minor_confidence semi_major_confidence(::ros_etsi_its_msgs::msg::PositionConfidenceEllipse::_semi_major_confidence_type arg)
  {
    msg_.semi_major_confidence = std::move(arg);
    return Init_PositionConfidenceEllipse_semi_minor_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PositionConfidenceEllipse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::PositionConfidenceEllipse>()
{
  return ros_etsi_its_msgs::msg::builder::Init_PositionConfidenceEllipse_semi_major_confidence();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__BUILDER_HPP_
