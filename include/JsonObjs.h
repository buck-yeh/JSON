#pragma once

#include <string>   // std::string
#include <variant>  // std::variant<>, std::monostate
#include <vector>   // std::vector<>

namespace json {

//
//      Constants
//
constinit const std::size_t ALT_NULL    = 0;
constinit const std::size_t ALT_BOOL    = 1;
constinit const std::size_t ALT_INT     = 2;
constinit const std::size_t ALT_FLOAT   = 3;
constinit const std::size_t ALT_STRING  = 4;
constinit const std::size_t ALT_ARRAY   = 5;
constinit const std::size_t ALT_OBJECT  = 6;

//
//      Types
//
class object;
class array;
using jint = int64_t;
using jfloat = double;
using value = std::variant<std::monostate, bool, jint, jfloat, std::string, array, object>;
class object: public std::vector<std::pair<std::string, value>> {};
class array: public std::vector<value> {};

// Compile-time assertions
static_assert(std::variant_size_v<value> == 7);
static_assert(std::is_same_v<std::monostate,    std::variant_alternative_t<ALT_NULL,    value>>);
static_assert(std::is_same_v<bool,              std::variant_alternative_t<ALT_BOOL,    value>>);
static_assert(std::is_same_v<jint,              std::variant_alternative_t<ALT_INT,     value>>);
static_assert(std::is_same_v<jfloat,            std::variant_alternative_t<ALT_FLOAT,   value>>);
static_assert(std::is_same_v<std::string,       std::variant_alternative_t<ALT_STRING,  value>>);
static_assert(std::is_same_v<array,             std::variant_alternative_t<ALT_ARRAY,   value>>);
static_assert(std::is_same_v<object,            std::variant_alternative_t<ALT_OBJECT,  value>>);

//
//      Functions
//
std::ostream &operator<<(std::ostream &out, const value &src);
const value &operator/(const value &root, const std::string &key);
const value *operator/(const value *root, const std::string &key) noexcept;
const value *subvalue(const value &root, const std::string &key) noexcept;

void dump(const value &src, std::ostream &out, size_t indent = 0);
void dump(const array &src, std::ostream &out, size_t indent = 0);
void dump(const object &src, std::ostream &out, size_t indent = 0);

} // namespace json
