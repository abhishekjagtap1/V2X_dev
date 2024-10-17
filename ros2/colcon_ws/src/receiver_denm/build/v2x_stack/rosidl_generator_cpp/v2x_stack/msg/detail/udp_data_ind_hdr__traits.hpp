// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/udp_data_ind_hdr.hpp"


#ifndef V2X_STACK__MSG__DETAIL__UDP_DATA_IND_HDR__TRAITS_HPP_
#define V2X_STACK__MSG__DETAIL__UDP_DATA_IND_HDR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack/msg/detail/udp_data_ind_hdr__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'location'
#include "v2x_stack/msg/detail/location__traits.hpp"
// Member 'area'
#include "v2x_stack/msg/detail/area__traits.hpp"

namespace v2x_stack
{

namespace msg
{

inline void to_flow_style_yaml(
  const UDPDataIndHdr & msg,
  std::ostream & out)
{
  out << "{";
  // member: btp_type
  {
    out << "btp_type: ";
    rosidl_generator_traits::value_to_yaml(msg.btp_type, out);
    out << ", ";
  }

  // member: pkt_transport
  {
    out << "pkt_transport: ";
    rosidl_generator_traits::value_to_yaml(msg.pkt_transport, out);
    out << ", ";
  }

  // member: traffic_class
  {
    out << "traffic_class: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_class, out);
    out << ", ";
  }

  // member: max_pkt_life_time
  {
    out << "max_pkt_life_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pkt_life_time, out);
    out << ", ";
  }

  // member: dest_port
  {
    out << "dest_port: ";
    rosidl_generator_traits::value_to_yaml(msg.dest_port, out);
    out << ", ";
  }

  // member: src_port
  {
    out << "src_port: ";
    rosidl_generator_traits::value_to_yaml(msg.src_port, out);
    out << ", ";
  }

  // member: dest_info
  {
    out << "dest_info: ";
    rosidl_generator_traits::value_to_yaml(msg.dest_info, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
    out << ", ";
  }

  // member: area
  {
    out << "area: ";
    to_flow_style_yaml(msg.area, out);
    out << ", ";
  }

  // member: sec_profile
  {
    out << "sec_profile: ";
    rosidl_generator_traits::value_to_yaml(msg.sec_profile, out);
    out << ", ";
  }

  // member: parser_result
  {
    out << "parser_result: ";
    rosidl_generator_traits::value_to_yaml(msg.parser_result, out);
    out << ", ";
  }

  // member: verification_result
  {
    out << "verification_result: ";
    rosidl_generator_traits::value_to_yaml(msg.verification_result, out);
    out << ", ";
  }

  // member: ssp_len
  {
    out << "ssp_len: ";
    rosidl_generator_traits::value_to_yaml(msg.ssp_len, out);
    out << ", ";
  }

  // member: aid
  {
    out << "aid: ";
    rosidl_generator_traits::value_to_yaml(msg.aid, out);
    out << ", ";
  }

  // member: ssp_bits
  {
    if (msg.ssp_bits.size() == 0) {
      out << "ssp_bits: []";
    } else {
      out << "ssp_bits: [";
      size_t pending_items = msg.ssp_bits.size();
      for (auto item : msg.ssp_bits) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cert_id
  {
    if (msg.cert_id.size() == 0) {
      out << "cert_id: []";
    } else {
      out << "cert_id: [";
      size_t pending_items = msg.cert_id.size();
      for (auto item : msg.cert_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UDPDataIndHdr & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: btp_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btp_type: ";
    rosidl_generator_traits::value_to_yaml(msg.btp_type, out);
    out << "\n";
  }

  // member: pkt_transport
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pkt_transport: ";
    rosidl_generator_traits::value_to_yaml(msg.pkt_transport, out);
    out << "\n";
  }

  // member: traffic_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_class: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_class, out);
    out << "\n";
  }

  // member: max_pkt_life_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pkt_life_time: ";
    rosidl_generator_traits::value_to_yaml(msg.max_pkt_life_time, out);
    out << "\n";
  }

  // member: dest_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dest_port: ";
    rosidl_generator_traits::value_to_yaml(msg.dest_port, out);
    out << "\n";
  }

  // member: src_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "src_port: ";
    rosidl_generator_traits::value_to_yaml(msg.src_port, out);
    out << "\n";
  }

  // member: dest_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dest_info: ";
    rosidl_generator_traits::value_to_yaml(msg.dest_info, out);
    out << "\n";
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }

  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area:\n";
    to_block_style_yaml(msg.area, out, indentation + 2);
  }

  // member: sec_profile
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sec_profile: ";
    rosidl_generator_traits::value_to_yaml(msg.sec_profile, out);
    out << "\n";
  }

  // member: parser_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parser_result: ";
    rosidl_generator_traits::value_to_yaml(msg.parser_result, out);
    out << "\n";
  }

  // member: verification_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "verification_result: ";
    rosidl_generator_traits::value_to_yaml(msg.verification_result, out);
    out << "\n";
  }

  // member: ssp_len
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ssp_len: ";
    rosidl_generator_traits::value_to_yaml(msg.ssp_len, out);
    out << "\n";
  }

  // member: aid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aid: ";
    rosidl_generator_traits::value_to_yaml(msg.aid, out);
    out << "\n";
  }

  // member: ssp_bits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ssp_bits.size() == 0) {
      out << "ssp_bits: []\n";
    } else {
      out << "ssp_bits:\n";
      for (auto item : msg.ssp_bits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cert_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cert_id.size() == 0) {
      out << "cert_id: []\n";
    } else {
      out << "cert_id:\n";
      for (auto item : msg.cert_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UDPDataIndHdr & msg, bool use_flow_style = false)
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

}  // namespace v2x_stack

namespace rosidl_generator_traits
{

[[deprecated("use v2x_stack::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_stack::msg::UDPDataIndHdr & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack::msg::UDPDataIndHdr & msg)
{
  return v2x_stack::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack::msg::UDPDataIndHdr>()
{
  return "v2x_stack::msg::UDPDataIndHdr";
}

template<>
inline const char * name<v2x_stack::msg::UDPDataIndHdr>()
{
  return "v2x_stack/msg/UDPDataIndHdr";
}

template<>
struct has_fixed_size<v2x_stack::msg::UDPDataIndHdr>
  : std::integral_constant<bool, has_fixed_size<v2x_stack::msg::Area>::value && has_fixed_size<v2x_stack::msg::Location>::value> {};

template<>
struct has_bounded_size<v2x_stack::msg::UDPDataIndHdr>
  : std::integral_constant<bool, has_bounded_size<v2x_stack::msg::Area>::value && has_bounded_size<v2x_stack::msg::Location>::value> {};

template<>
struct is_message<v2x_stack::msg::UDPDataIndHdr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK__MSG__DETAIL__UDP_DATA_IND_HDR__TRAITS_HPP_
