// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from box_measurement_srv:srv/BoxDimensions.idl
// generated code does not contain a copyright notice

#ifndef BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__FUNCTIONS_H_
#define BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "box_measurement_srv/msg/rosidl_generator_c__visibility_control.h"

#include "box_measurement_srv/srv/detail/box_dimensions__struct.h"

/// Initialize srv/BoxDimensions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * box_measurement_srv__srv__BoxDimensions_Request
 * )) before or use
 * box_measurement_srv__srv__BoxDimensions_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Request__init(box_measurement_srv__srv__BoxDimensions_Request * msg);

/// Finalize srv/BoxDimensions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
void
box_measurement_srv__srv__BoxDimensions_Request__fini(box_measurement_srv__srv__BoxDimensions_Request * msg);

/// Create srv/BoxDimensions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * box_measurement_srv__srv__BoxDimensions_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
box_measurement_srv__srv__BoxDimensions_Request *
box_measurement_srv__srv__BoxDimensions_Request__create();

/// Destroy srv/BoxDimensions message.
/**
 * It calls
 * box_measurement_srv__srv__BoxDimensions_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
void
box_measurement_srv__srv__BoxDimensions_Request__destroy(box_measurement_srv__srv__BoxDimensions_Request * msg);

/// Check for srv/BoxDimensions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Request__are_equal(const box_measurement_srv__srv__BoxDimensions_Request * lhs, const box_measurement_srv__srv__BoxDimensions_Request * rhs);

/// Copy a srv/BoxDimensions message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Request__copy(
  const box_measurement_srv__srv__BoxDimensions_Request * input,
  box_measurement_srv__srv__BoxDimensions_Request * output);

/// Initialize array of srv/BoxDimensions messages.
/**
 * It allocates the memory for the number of elements and calls
 * box_measurement_srv__srv__BoxDimensions_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Request__Sequence__init(box_measurement_srv__srv__BoxDimensions_Request__Sequence * array, size_t size);

/// Finalize array of srv/BoxDimensions messages.
/**
 * It calls
 * box_measurement_srv__srv__BoxDimensions_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
void
box_measurement_srv__srv__BoxDimensions_Request__Sequence__fini(box_measurement_srv__srv__BoxDimensions_Request__Sequence * array);

/// Create array of srv/BoxDimensions messages.
/**
 * It allocates the memory for the array and calls
 * box_measurement_srv__srv__BoxDimensions_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
box_measurement_srv__srv__BoxDimensions_Request__Sequence *
box_measurement_srv__srv__BoxDimensions_Request__Sequence__create(size_t size);

/// Destroy array of srv/BoxDimensions messages.
/**
 * It calls
 * box_measurement_srv__srv__BoxDimensions_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
void
box_measurement_srv__srv__BoxDimensions_Request__Sequence__destroy(box_measurement_srv__srv__BoxDimensions_Request__Sequence * array);

/// Check for srv/BoxDimensions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Request__Sequence__are_equal(const box_measurement_srv__srv__BoxDimensions_Request__Sequence * lhs, const box_measurement_srv__srv__BoxDimensions_Request__Sequence * rhs);

/// Copy an array of srv/BoxDimensions messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Request__Sequence__copy(
  const box_measurement_srv__srv__BoxDimensions_Request__Sequence * input,
  box_measurement_srv__srv__BoxDimensions_Request__Sequence * output);

/// Initialize srv/BoxDimensions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * box_measurement_srv__srv__BoxDimensions_Response
 * )) before or use
 * box_measurement_srv__srv__BoxDimensions_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Response__init(box_measurement_srv__srv__BoxDimensions_Response * msg);

/// Finalize srv/BoxDimensions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
void
box_measurement_srv__srv__BoxDimensions_Response__fini(box_measurement_srv__srv__BoxDimensions_Response * msg);

/// Create srv/BoxDimensions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * box_measurement_srv__srv__BoxDimensions_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
box_measurement_srv__srv__BoxDimensions_Response *
box_measurement_srv__srv__BoxDimensions_Response__create();

/// Destroy srv/BoxDimensions message.
/**
 * It calls
 * box_measurement_srv__srv__BoxDimensions_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
void
box_measurement_srv__srv__BoxDimensions_Response__destroy(box_measurement_srv__srv__BoxDimensions_Response * msg);

/// Check for srv/BoxDimensions message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Response__are_equal(const box_measurement_srv__srv__BoxDimensions_Response * lhs, const box_measurement_srv__srv__BoxDimensions_Response * rhs);

/// Copy a srv/BoxDimensions message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Response__copy(
  const box_measurement_srv__srv__BoxDimensions_Response * input,
  box_measurement_srv__srv__BoxDimensions_Response * output);

/// Initialize array of srv/BoxDimensions messages.
/**
 * It allocates the memory for the number of elements and calls
 * box_measurement_srv__srv__BoxDimensions_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Response__Sequence__init(box_measurement_srv__srv__BoxDimensions_Response__Sequence * array, size_t size);

/// Finalize array of srv/BoxDimensions messages.
/**
 * It calls
 * box_measurement_srv__srv__BoxDimensions_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
void
box_measurement_srv__srv__BoxDimensions_Response__Sequence__fini(box_measurement_srv__srv__BoxDimensions_Response__Sequence * array);

/// Create array of srv/BoxDimensions messages.
/**
 * It allocates the memory for the array and calls
 * box_measurement_srv__srv__BoxDimensions_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
box_measurement_srv__srv__BoxDimensions_Response__Sequence *
box_measurement_srv__srv__BoxDimensions_Response__Sequence__create(size_t size);

/// Destroy array of srv/BoxDimensions messages.
/**
 * It calls
 * box_measurement_srv__srv__BoxDimensions_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
void
box_measurement_srv__srv__BoxDimensions_Response__Sequence__destroy(box_measurement_srv__srv__BoxDimensions_Response__Sequence * array);

/// Check for srv/BoxDimensions message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Response__Sequence__are_equal(const box_measurement_srv__srv__BoxDimensions_Response__Sequence * lhs, const box_measurement_srv__srv__BoxDimensions_Response__Sequence * rhs);

/// Copy an array of srv/BoxDimensions messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_box_measurement_srv
bool
box_measurement_srv__srv__BoxDimensions_Response__Sequence__copy(
  const box_measurement_srv__srv__BoxDimensions_Response__Sequence * input,
  box_measurement_srv__srv__BoxDimensions_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__FUNCTIONS_H_
