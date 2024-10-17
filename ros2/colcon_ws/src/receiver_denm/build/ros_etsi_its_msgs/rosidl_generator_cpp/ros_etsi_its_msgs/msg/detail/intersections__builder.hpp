// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/Intersections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersections.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/intersections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_Intersections_intersects
{
public:
  Init_Intersections_intersects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_etsi_its_msgs::msg::Intersections intersects(::ros_etsi_its_msgs::msg::Intersections::_intersects_type arg)
  {
    msg_.intersects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Intersections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::Intersections>()
{
  return ros_etsi_its_msgs::msg::builder::Init_Intersections_intersects();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__BUILDER_HPP_
