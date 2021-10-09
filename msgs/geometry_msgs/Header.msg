#pragma once
#include <string>

namespace msgs {

struct Header {

  uint32_t timestamp;
  std::string name;
};

} // namespace msgs