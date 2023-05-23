// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from box_measurement_srv:srv/BoxDimensions.idl
// generated code does not contain a copyright notice
#include "box_measurement_srv/srv/detail/box_dimensions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
box_measurement_srv__srv__BoxDimensions_Request__init(box_measurement_srv__srv__BoxDimensions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
box_measurement_srv__srv__BoxDimensions_Request__fini(box_measurement_srv__srv__BoxDimensions_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
box_measurement_srv__srv__BoxDimensions_Request__are_equal(const box_measurement_srv__srv__BoxDimensions_Request * lhs, const box_measurement_srv__srv__BoxDimensions_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
box_measurement_srv__srv__BoxDimensions_Request__copy(
  const box_measurement_srv__srv__BoxDimensions_Request * input,
  box_measurement_srv__srv__BoxDimensions_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

box_measurement_srv__srv__BoxDimensions_Request *
box_measurement_srv__srv__BoxDimensions_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  box_measurement_srv__srv__BoxDimensions_Request * msg = (box_measurement_srv__srv__BoxDimensions_Request *)allocator.allocate(sizeof(box_measurement_srv__srv__BoxDimensions_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(box_measurement_srv__srv__BoxDimensions_Request));
  bool success = box_measurement_srv__srv__BoxDimensions_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
box_measurement_srv__srv__BoxDimensions_Request__destroy(box_measurement_srv__srv__BoxDimensions_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    box_measurement_srv__srv__BoxDimensions_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
box_measurement_srv__srv__BoxDimensions_Request__Sequence__init(box_measurement_srv__srv__BoxDimensions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  box_measurement_srv__srv__BoxDimensions_Request * data = NULL;

  if (size) {
    data = (box_measurement_srv__srv__BoxDimensions_Request *)allocator.zero_allocate(size, sizeof(box_measurement_srv__srv__BoxDimensions_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = box_measurement_srv__srv__BoxDimensions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        box_measurement_srv__srv__BoxDimensions_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
box_measurement_srv__srv__BoxDimensions_Request__Sequence__fini(box_measurement_srv__srv__BoxDimensions_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      box_measurement_srv__srv__BoxDimensions_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

box_measurement_srv__srv__BoxDimensions_Request__Sequence *
box_measurement_srv__srv__BoxDimensions_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  box_measurement_srv__srv__BoxDimensions_Request__Sequence * array = (box_measurement_srv__srv__BoxDimensions_Request__Sequence *)allocator.allocate(sizeof(box_measurement_srv__srv__BoxDimensions_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = box_measurement_srv__srv__BoxDimensions_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
box_measurement_srv__srv__BoxDimensions_Request__Sequence__destroy(box_measurement_srv__srv__BoxDimensions_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    box_measurement_srv__srv__BoxDimensions_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
box_measurement_srv__srv__BoxDimensions_Request__Sequence__are_equal(const box_measurement_srv__srv__BoxDimensions_Request__Sequence * lhs, const box_measurement_srv__srv__BoxDimensions_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!box_measurement_srv__srv__BoxDimensions_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
box_measurement_srv__srv__BoxDimensions_Request__Sequence__copy(
  const box_measurement_srv__srv__BoxDimensions_Request__Sequence * input,
  box_measurement_srv__srv__BoxDimensions_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(box_measurement_srv__srv__BoxDimensions_Request);
    box_measurement_srv__srv__BoxDimensions_Request * data =
      (box_measurement_srv__srv__BoxDimensions_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!box_measurement_srv__srv__BoxDimensions_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          box_measurement_srv__srv__BoxDimensions_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!box_measurement_srv__srv__BoxDimensions_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
box_measurement_srv__srv__BoxDimensions_Response__init(box_measurement_srv__srv__BoxDimensions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // width
  // legnth
  // height
  return true;
}

void
box_measurement_srv__srv__BoxDimensions_Response__fini(box_measurement_srv__srv__BoxDimensions_Response * msg)
{
  if (!msg) {
    return;
  }
  // width
  // legnth
  // height
}

bool
box_measurement_srv__srv__BoxDimensions_Response__are_equal(const box_measurement_srv__srv__BoxDimensions_Response * lhs, const box_measurement_srv__srv__BoxDimensions_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // legnth
  if (lhs->legnth != rhs->legnth) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
box_measurement_srv__srv__BoxDimensions_Response__copy(
  const box_measurement_srv__srv__BoxDimensions_Response * input,
  box_measurement_srv__srv__BoxDimensions_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // legnth
  output->legnth = input->legnth;
  // height
  output->height = input->height;
  return true;
}

box_measurement_srv__srv__BoxDimensions_Response *
box_measurement_srv__srv__BoxDimensions_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  box_measurement_srv__srv__BoxDimensions_Response * msg = (box_measurement_srv__srv__BoxDimensions_Response *)allocator.allocate(sizeof(box_measurement_srv__srv__BoxDimensions_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(box_measurement_srv__srv__BoxDimensions_Response));
  bool success = box_measurement_srv__srv__BoxDimensions_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
box_measurement_srv__srv__BoxDimensions_Response__destroy(box_measurement_srv__srv__BoxDimensions_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    box_measurement_srv__srv__BoxDimensions_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
box_measurement_srv__srv__BoxDimensions_Response__Sequence__init(box_measurement_srv__srv__BoxDimensions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  box_measurement_srv__srv__BoxDimensions_Response * data = NULL;

  if (size) {
    data = (box_measurement_srv__srv__BoxDimensions_Response *)allocator.zero_allocate(size, sizeof(box_measurement_srv__srv__BoxDimensions_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = box_measurement_srv__srv__BoxDimensions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        box_measurement_srv__srv__BoxDimensions_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
box_measurement_srv__srv__BoxDimensions_Response__Sequence__fini(box_measurement_srv__srv__BoxDimensions_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      box_measurement_srv__srv__BoxDimensions_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

box_measurement_srv__srv__BoxDimensions_Response__Sequence *
box_measurement_srv__srv__BoxDimensions_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  box_measurement_srv__srv__BoxDimensions_Response__Sequence * array = (box_measurement_srv__srv__BoxDimensions_Response__Sequence *)allocator.allocate(sizeof(box_measurement_srv__srv__BoxDimensions_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = box_measurement_srv__srv__BoxDimensions_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
box_measurement_srv__srv__BoxDimensions_Response__Sequence__destroy(box_measurement_srv__srv__BoxDimensions_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    box_measurement_srv__srv__BoxDimensions_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
box_measurement_srv__srv__BoxDimensions_Response__Sequence__are_equal(const box_measurement_srv__srv__BoxDimensions_Response__Sequence * lhs, const box_measurement_srv__srv__BoxDimensions_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!box_measurement_srv__srv__BoxDimensions_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
box_measurement_srv__srv__BoxDimensions_Response__Sequence__copy(
  const box_measurement_srv__srv__BoxDimensions_Response__Sequence * input,
  box_measurement_srv__srv__BoxDimensions_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(box_measurement_srv__srv__BoxDimensions_Response);
    box_measurement_srv__srv__BoxDimensions_Response * data =
      (box_measurement_srv__srv__BoxDimensions_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!box_measurement_srv__srv__BoxDimensions_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          box_measurement_srv__srv__BoxDimensions_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!box_measurement_srv__srv__BoxDimensions_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
