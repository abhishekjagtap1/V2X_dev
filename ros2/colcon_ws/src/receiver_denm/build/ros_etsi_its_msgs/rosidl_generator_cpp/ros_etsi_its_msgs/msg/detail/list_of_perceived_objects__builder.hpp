// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/ListOfPerceivedObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/list_of_perceived_objects.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_ListOfPerceivedObjects_perceived_object_container
{
public:
  Init_ListOfPerceivedObjects_perceived_object_container()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_etsi_its_msgs::msg::ListOfPerceivedObjects perceived_object_container(::ros_etsi_its_msgs::msg::ListOfPerceivedObjects::_perceived_object_container_type arg)
  {
    msg_.perceived_object_container = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ListOfPerceivedObjects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::ListOfPerceivedObjects>()
{
  return ros_etsi_its_msgs::msg::builder::Init_ListOfPerceivedObjects_perceived_object_container();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__BUILDER_HPP_
