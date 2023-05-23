// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from box_measurement_srv:srv/BoxDimensions.idl
// generated code does not contain a copyright notice

#ifndef BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__STRUCT_H_
#define BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/BoxDimensions in the package box_measurement_srv.
typedef struct box_measurement_srv__srv__BoxDimensions_Request
{
  uint8_t structure_needs_at_least_one_member;
} box_measurement_srv__srv__BoxDimensions_Request;

// Struct for a sequence of box_measurement_srv__srv__BoxDimensions_Request.
typedef struct box_measurement_srv__srv__BoxDimensions_Request__Sequence
{
  box_measurement_srv__srv__BoxDimensions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} box_measurement_srv__srv__BoxDimensions_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/BoxDimensions in the package box_measurement_srv.
typedef struct box_measurement_srv__srv__BoxDimensions_Response
{
  float width;
  float legnth;
  float height;
} box_measurement_srv__srv__BoxDimensions_Response;

// Struct for a sequence of box_measurement_srv__srv__BoxDimensions_Response.
typedef struct box_measurement_srv__srv__BoxDimensions_Response__Sequence
{
  box_measurement_srv__srv__BoxDimensions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} box_measurement_srv__srv__BoxDimensions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__STRUCT_H_
