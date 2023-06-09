// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from box_measurement_srv:srv/BoxDimensions.idl
// generated code does not contain a copyright notice
#include "box_measurement_srv/srv/detail/box_dimensions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "box_measurement_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "box_measurement_srv/srv/detail/box_dimensions__struct.h"
#include "box_measurement_srv/srv/detail/box_dimensions__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BoxDimensions_Request__ros_msg_type = box_measurement_srv__srv__BoxDimensions_Request;

static bool _BoxDimensions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BoxDimensions_Request__ros_msg_type * ros_message = static_cast<const _BoxDimensions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _BoxDimensions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BoxDimensions_Request__ros_msg_type * ros_message = static_cast<_BoxDimensions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_box_measurement_srv
size_t get_serialized_size_box_measurement_srv__srv__BoxDimensions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BoxDimensions_Request__ros_msg_type * ros_message = static_cast<const _BoxDimensions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BoxDimensions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_box_measurement_srv__srv__BoxDimensions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_box_measurement_srv
size_t max_serialized_size_box_measurement_srv__srv__BoxDimensions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _BoxDimensions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_box_measurement_srv__srv__BoxDimensions_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BoxDimensions_Request = {
  "box_measurement_srv::srv",
  "BoxDimensions_Request",
  _BoxDimensions_Request__cdr_serialize,
  _BoxDimensions_Request__cdr_deserialize,
  _BoxDimensions_Request__get_serialized_size,
  _BoxDimensions_Request__max_serialized_size
};

static rosidl_message_type_support_t _BoxDimensions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BoxDimensions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, box_measurement_srv, srv, BoxDimensions_Request)() {
  return &_BoxDimensions_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "box_measurement_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "box_measurement_srv/srv/detail/box_dimensions__struct.h"
// already included above
// #include "box_measurement_srv/srv/detail/box_dimensions__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BoxDimensions_Response__ros_msg_type = box_measurement_srv__srv__BoxDimensions_Response;

static bool _BoxDimensions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BoxDimensions_Response__ros_msg_type * ros_message = static_cast<const _BoxDimensions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: width
  {
    cdr << ros_message->width;
  }

  // Field name: legnth
  {
    cdr << ros_message->legnth;
  }

  // Field name: height
  {
    cdr << ros_message->height;
  }

  return true;
}

static bool _BoxDimensions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BoxDimensions_Response__ros_msg_type * ros_message = static_cast<_BoxDimensions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: width
  {
    cdr >> ros_message->width;
  }

  // Field name: legnth
  {
    cdr >> ros_message->legnth;
  }

  // Field name: height
  {
    cdr >> ros_message->height;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_box_measurement_srv
size_t get_serialized_size_box_measurement_srv__srv__BoxDimensions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BoxDimensions_Response__ros_msg_type * ros_message = static_cast<const _BoxDimensions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name width
  {
    size_t item_size = sizeof(ros_message->width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name legnth
  {
    size_t item_size = sizeof(ros_message->legnth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height
  {
    size_t item_size = sizeof(ros_message->height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BoxDimensions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_box_measurement_srv__srv__BoxDimensions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_box_measurement_srv
size_t max_serialized_size_box_measurement_srv__srv__BoxDimensions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: legnth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _BoxDimensions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_box_measurement_srv__srv__BoxDimensions_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BoxDimensions_Response = {
  "box_measurement_srv::srv",
  "BoxDimensions_Response",
  _BoxDimensions_Response__cdr_serialize,
  _BoxDimensions_Response__cdr_deserialize,
  _BoxDimensions_Response__get_serialized_size,
  _BoxDimensions_Response__max_serialized_size
};

static rosidl_message_type_support_t _BoxDimensions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BoxDimensions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, box_measurement_srv, srv, BoxDimensions_Response)() {
  return &_BoxDimensions_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "box_measurement_srv/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "box_measurement_srv/srv/box_dimensions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BoxDimensions__callbacks = {
  "box_measurement_srv::srv",
  "BoxDimensions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, box_measurement_srv, srv, BoxDimensions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, box_measurement_srv, srv, BoxDimensions_Response)(),
};

static rosidl_service_type_support_t BoxDimensions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BoxDimensions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, box_measurement_srv, srv, BoxDimensions)() {
  return &BoxDimensions__handle;
}

#if defined(__cplusplus)
}
#endif
