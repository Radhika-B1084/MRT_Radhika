// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from aruco_interfaces:msg/ArucoVideo.idl
// generated code does not contain a copyright notice
#include "aruco_interfaces/msg/detail/aruco_video__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `corners`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
aruco_interfaces__msg__ArucoVideo__init(aruco_interfaces__msg__ArucoVideo * msg)
{
  if (!msg) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->ids, 0)) {
    aruco_interfaces__msg__ArucoVideo__fini(msg);
    return false;
  }
  // corners
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->corners, 0)) {
    aruco_interfaces__msg__ArucoVideo__fini(msg);
    return false;
  }
  return true;
}

void
aruco_interfaces__msg__ArucoVideo__fini(aruco_interfaces__msg__ArucoVideo * msg)
{
  if (!msg) {
    return;
  }
  // ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->ids);
  // corners
  geometry_msgs__msg__Point__Sequence__fini(&msg->corners);
}

bool
aruco_interfaces__msg__ArucoVideo__are_equal(const aruco_interfaces__msg__ArucoVideo * lhs, const aruco_interfaces__msg__ArucoVideo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->ids), &(rhs->ids)))
  {
    return false;
  }
  // corners
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->corners), &(rhs->corners)))
  {
    return false;
  }
  return true;
}

bool
aruco_interfaces__msg__ArucoVideo__copy(
  const aruco_interfaces__msg__ArucoVideo * input,
  aruco_interfaces__msg__ArucoVideo * output)
{
  if (!input || !output) {
    return false;
  }
  // ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->ids), &(output->ids)))
  {
    return false;
  }
  // corners
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->corners), &(output->corners)))
  {
    return false;
  }
  return true;
}

aruco_interfaces__msg__ArucoVideo *
aruco_interfaces__msg__ArucoVideo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__ArucoVideo * msg = (aruco_interfaces__msg__ArucoVideo *)allocator.allocate(sizeof(aruco_interfaces__msg__ArucoVideo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(aruco_interfaces__msg__ArucoVideo));
  bool success = aruco_interfaces__msg__ArucoVideo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
aruco_interfaces__msg__ArucoVideo__destroy(aruco_interfaces__msg__ArucoVideo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    aruco_interfaces__msg__ArucoVideo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
aruco_interfaces__msg__ArucoVideo__Sequence__init(aruco_interfaces__msg__ArucoVideo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__ArucoVideo * data = NULL;

  if (size) {
    data = (aruco_interfaces__msg__ArucoVideo *)allocator.zero_allocate(size, sizeof(aruco_interfaces__msg__ArucoVideo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = aruco_interfaces__msg__ArucoVideo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        aruco_interfaces__msg__ArucoVideo__fini(&data[i - 1]);
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
aruco_interfaces__msg__ArucoVideo__Sequence__fini(aruco_interfaces__msg__ArucoVideo__Sequence * array)
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
      aruco_interfaces__msg__ArucoVideo__fini(&array->data[i]);
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

aruco_interfaces__msg__ArucoVideo__Sequence *
aruco_interfaces__msg__ArucoVideo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  aruco_interfaces__msg__ArucoVideo__Sequence * array = (aruco_interfaces__msg__ArucoVideo__Sequence *)allocator.allocate(sizeof(aruco_interfaces__msg__ArucoVideo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = aruco_interfaces__msg__ArucoVideo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
aruco_interfaces__msg__ArucoVideo__Sequence__destroy(aruco_interfaces__msg__ArucoVideo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    aruco_interfaces__msg__ArucoVideo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
aruco_interfaces__msg__ArucoVideo__Sequence__are_equal(const aruco_interfaces__msg__ArucoVideo__Sequence * lhs, const aruco_interfaces__msg__ArucoVideo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!aruco_interfaces__msg__ArucoVideo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
aruco_interfaces__msg__ArucoVideo__Sequence__copy(
  const aruco_interfaces__msg__ArucoVideo__Sequence * input,
  aruco_interfaces__msg__ArucoVideo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(aruco_interfaces__msg__ArucoVideo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    aruco_interfaces__msg__ArucoVideo * data =
      (aruco_interfaces__msg__ArucoVideo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!aruco_interfaces__msg__ArucoVideo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          aruco_interfaces__msg__ArucoVideo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!aruco_interfaces__msg__ArucoVideo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
