#include "ParseJSON.h"
#include "Parser.h"         // json::C_Parser, errors
#include "ParserIdDef.h"    // TID_LEX_Spaces
#include "Scanner.h"        // C_JSONScanner
//--------------------------------------------------------------------
#include "bux/MemIn.h"      // bux::C_IMemStream<>
#include "bux/XException.h" // RUNTIME_ERROR()
#include <sstream>          // std::ostringstream

namespace json {

//
//      Functions
//
value parse(std::istream &in)
{
    std::ostringstream  err_out;
    C_Parser            parser{err_out};
    bux::C_Screener     preparser(parser, [](auto token){ return token == TID_LEX_Spaces || token == '\n'; });
    C_JSONScanner       scanner(preparser);
    bux::scanFile(">", in, scanner);

    // Check if parsing is ok
    if (const auto err_msgs = err_out.str(); !err_msgs.empty())
        RUNTIME_ERROR("{}\nFail to parse!", err_msgs);

    // Acceptance
    if (!parser.accepted())
        RUNTIME_ERROR("Incomplete expression!");

    return bux::unlex<value>(parser.getFinalLex());;
}

std::optional<jint> parse_int(std::string_view s)
{
    bux::C_IMemStream in{s};
    const auto v = json::parse(in);
    if (auto i = get_if<json::jint>(&v))
        return *i;

    return {};
}

std::optional<jfloat> parse_float(std::string_view s)
{
    bux::C_IMemStream in{s};
    const auto v = json::parse(in);
    if (auto f = get_if<json::jfloat>(&v))
        return *f;
    if (auto i = get_if<json::jint>(&v))
        return *i;

    return {};
}

} // namespace json
