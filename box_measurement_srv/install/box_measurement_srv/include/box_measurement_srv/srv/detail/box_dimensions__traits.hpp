// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from box_measurement_srv:srv/BoxDimensions.idl
// generated code does not contain a copyright notice

#ifndef BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__TRAITS_HPP_
#define BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__TRAITS_HPP_

#include "box_measurement_srv/srv/detail/box_dimensions__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<box_measurement_srv::srv::BoxDimensions_Request>()
{
  return "box_measurement_srv::srv::BoxDimensions_Request";
}

template<>
inline const char * name<box_measurement_srv::srv::BoxDimensions_Request>()
{
  return "box_measurement_srv/srv/BoxDimensions_Request";
}

template<>
struct has_fixed_size<box_measurement_srv::srv::BoxDimensions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<box_measurement_srv::srv::BoxDimensions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<box_measurement_srv::srv::BoxDimensions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<box_measurement_srv::srv::BoxDimensions_Response>()
{
  return "box_measurement_srv::srv::BoxDimensions_Response";
}

template<>
inline const char * name<box_measurement_srv::srv::BoxDimensions_Response>()
{
  return "box_measurement_srv/srv/BoxDimensions_Response";
}

template<>
struct has_fixed_size<box_measurement_srv::srv::BoxDimensions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<box_measurement_srv::srv::BoxDimensions_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<box_measurement_srv::srv::BoxDimensions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<box_measurement_srv::srv::BoxDimensions>()
{
  return "box_measurement_srv::srv::BoxDimensions";
}

template<>
inline const char * name<box_measurement_srv::srv::BoxDimensions>()
{
  return "box_measurement_srv/srv/BoxDimensions";
}

template<>
struct has_fixed_size<box_measurement_srv::srv::BoxDimensions>
  : std::integral_constant<
    bool,
    has_fixed_size<box_measurement_srv::srv::BoxDimensions_Request>::value &&
    has_fixed_size<box_measurement_srv::srv::BoxDimensions_Response>::value
  >
{
};

template<>
struct has_bounded_size<box_measurement_srv::srv::BoxDimensions>
  : std::integral_constant<
    bool,
    has_bounded_size<box_measurement_srv::srv::BoxDimensions_Request>::value &&
    has_bounded_size<box_measurement_srv::srv::BoxDimensions_Response>::value
  >
{
};

template<>
struct is_service<box_measurement_srv::srv::BoxDimensions>
  : std::true_type
{
};

template<>
struct is_service_request<box_measurement_srv::srv::BoxDimensions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<box_measurement_srv::srv::BoxDimensions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__TRAITS_HPP_
