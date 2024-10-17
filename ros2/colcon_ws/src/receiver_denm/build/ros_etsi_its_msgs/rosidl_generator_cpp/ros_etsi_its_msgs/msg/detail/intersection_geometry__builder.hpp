// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersection_geometry.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/intersection_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionGeometry_lane_set
{
public:
  explicit Init_IntersectionGeometry_lane_set(::ros_etsi_its_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::IntersectionGeometry lane_set(::ros_etsi_its_msgs::msg::IntersectionGeometry::_lane_set_type arg)
  {
    msg_.lane_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_lane_width
{
public:
  explicit Init_IntersectionGeometry_lane_width(::ros_etsi_its_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_lane_set lane_width(::ros_etsi_its_msgs::msg::IntersectionGeometry::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_IntersectionGeometry_lane_set(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_ref_point
{
public:
  explicit Init_IntersectionGeometry_ref_point(::ros_etsi_its_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_lane_width ref_point(::ros_etsi_its_msgs::msg::IntersectionGeometry::_ref_point_type arg)
  {
    msg_.ref_point = std::move(arg);
    return Init_IntersectionGeometry_lane_width(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_revision
{
public:
  explicit Init_IntersectionGeometry_revision(::ros_etsi_its_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_ref_point revision(::ros_etsi_its_msgs::msg::IntersectionGeometry::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_IntersectionGeometry_ref_point(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_id
{
public:
  explicit Init_IntersectionGeometry_id(::ros_etsi_its_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_revision id(::ros_etsi_its_msgs::msg::IntersectionGeometry::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionGeometry_revision(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_name
{
public:
  Init_IntersectionGeometry_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionGeometry_id name(::ros_etsi_its_msgs::msg::IntersectionGeometry::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IntersectionGeometry_id(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::IntersectionGeometry>()
{
  return ros_etsi_its_msgs::msg::builder::Init_IntersectionGeometry_name();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_
