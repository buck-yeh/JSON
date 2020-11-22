#ifndef ParserJSON_H_
#define ParserJSON_H_

#include "JsonObjs.h"   // JSON object types
#include <iosfwd>       // std::istream
#include <optional>     // std::optional<>

namespace json {

value parse(std::istream &in);
std::optional<jint> parse_int(const std::string &s);
std::optional<jfloat> parse_float(const std::string &s);

} // namespace json

#endif // ParserJSON_H_
