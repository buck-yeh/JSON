#pragma once

#include "JsonObjs.h"   // JSON object types
#include <iosfwd>       // std::istream, std::ostream
#include <optional>     // std::optional<>
#include <string_view>  // std::string_view

namespace json {

value parse(std::istream &in, std::ostream *log = nullptr);

// Good side effects of parse()
std::optional<jint> parse_int(std::string_view s, std::ostream *log = nullptr);     // Decimal only
std::optional<jfloat> parse_float(std::string_view s, std::ostream *log = nullptr);

} // namespace json
