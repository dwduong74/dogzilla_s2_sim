// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from image_color_lab:msg/Lab.idl
// generated code does not contain a copyright notice
#include "image_color_lab/msg/detail/lab__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
image_color_lab__msg__Lab__init(image_color_lab__msg__Lab * msg)
{
  if (!msg) {
    return false;
  }
  // l_min
  // a_min
  // b_min
  // l_max
  // a_max
  // b_max
  return true;
}

void
image_color_lab__msg__Lab__fini(image_color_lab__msg__Lab * msg)
{
  if (!msg) {
    return;
  }
  // l_min
  // a_min
  // b_min
  // l_max
  // a_max
  // b_max
}

bool
image_color_lab__msg__Lab__are_equal(const image_color_lab__msg__Lab * lhs, const image_color_lab__msg__Lab * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // l_min
  if (lhs->l_min != rhs->l_min) {
    return false;
  }
  // a_min
  if (lhs->a_min != rhs->a_min) {
    return false;
  }
  // b_min
  if (lhs->b_min != rhs->b_min) {
    return false;
  }
  // l_max
  if (lhs->l_max != rhs->l_max) {
    return false;
  }
  // a_max
  if (lhs->a_max != rhs->a_max) {
    return false;
  }
  // b_max
  if (lhs->b_max != rhs->b_max) {
    return false;
  }
  return true;
}

bool
image_color_lab__msg__Lab__copy(
  const image_color_lab__msg__Lab * input,
  image_color_lab__msg__Lab * output)
{
  if (!input || !output) {
    return false;
  }
  // l_min
  output->l_min = input->l_min;
  // a_min
  output->a_min = input->a_min;
  // b_min
  output->b_min = input->b_min;
  // l_max
  output->l_max = input->l_max;
  // a_max
  output->a_max = input->a_max;
  // b_max
  output->b_max = input->b_max;
  return true;
}

image_color_lab__msg__Lab *
image_color_lab__msg__Lab__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_color_lab__msg__Lab * msg = (image_color_lab__msg__Lab *)allocator.allocate(sizeof(image_color_lab__msg__Lab), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(image_color_lab__msg__Lab));
  bool success = image_color_lab__msg__Lab__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
image_color_lab__msg__Lab__destroy(image_color_lab__msg__Lab * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    image_color_lab__msg__Lab__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
image_color_lab__msg__Lab__Sequence__init(image_color_lab__msg__Lab__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_color_lab__msg__Lab * data = NULL;

  if (size) {
    data = (image_color_lab__msg__Lab *)allocator.zero_allocate(size, sizeof(image_color_lab__msg__Lab), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = image_color_lab__msg__Lab__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        image_color_lab__msg__Lab__fini(&data[i - 1]);
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
image_color_lab__msg__Lab__Sequence__fini(image_color_lab__msg__Lab__Sequence * array)
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
      image_color_lab__msg__Lab__fini(&array->data[i]);
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

image_color_lab__msg__Lab__Sequence *
image_color_lab__msg__Lab__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  image_color_lab__msg__Lab__Sequence * array = (image_color_lab__msg__Lab__Sequence *)allocator.allocate(sizeof(image_color_lab__msg__Lab__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = image_color_lab__msg__Lab__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
image_color_lab__msg__Lab__Sequence__destroy(image_color_lab__msg__Lab__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    image_color_lab__msg__Lab__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
image_color_lab__msg__Lab__Sequence__are_equal(const image_color_lab__msg__Lab__Sequence * lhs, const image_color_lab__msg__Lab__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!image_color_lab__msg__Lab__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
image_color_lab__msg__Lab__Sequence__copy(
  const image_color_lab__msg__Lab__Sequence * input,
  image_color_lab__msg__Lab__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(image_color_lab__msg__Lab);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    image_color_lab__msg__Lab * data =
      (image_color_lab__msg__Lab *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!image_color_lab__msg__Lab__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          image_color_lab__msg__Lab__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!image_color_lab__msg__Lab__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
