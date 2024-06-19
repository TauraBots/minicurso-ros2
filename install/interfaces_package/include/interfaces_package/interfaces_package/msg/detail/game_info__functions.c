// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_package:msg/GameInfo.idl
// generated code does not contain a copyright notice
#include "interfaces_package/msg/detail/game_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `blue_position`
// Member `ball_position`
#include "interfaces_package/msg/detail/int16__functions.h"

bool
interfaces_package__msg__GameInfo__init(interfaces_package__msg__GameInfo * msg)
{
  if (!msg) {
    return false;
  }
  // blue_position
  if (!interfaces_package__msg__Int16__Sequence__init(&msg->blue_position, 0)) {
    interfaces_package__msg__GameInfo__fini(msg);
    return false;
  }
  // ball_position
  if (!interfaces_package__msg__Int16__Sequence__init(&msg->ball_position, 0)) {
    interfaces_package__msg__GameInfo__fini(msg);
    return false;
  }
  return true;
}

void
interfaces_package__msg__GameInfo__fini(interfaces_package__msg__GameInfo * msg)
{
  if (!msg) {
    return;
  }
  // blue_position
  interfaces_package__msg__Int16__Sequence__fini(&msg->blue_position);
  // ball_position
  interfaces_package__msg__Int16__Sequence__fini(&msg->ball_position);
}

bool
interfaces_package__msg__GameInfo__are_equal(const interfaces_package__msg__GameInfo * lhs, const interfaces_package__msg__GameInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // blue_position
  if (!interfaces_package__msg__Int16__Sequence__are_equal(
      &(lhs->blue_position), &(rhs->blue_position)))
  {
    return false;
  }
  // ball_position
  if (!interfaces_package__msg__Int16__Sequence__are_equal(
      &(lhs->ball_position), &(rhs->ball_position)))
  {
    return false;
  }
  return true;
}

bool
interfaces_package__msg__GameInfo__copy(
  const interfaces_package__msg__GameInfo * input,
  interfaces_package__msg__GameInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // blue_position
  if (!interfaces_package__msg__Int16__Sequence__copy(
      &(input->blue_position), &(output->blue_position)))
  {
    return false;
  }
  // ball_position
  if (!interfaces_package__msg__Int16__Sequence__copy(
      &(input->ball_position), &(output->ball_position)))
  {
    return false;
  }
  return true;
}

interfaces_package__msg__GameInfo *
interfaces_package__msg__GameInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_package__msg__GameInfo * msg = (interfaces_package__msg__GameInfo *)allocator.allocate(sizeof(interfaces_package__msg__GameInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_package__msg__GameInfo));
  bool success = interfaces_package__msg__GameInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_package__msg__GameInfo__destroy(interfaces_package__msg__GameInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_package__msg__GameInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_package__msg__GameInfo__Sequence__init(interfaces_package__msg__GameInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_package__msg__GameInfo * data = NULL;

  if (size) {
    data = (interfaces_package__msg__GameInfo *)allocator.zero_allocate(size, sizeof(interfaces_package__msg__GameInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_package__msg__GameInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_package__msg__GameInfo__fini(&data[i - 1]);
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
interfaces_package__msg__GameInfo__Sequence__fini(interfaces_package__msg__GameInfo__Sequence * array)
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
      interfaces_package__msg__GameInfo__fini(&array->data[i]);
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

interfaces_package__msg__GameInfo__Sequence *
interfaces_package__msg__GameInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_package__msg__GameInfo__Sequence * array = (interfaces_package__msg__GameInfo__Sequence *)allocator.allocate(sizeof(interfaces_package__msg__GameInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_package__msg__GameInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_package__msg__GameInfo__Sequence__destroy(interfaces_package__msg__GameInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_package__msg__GameInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_package__msg__GameInfo__Sequence__are_equal(const interfaces_package__msg__GameInfo__Sequence * lhs, const interfaces_package__msg__GameInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_package__msg__GameInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_package__msg__GameInfo__Sequence__copy(
  const interfaces_package__msg__GameInfo__Sequence * input,
  interfaces_package__msg__GameInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_package__msg__GameInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_package__msg__GameInfo * data =
      (interfaces_package__msg__GameInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_package__msg__GameInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_package__msg__GameInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_package__msg__GameInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
