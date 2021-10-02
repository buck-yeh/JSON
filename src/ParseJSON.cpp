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
value parse(std::istream &in, std::ostream *log)
{
    std::ostringstream  nul_out;
    if (!log)
        log = &nul_out;

    C_Parser            parser{*log};
    bux::C_Screener     preparser(parser, [](auto token){ return token == TID_LEX_Spaces || token == '\n'; });
    C_JSONScanner       scanner(preparser);
    bux::scanFile({}, in, scanner);

    // Check if parsing is ok
    if (const auto n_errs = parser.m_context.getCount(LL_FATAL) + parser.m_context.getCount(LL_ERROR))
        RUNTIME_ERROR("Total {} errors", n_errs);

    // Acceptance
    if (!parser.accepted())
        RUNTIME_ERROR("Incomplete expression!");

    return bux::unlex<value>(parser.getFinalLex());;
}

std::optional<jint> parse_int(std::string_view s, std::ostream *log)
{
    bux::C_IMemStream in{s};
    const auto v = parse(in, log);
    if (auto i = get_if<ALT_INT>(&v))
        return *i;

    return std::nullopt;
}

std::optional<jfloat> parse_float(std::string_view s, std::ostream *log)
{
    bux::C_IMemStream in{s};
    const auto v = parse(in, log);
    switch (v.index())
    {
    case ALT_FLOAT:
        return get<ALT_FLOAT>(v);
    case ALT_INT:
        return get<ALT_INT>(v);
    }
    return std::nullopt;
}

} // namespace json
