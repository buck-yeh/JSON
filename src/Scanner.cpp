// This file is fully generated by running scannergen v1.5.2

// Token-def %HEADERS_FOR_CPP begins
#include "ParserIdDef.h"
// Grammar %HEADERS_FOR_SCANNER_CPP begins
#include "JsonObjs.h"   // json::jint, json::jfloat
#include <charconv>     // std::from_chars()
// Grammar %HEADERS_FOR_SCANNER_CPP ends
using namespace json;
// Token-def %HEADERS_FOR_CPP ends

#include "Scanner.h"

namespace {

// ASCII TABLE:
//  0: \x00\x01\x02\x03\x04\x05\x06\a\b\t\n\v\f\r\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f
// 20:  !\"#$%&\'()*+,-./0123456789:;<=>?
// 40: @ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_
// 60: `abcdefghijklmnopqrstuvwxyz{|}~\x7f
constinit const C_JSONScanner::C_GotoPair
GOTO_STATE1[6] ={
    {'\t', 3},
    {'\n', std::numeric_limits<int8_t>::max()},
    {'\v', 3},
    {'\x0e', std::numeric_limits<int8_t>::max()},
    {' ', 3},
    {'!', std::numeric_limits<int8_t>::max()}},
GOTO_STATE2[19] ={
    {'\t', 3},
    {'\n', std::numeric_limits<int8_t>::max()},
    {'\v', 3},
    {'\x0e', std::numeric_limits<int8_t>::max()},
    {' ', 3},
    {'!', std::numeric_limits<int8_t>::max()},
    {'\"', 11},
    {'#', std::numeric_limits<int8_t>::max()},
    {'.', 12},
    {'/', std::numeric_limits<int8_t>::max()},
    {'0', 2},
    {'1', 10},
    {':', std::numeric_limits<int8_t>::max()},
    {'f', 14},
    {'g', std::numeric_limits<int8_t>::max()},
    {'n', 15},
    {'o', std::numeric_limits<int8_t>::max()},
    {'t', 17},
    {'u', std::numeric_limits<int8_t>::max()}},
GOTO_STATE3[5] ={
    {' ', 19},
    {'\"', 5},
    {'#', 19},
    {'\\', 20},
    {']', 19}},
GOTO_STATE4[22] ={
    {'\"', 19},
    {'#', std::numeric_limits<int8_t>::max()},
    {'\'', 19},
    {'(', std::numeric_limits<int8_t>::max()},
    {'U', 25},
    {'V', std::numeric_limits<int8_t>::max()},
    {'\\', 19},
    {']', std::numeric_limits<int8_t>::max()},
    {'a', 19},
    {'c', std::numeric_limits<int8_t>::max()},
    {'f', 19},
    {'g', std::numeric_limits<int8_t>::max()},
    {'n', 19},
    {'o', std::numeric_limits<int8_t>::max()},
    {'r', 19},
    {'s', std::numeric_limits<int8_t>::max()},
    {'t', 19},
    {'u', 24},
    {'v', 19},
    {'w', std::numeric_limits<int8_t>::max()},
    {'x', 23},
    {'y', std::numeric_limits<int8_t>::max()}},
GOTO_STATE5[6] ={
    {'+', 13},
    {',', std::numeric_limits<int8_t>::max()},
    {'-', 13},
    {'.', std::numeric_limits<int8_t>::max()},
    {'0', 9},
    {':', std::numeric_limits<int8_t>::max()}},
GOTO_STATE6[8] ={
    {'.', 1},
    {'/', std::numeric_limits<int8_t>::max()},
    {'0', 1},
    {':', std::numeric_limits<int8_t>::max()},
    {'E', 18},
    {'F', std::numeric_limits<int8_t>::max()},
    {'e', 18},
    {'f', std::numeric_limits<int8_t>::max()}},
GOTO_STATE7[8] ={
    {'.', 1},
    {'/', std::numeric_limits<int8_t>::max()},
    {'0', 4},
    {':', std::numeric_limits<int8_t>::max()},
    {'E', 18},
    {'F', std::numeric_limits<int8_t>::max()},
    {'e', 18},
    {'f', std::numeric_limits<int8_t>::max()}},
GOTO_STATE8[2] ={
    {'0', 1},
    {':', std::numeric_limits<int8_t>::max()}},
GOTO_STATE9[6] ={
    {'0', 1},
    {':', std::numeric_limits<int8_t>::max()},
    {'E', 18},
    {'F', std::numeric_limits<int8_t>::max()},
    {'e', 18},
    {'f', std::numeric_limits<int8_t>::max()}},
GOTO_STATE10[2] ={
    {'0', 9},
    {':', std::numeric_limits<int8_t>::max()}},
GOTO_STATE11[6] ={
    {'0', 19},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 19},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 19},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE12[6] ={
    {'0', 24},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 24},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 24},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE13[6] ={
    {'0', 26},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 26},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 26},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE14[6] ={
    {'0', 27},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 27},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 27},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE15[6] ={
    {'0', 28},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 28},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 28},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE16[6] ={
    {'0', 29},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 29},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 29},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE17[6] ={
    {'0', 30},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 30},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 30},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE18[6] ={
    {'0', 31},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 31},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 31},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE19[6] ={
    {'0', 36},
    {':', std::numeric_limits<int8_t>::max()},
    {'A', 36},
    {'G', std::numeric_limits<int8_t>::max()},
    {'a', 36},
    {'g', std::numeric_limits<int8_t>::max()}},
GOTO_STATE20[2] ={
    {'a', 21},
    {'b', std::numeric_limits<int8_t>::max()}},
GOTO_STATE21[2] ={
    {'e', 6},
    {'f', std::numeric_limits<int8_t>::max()}},
GOTO_STATE22[2] ={
    {'e', 8},
    {'f', std::numeric_limits<int8_t>::max()}},
GOTO_STATE23[2] ={
    {'l', 7},
    {'m', std::numeric_limits<int8_t>::max()}},
GOTO_STATE24[2] ={
    {'l', 32},
    {'m', std::numeric_limits<int8_t>::max()}},
GOTO_STATE25[2] ={
    {'l', 33},
    {'m', std::numeric_limits<int8_t>::max()}},
GOTO_STATE26[2] ={
    {'r', 16},
    {'s', std::numeric_limits<int8_t>::max()}},
GOTO_STATE27[2] ={
    {'s', 35},
    {'t', std::numeric_limits<int8_t>::max()}},
GOTO_STATE28[2] ={
    {'u', 22},
    {'v', std::numeric_limits<int8_t>::max()}},
GOTO_STATE29[2] ={
    {'u', 34},
    {'v', std::numeric_limits<int8_t>::max()}};
// Token-def %LOCAL_ACTION_DEFS begins
// Grammar %LOCALS_FOR_SCANNER_CPP begins
template<class T_LexCh>
auto createFloatOrInt(const T_LexCh *c, size_t n)
{
    const auto s = bux::toString(c,0,n);
    const auto send = s.data() + s.size();
    jint i;
    if (std::from_chars(s.data(), send, i).ptr == send)
        return bux::C_ActionRet{TID_LEX_Num, bux::createLex(i)};
#if 1
    char *end;
    jfloat f = strtod(s.c_str(), &end);
    if (end != send)
        RUNTIME_ERROR("Not a float: {}", s);

    return bux::C_ActionRet{TID_LEX_Float, bux::createLex(f)};
#else
    jfloat f;
    auto t = std::from_chars(s.data(), send, f); // not supported by mainstream compilers yet
    if (t.ptr == send)
        return bux::C_ActionRet{TID_LEX_Float, bux::createLex(f)};

    if (t.ptr == s.data())
    {
        const auto ecode = make_error_code(t.ec);
        RUNTIME_ERROR("Error: {}:{}", ecode.category().name(), ecode.value());
    }
    else
        RUNTIME_ERROR("Not a float: {}", s);
#endif
}
// Grammar %LOCALS_FOR_SCANNER_CPP ends
// Token-def %LOCAL_ACTION_DEFS ends


constinit const C_JSONScanner::C_StateRec STATES[37] = {
    { GOTO_STATE2,	nullptr	},  // 0
    { GOTO_STATE9,	createFloatOrInt<bux::C_LexUTF32>	},  // 1
    { GOTO_STATE6,	createFloatOrInt<bux::C_LexUTF32>	},  // 2
    { GOTO_STATE1,	bux::createNothing<TID_LEX_Spaces,bux::C_LexUTF32>	},  // 3
    { GOTO_STATE7,	createFloatOrInt<bux::C_LexUTF32>	},  // 4
    { nullptr,	bux::createEscapeString<TID_LEX_String,bux::C_LexUTF32, 1, 1>	},  // 5
    { nullptr,	bux::createNothing<TID_KEYWORD_false,bux::C_LexUTF32>	},  // 6
    { nullptr,	bux::createNothing<TID_KEYWORD_null,bux::C_LexUTF32>	},  // 7
    { nullptr,	bux::createNothing<TID_KEYWORD_true,bux::C_LexUTF32>	},  // 8
    { GOTO_STATE10,	createFloatOrInt<bux::C_LexUTF32>	},  // 9
    { GOTO_STATE7,	createFloatOrInt<bux::C_LexUTF32>	},  // 10
    { GOTO_STATE3,	nullptr	},  // 11
    { GOTO_STATE8,	nullptr	},  // 12
    { GOTO_STATE10,	nullptr	},  // 13
    { GOTO_STATE20,	nullptr	},  // 14
    { GOTO_STATE28,	nullptr	},  // 15
    { GOTO_STATE29,	nullptr	},  // 16
    { GOTO_STATE26,	nullptr	},  // 17
    { GOTO_STATE5,	nullptr	},  // 18
    { GOTO_STATE3,	nullptr	},  // 19
    { GOTO_STATE4,	nullptr	},  // 20
    { GOTO_STATE24,	nullptr	},  // 21
    { GOTO_STATE25,	nullptr	},  // 22
    { GOTO_STATE19,	nullptr	},  // 23
    { GOTO_STATE16,	nullptr	},  // 24
    { GOTO_STATE13,	nullptr	},  // 25
    { GOTO_STATE14,	nullptr	},  // 26
    { GOTO_STATE15,	nullptr	},  // 27
    { GOTO_STATE12,	nullptr	},  // 28
    { GOTO_STATE17,	nullptr	},  // 29
    { GOTO_STATE18,	nullptr	},  // 30
    { GOTO_STATE11,	nullptr	},  // 31
    { GOTO_STATE27,	nullptr	},  // 32
    { GOTO_STATE23,	nullptr	},  // 33
    { GOTO_STATE22,	nullptr	},  // 34
    { GOTO_STATE21,	nullptr	},  // 35
    { GOTO_STATE3,	nullptr	}}; // 36

constinit const uint8_t GOTO_SIZE[37] = {
    19,	// 0
    6,	// 1
    8,	// 2
    6,	// 3
    8,	// 4
    0,	// 5
    0,	// 6
    0,	// 7
    0,	// 8
    2,	// 9
    8,	// 10
    5,	// 11
    2,	// 12
    2,	// 13
    2,	// 14
    2,	// 15
    2,	// 16
    2,	// 17
    6,	// 18
    5,	// 19
    22,	// 20
    2,	// 21
    2,	// 22
    6,	// 23
    6,	// 24
    6,	// 25
    6,	// 26
    6,	// 27
    6,	// 28
    6,	// 29
    6,	// 30
    6,	// 31
    2,	// 32
    2,	// 33
    2,	// 34
    2,	// 35
    5};	// 36

} // namespace

C_JSONScanner::C_JSONScanner(bux::I_Parser &parser):
    bux::C_ScannerImpl<uint8_t,int8_t,bux::C_LexUTF32>(parser)
{
    stateTables(STATES, GOTO_SIZE);
}
