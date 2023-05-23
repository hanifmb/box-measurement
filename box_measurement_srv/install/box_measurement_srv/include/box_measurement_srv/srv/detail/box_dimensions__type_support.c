// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from box_measurement_srv:srv/BoxDimensions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "box_measurement_srv/srv/detail/box_dimensions__rosidl_typesupport_introspection_c.h"
#include "box_measurement_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "box_measurement_srv/srv/detail/box_dimensions__functions.h"
#include "box_measurement_srv/srv/detail/box_dimensions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  box_measurement_srv__srv__BoxDimensions_Request__init(message_memory);
}

void BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_fini_function(void * message_memory)
{
  box_measurement_srv__srv__BoxDimensions_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_measurement_srv__srv__BoxDimensions_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_members = {
  "box_measurement_srv__srv",  // message namespace
  "BoxDimensions_Request",  // message name
  1,  // number of fields
  sizeof(box_measurement_srv__srv__BoxDimensions_Request),
  BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_member_array,  // message members
  BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_type_support_handle = {
  0,
  &BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_box_measurement_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, box_measurement_srv, srv, BoxDimensions_Request)() {
  if (!BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_type_support_handle.typesupport_identifier) {
    BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoxDimensions_Request__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "box_measurement_srv/srv/detail/box_dimensions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "box_measurement_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "box_measurement_srv/srv/detail/box_dimensions__functions.h"
// already included above
// #include "box_measurement_srv/srv/detail/box_dimensions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  box_measurement_srv__srv__BoxDimensions_Response__init(message_memory);
}

void BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_fini_function(void * message_memory)
{
  box_measurement_srv__srv__BoxDimensions_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_member_array[3] = {
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_measurement_srv__srv__BoxDimensions_Response, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "legnth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_measurement_srv__srv__BoxDimensions_Response, legnth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(box_measurement_srv__srv__BoxDimensions_Response, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_members = {
  "box_measurement_srv__srv",  // message namespace
  "BoxDimensions_Response",  // message name
  3,  // number of fields
  sizeof(box_measurement_srv__srv__BoxDimensions_Response),
  BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_member_array,  // message members
  BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_type_support_handle = {
  0,
  &BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_box_measurement_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, box_measurement_srv, srv, BoxDimensions_Response)() {
  if (!BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_type_support_handle.typesupport_identifier) {
    BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoxDimensions_Response__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "box_measurement_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "box_measurement_srv/srv/detail/box_dimensions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_service_members = {
  "box_measurement_srv__srv",  // service namespace
  "BoxDimensions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_Request_message_type_support_handle,
  NULL  // response message
  // box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_Response_message_type_support_handle
};

static rosidl_service_type_support_t box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_service_type_support_handle = {
  0,
  &box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, box_measurement_srv, srv, BoxDimensions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, box_measurement_srv, srv, BoxDimensions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_box_measurement_srv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, box_measurement_srv, srv, BoxDimensions)() {
  if (!box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_service_type_support_handle.typesupport_identifier) {
    box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, box_measurement_srv, srv, BoxDimensions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, box_measurement_srv, srv, BoxDimensions_Response)()->data;
  }

  return &box_measurement_srv__srv__detail__box_dimensions__rosidl_typesupport_introspection_c__BoxDimensions_service_type_support_handle;
}
