// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_interfaces:msg/ArucoImage.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_IMAGE__STRUCT_H_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ids'
// Member 'corners'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ArucoImage in the package aruco_interfaces.
typedef struct aruco_interfaces__msg__ArucoImage
{
  /// Output: detected ArUco marker IDs
  rosidl_runtime_c__int32__Sequence ids;
  /// Output: bounding box coordinates [x1, y1, x2, y2, ..., xn, yn]
  rosidl_runtime_c__float__Sequence corners;
} aruco_interfaces__msg__ArucoImage;

// Struct for a sequence of aruco_interfaces__msg__ArucoImage.
typedef struct aruco_interfaces__msg__ArucoImage__Sequence
{
  aruco_interfaces__msg__ArucoImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_interfaces__msg__ArucoImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_IMAGE__STRUCT_H_
