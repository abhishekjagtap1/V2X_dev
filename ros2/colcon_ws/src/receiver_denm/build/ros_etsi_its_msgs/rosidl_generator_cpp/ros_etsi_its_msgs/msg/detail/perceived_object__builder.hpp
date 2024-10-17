// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/perceived_object.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/perceived_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_PerceivedObject_object_angle
{
public:
  explicit Init_PerceivedObject_object_angle(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::PerceivedObject object_angle(::ros_etsi_its_msgs::msg::PerceivedObject::_object_angle_type arg)
  {
    msg_.object_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_matched_position
{
public:
  explicit Init_PerceivedObject_matched_position(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_object_angle matched_position(::ros_etsi_its_msgs::msg::PerceivedObject::_matched_position_type arg)
  {
    msg_.matched_position = std::move(arg);
    return Init_PerceivedObject_object_angle(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_classification
{
public:
  explicit Init_PerceivedObject_classification(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_matched_position classification(::ros_etsi_its_msgs::msg::PerceivedObject::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_PerceivedObject_matched_position(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_dynamic_status
{
public:
  explicit Init_PerceivedObject_dynamic_status(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_classification dynamic_status(::ros_etsi_its_msgs::msg::PerceivedObject::_dynamic_status_type arg)
  {
    msg_.dynamic_status = std::move(arg);
    return Init_PerceivedObject_classification(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_object_ref_point
{
public:
  explicit Init_PerceivedObject_object_ref_point(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_dynamic_status object_ref_point(::ros_etsi_its_msgs::msg::PerceivedObject::_object_ref_point_type arg)
  {
    msg_.object_ref_point = std::move(arg);
    return Init_PerceivedObject_dynamic_status(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_vertical_object_dimension
{
public:
  explicit Init_PerceivedObject_vertical_object_dimension(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_object_ref_point vertical_object_dimension(::ros_etsi_its_msgs::msg::PerceivedObject::_vertical_object_dimension_type arg)
  {
    msg_.vertical_object_dimension = std::move(arg);
    return Init_PerceivedObject_object_ref_point(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_has_vertical_object_dimension
{
public:
  explicit Init_PerceivedObject_has_vertical_object_dimension(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_vertical_object_dimension has_vertical_object_dimension(::ros_etsi_its_msgs::msg::PerceivedObject::_has_vertical_object_dimension_type arg)
  {
    msg_.has_vertical_object_dimension = std::move(arg);
    return Init_PerceivedObject_vertical_object_dimension(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_planar_object_dimension2
{
public:
  explicit Init_PerceivedObject_planar_object_dimension2(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_has_vertical_object_dimension planar_object_dimension2(::ros_etsi_its_msgs::msg::PerceivedObject::_planar_object_dimension2_type arg)
  {
    msg_.planar_object_dimension2 = std::move(arg);
    return Init_PerceivedObject_has_vertical_object_dimension(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_has_planar_object_dimension2
{
public:
  explicit Init_PerceivedObject_has_planar_object_dimension2(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_planar_object_dimension2 has_planar_object_dimension2(::ros_etsi_its_msgs::msg::PerceivedObject::_has_planar_object_dimension2_type arg)
  {
    msg_.has_planar_object_dimension2 = std::move(arg);
    return Init_PerceivedObject_planar_object_dimension2(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_planar_object_dimension1
{
public:
  explicit Init_PerceivedObject_planar_object_dimension1(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_has_planar_object_dimension2 planar_object_dimension1(::ros_etsi_its_msgs::msg::PerceivedObject::_planar_object_dimension1_type arg)
  {
    msg_.planar_object_dimension1 = std::move(arg);
    return Init_PerceivedObject_has_planar_object_dimension2(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_has_planar_object_dimension1
{
public:
  explicit Init_PerceivedObject_has_planar_object_dimension1(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_planar_object_dimension1 has_planar_object_dimension1(::ros_etsi_its_msgs::msg::PerceivedObject::_has_planar_object_dimension1_type arg)
  {
    msg_.has_planar_object_dimension1 = std::move(arg);
    return Init_PerceivedObject_planar_object_dimension1(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_y_acceleration
{
public:
  explicit Init_PerceivedObject_y_acceleration(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_has_planar_object_dimension1 y_acceleration(::ros_etsi_its_msgs::msg::PerceivedObject::_y_acceleration_type arg)
  {
    msg_.y_acceleration = std::move(arg);
    return Init_PerceivedObject_has_planar_object_dimension1(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_x_acceleration
{
public:
  explicit Init_PerceivedObject_x_acceleration(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_y_acceleration x_acceleration(::ros_etsi_its_msgs::msg::PerceivedObject::_x_acceleration_type arg)
  {
    msg_.x_acceleration = std::move(arg);
    return Init_PerceivedObject_y_acceleration(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_z_speed
{
public:
  explicit Init_PerceivedObject_z_speed(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_x_acceleration z_speed(::ros_etsi_its_msgs::msg::PerceivedObject::_z_speed_type arg)
  {
    msg_.z_speed = std::move(arg);
    return Init_PerceivedObject_x_acceleration(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_y_speed
{
public:
  explicit Init_PerceivedObject_y_speed(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_z_speed y_speed(::ros_etsi_its_msgs::msg::PerceivedObject::_y_speed_type arg)
  {
    msg_.y_speed = std::move(arg);
    return Init_PerceivedObject_z_speed(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_x_speed
{
public:
  explicit Init_PerceivedObject_x_speed(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_y_speed x_speed(::ros_etsi_its_msgs::msg::PerceivedObject::_x_speed_type arg)
  {
    msg_.x_speed = std::move(arg);
    return Init_PerceivedObject_y_speed(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_z_distance
{
public:
  explicit Init_PerceivedObject_z_distance(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_x_speed z_distance(::ros_etsi_its_msgs::msg::PerceivedObject::_z_distance_type arg)
  {
    msg_.z_distance = std::move(arg);
    return Init_PerceivedObject_x_speed(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_y_distance
{
public:
  explicit Init_PerceivedObject_y_distance(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_z_distance y_distance(::ros_etsi_its_msgs::msg::PerceivedObject::_y_distance_type arg)
  {
    msg_.y_distance = std::move(arg);
    return Init_PerceivedObject_z_distance(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_x_distance
{
public:
  explicit Init_PerceivedObject_x_distance(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_y_distance x_distance(::ros_etsi_its_msgs::msg::PerceivedObject::_x_distance_type arg)
  {
    msg_.x_distance = std::move(arg);
    return Init_PerceivedObject_y_distance(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_object_confidence
{
public:
  explicit Init_PerceivedObject_object_confidence(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_x_distance object_confidence(::ros_etsi_its_msgs::msg::PerceivedObject::_object_confidence_type arg)
  {
    msg_.object_confidence = std::move(arg);
    return Init_PerceivedObject_x_distance(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_object_age
{
public:
  explicit Init_PerceivedObject_object_age(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_object_confidence object_age(::ros_etsi_its_msgs::msg::PerceivedObject::_object_age_type arg)
  {
    msg_.object_age = std::move(arg);
    return Init_PerceivedObject_object_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_time_of_measurement
{
public:
  explicit Init_PerceivedObject_time_of_measurement(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_object_age time_of_measurement(::ros_etsi_its_msgs::msg::PerceivedObject::_time_of_measurement_type arg)
  {
    msg_.time_of_measurement = std::move(arg);
    return Init_PerceivedObject_object_age(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_time_of_detection
{
public:
  explicit Init_PerceivedObject_time_of_detection(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_time_of_measurement time_of_detection(::ros_etsi_its_msgs::msg::PerceivedObject::_time_of_detection_type arg)
  {
    msg_.time_of_detection = std::move(arg);
    return Init_PerceivedObject_time_of_measurement(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_sensor_id_list
{
public:
  explicit Init_PerceivedObject_sensor_id_list(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_time_of_detection sensor_id_list(::ros_etsi_its_msgs::msg::PerceivedObject::_sensor_id_list_type arg)
  {
    msg_.sensor_id_list = std::move(arg);
    return Init_PerceivedObject_time_of_detection(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_has_sensor_id_list
{
public:
  explicit Init_PerceivedObject_has_sensor_id_list(::ros_etsi_its_msgs::msg::PerceivedObject & msg)
  : msg_(msg)
  {}
  Init_PerceivedObject_sensor_id_list has_sensor_id_list(::ros_etsi_its_msgs::msg::PerceivedObject::_has_sensor_id_list_type arg)
  {
    msg_.has_sensor_id_list = std::move(arg);
    return Init_PerceivedObject_sensor_id_list(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

class Init_PerceivedObject_object_id
{
public:
  Init_PerceivedObject_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PerceivedObject_has_sensor_id_list object_id(::ros_etsi_its_msgs::msg::PerceivedObject::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_PerceivedObject_has_sensor_id_list(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PerceivedObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::PerceivedObject>()
{
  return ros_etsi_its_msgs::msg::builder::Init_PerceivedObject_object_id();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PERCEIVED_OBJECT__BUILDER_HPP_
