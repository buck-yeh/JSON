#pragma once

#include <deque>    // std::deque<>
#include <map>      // std::map<>
#include <string>   // std::string
#include <variant>  // std::variant<>, std::monostate

namespace json {

//
//      Types
//
class object;
class array;
using jint = int64_t;
using jfloat = double;
using value = std::variant<std::monostate, bool, jint, jfloat, std::string, array, object>;
class object: public std::map<std::string, value> {};
class array: public std::deque<value> {};

//
//      Functions
//
std::ostream &operator<< (std::ostream &out, const value &src);
const value &operator/(const value &root, const std::string &key);
const value *operator/(const value *root, const std::string &key) noexcept;
const value *subvalue(const value &root, const std::string &key) noexcept;

void dump(const value &src, std::ostream &out, size_t indent = 0);
void dump(const array &src, std::ostream &out, size_t indent = 0);
void dump(const object &src, std::ostream &out, size_t indent = 0);

} // namespace json
