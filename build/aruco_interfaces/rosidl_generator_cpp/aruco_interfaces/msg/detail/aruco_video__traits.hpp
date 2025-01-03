// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_interfaces:msg/ArucoVideo.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__TRAITS_HPP_
#define ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_interfaces/msg/detail/aruco_video__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'corners'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace aruco_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArucoVideo & msg,
  std::ostream & out)
{
  out << "{";
  // member: ids
  {
    if (msg.ids.size() == 0) {
      out << "ids: []";
    } else {
      out << "ids: [";
      size_t pending_items = msg.ids.size();
      for (auto item : msg.ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corners
  {
    if (msg.corners.size() == 0) {
      out << "corners: []";
    } else {
      out << "corners: [";
      size_t pending_items = msg.corners.size();
      for (auto item : msg.corners) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArucoVideo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ids.size() == 0) {
      out << "ids: []\n";
    } else {
      out << "ids:\n";
      for (auto item : msg.ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: corners
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corners.size() == 0) {
      out << "corners: []\n";
    } else {
      out << "corners:\n";
      for (auto item : msg.corners) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArucoVideo & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aruco_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use aruco_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_interfaces::msg::ArucoVideo & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const aruco_interfaces::msg::ArucoVideo & msg)
{
  return aruco_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_interfaces::msg::ArucoVideo>()
{
  return "aruco_interfaces::msg::ArucoVideo";
}

template<>
inline const char * name<aruco_interfaces::msg::ArucoVideo>()
{
  return "aruco_interfaces/msg/ArucoVideo";
}

template<>
struct has_fixed_size<aruco_interfaces::msg::ArucoVideo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aruco_interfaces::msg::ArucoVideo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aruco_interfaces::msg::ArucoVideo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_INTERFACES__MSG__DETAIL__ARUCO_VIDEO__TRAITS_HPP_
