#include "ParseJSON.h"
#include "Parser.h"         // json::C_Parser, errors
#include "ParserIdDef.h"    // TID_LEX_Spaces
#include "Scanner.h"        // C_JSONScanner
#include "XException.h"     // RUNTIME_ERROR()
#include <sstream>          // std::istringstream

namespace json {

//
//      Functions
//
value parse(std::istream &in)
{
    C_Parser        parser;
    bux::C_Screener preparser(parser, [](auto token){ return token == TID_LEX_Spaces || token == '\n'; });
    C_JSONScanner   scanner(preparser);
    bux::scanFile(">", in, scanner);

    // Check if parsing is ok
    if (errors)
        RUNTIME_ERROR("Fail to parse!")

    // Acceptance
    if (!parser.accepted())
        RUNTIME_ERROR("Incomplete expression!")

    return bux::unlex<value>(parser.getFinalLex());;
}

std::optional<jint> parse_int(const std::string &s)
{
    std::istringstream in{s};
    const auto v = json::parse(in);
    if (auto i = get_if<json::jint>(&v))
        return *i;

    return {};
}

std::optional<jfloat> parse_float(const std::string &s)
{
    std::istringstream in{s};
    const auto v = json::parse(in);
    if (auto f = get_if<json::jfloat>(&v))
        return *f;
    if (auto i = get_if<json::jint>(&v))
        return *i;

    return {};
}

} // namespace json
