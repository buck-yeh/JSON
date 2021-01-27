#ifndef ParserJSON_H_
#define ParserJSON_H_

#include "JsonObjs.h"   // JSON object types
#include <iosfwd>       // std::istream, std::ostream
#include <optional>     // std::optional<>
#include <string_view>  // std::string_view

namespace json {

value parse(std::istream &in, std::ostream *log = nullptr);
std::optional<jint> parse_int(std::string_view s, std::ostream *log = nullptr);
std::optional<jfloat> parse_float(std::string_view s, std::ostream *log = nullptr);

} // namespace json

#endif // ParserJSON_H_
