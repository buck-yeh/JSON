#ifndef ParserJSON_H_
#define ParserJSON_H_

#include "JsonObjs.h"   // JSON object types
#include <iosfwd>       // std::istream
#include <optional>     // std::optional<>
#include <string_view>  // std::string_view

namespace json {

value parse(std::istream &in);
std::optional<jint> parse_int(std::string_view s);
std::optional<jfloat> parse_float(std::string_view s);

} // namespace json

#endif // ParserJSON_H_
