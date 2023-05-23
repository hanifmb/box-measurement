// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from box_measurement_srv:srv/BoxDimensions.idl
// generated code does not contain a copyright notice

#ifndef BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__BUILDER_HPP_
#define BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__BUILDER_HPP_

#include "box_measurement_srv/srv/detail/box_dimensions__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace box_measurement_srv
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::box_measurement_srv::srv::BoxDimensions_Request>()
{
  return ::box_measurement_srv::srv::BoxDimensions_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace box_measurement_srv


namespace box_measurement_srv
{

namespace srv
{

namespace builder
{

class Init_BoxDimensions_Response_height
{
public:
  explicit Init_BoxDimensions_Response_height(::box_measurement_srv::srv::BoxDimensions_Response & msg)
  : msg_(msg)
  {}
  ::box_measurement_srv::srv::BoxDimensions_Response height(::box_measurement_srv::srv::BoxDimensions_Response::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::box_measurement_srv::srv::BoxDimensions_Response msg_;
};

class Init_BoxDimensions_Response_legnth
{
public:
  explicit Init_BoxDimensions_Response_legnth(::box_measurement_srv::srv::BoxDimensions_Response & msg)
  : msg_(msg)
  {}
  Init_BoxDimensions_Response_height legnth(::box_measurement_srv::srv::BoxDimensions_Response::_legnth_type arg)
  {
    msg_.legnth = std::move(arg);
    return Init_BoxDimensions_Response_height(msg_);
  }

private:
  ::box_measurement_srv::srv::BoxDimensions_Response msg_;
};

class Init_BoxDimensions_Response_width
{
public:
  Init_BoxDimensions_Response_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoxDimensions_Response_legnth width(::box_measurement_srv::srv::BoxDimensions_Response::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_BoxDimensions_Response_legnth(msg_);
  }

private:
  ::box_measurement_srv::srv::BoxDimensions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::box_measurement_srv::srv::BoxDimensions_Response>()
{
  return box_measurement_srv::srv::builder::Init_BoxDimensions_Response_width();
}

}  // namespace box_measurement_srv

#endif  // BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__BUILDER_HPP_
