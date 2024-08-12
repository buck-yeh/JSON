// This file is fully generated by running parsergen v1.7.5
// with grammer definition file "grammar.txt"

// Grammar %HEADERS_FOR_CPP begins
#include "JsonObjs.h"   // JSON object types
// Grammar %HEADERS_FOR_CPP ends
#include "Parser.h"
#include "ParserIdDef.h"
#include <bux/ImplLR1.h>
#include <bux/XException.h>

namespace {

using namespace bux::LR1;
using namespace json;

//
//   Generated Constants
//
enum
{
    NID_elements = TID_UB_+0,	// <elements>
    NID_member   = TID_UB_+1,	// <member>
    NID_members  = TID_UB_+2,	// <members>
    NID_value    = TID_UB_+3,	// <value>
    TOKENGEN_UB,
    //---------------------------------------------------
    ENCODED_TOKEN_LB	 = 126
};
constexpr auto ZIP_TOKEN(auto x) { return x-(bux::MIN_TOKEN_ID-ENCODED_TOKEN_LB); }

constinit const uint8_t
alphaPrime0[2] = {
    ',',
    ']'},
alphaPrime1[2] = {
    ',',
    '}'},
alphaPrime2[12] = {
    '-',
    '[',
    ']',
    '{',
    ZIP_TOKEN(TID_LEX_Float),
    ZIP_TOKEN(TID_LEX_Num),
    ZIP_TOKEN(TID_LEX_String),
    ZIP_TOKEN(TID_KEYWORD_false),
    ZIP_TOKEN(TID_KEYWORD_null),
    ZIP_TOKEN(TID_KEYWORD_true),
    ZIP_TOKEN(NID_elements),
    ZIP_TOKEN(NID_value)},
alphaPrime3[11] = {
    '-',
    '[',
    '{',
    ZIP_TOKEN(TID_LEX_Error),
    ZIP_TOKEN(TID_LEX_Float),
    ZIP_TOKEN(TID_LEX_Num),
    ZIP_TOKEN(TID_LEX_String),
    ZIP_TOKEN(TID_KEYWORD_false),
    ZIP_TOKEN(TID_KEYWORD_null),
    ZIP_TOKEN(TID_KEYWORD_true),
    ZIP_TOKEN(NID_value)},
alphaPrime4[10] = {
    '-',
    '[',
    '{',
    ZIP_TOKEN(TID_LEX_Float),
    ZIP_TOKEN(TID_LEX_Num),
    ZIP_TOKEN(TID_LEX_String),
    ZIP_TOKEN(TID_KEYWORD_false),
    ZIP_TOKEN(TID_KEYWORD_null),
    ZIP_TOKEN(TID_KEYWORD_true),
    ZIP_TOKEN(NID_value)},
alphaPrime5[2] = {
    ':',
    ZIP_TOKEN(TID_LEX_Error)},
alphaPrime6[5] = {
    '}',
    ZIP_TOKEN(TID_LEX_Error),
    ZIP_TOKEN(TID_LEX_String),
    ZIP_TOKEN(NID_member),
    ZIP_TOKEN(NID_members)};

template<uint8_t KEY> int isKey(uint8_t key)
{
    return key == KEY? 0: -1;
}

int findKey(const uint8_t *klist, int n, uint8_t key)
{
    for (int i = 0; i < n; ++i)
         if (key == klist[i])
             return i;
    return -1;
}

int findPrime0_0_2	(uint8_t key)	{ return findKey(alphaPrime0,2,key); }
int findPrime1_0_2	(uint8_t key)	{ return findKey(alphaPrime1,2,key); }
int findPrime2_0_10	(uint8_t key)	{ return findKey(alphaPrime2,10,key); }
int findPrime2_0_12	(uint8_t key)	{ return findKey(alphaPrime2,12,key); }
int findPrime2_4_2	(uint8_t key)	{ return findKey(alphaPrime2+4,2,key); }
int findPrime3_0_10	(uint8_t key)	{ return findKey(alphaPrime3,10,key); }
int findPrime3_0_11	(uint8_t key)	{ return findKey(alphaPrime3,11,key); }
int findPrime4_0_10	(uint8_t key)	{ return findKey(alphaPrime4,10,key); }
int findPrime4_0_9	(uint8_t key)	{ return findKey(alphaPrime4,9,key); }
int findPrime5_0_2	(uint8_t key)	{ return findKey(alphaPrime5,2,key); }
int findPrime6_0_3	(uint8_t key)	{ return findKey(alphaPrime6,3,key); }
int findPrime6_0_5	(uint8_t key)	{ return findKey(alphaPrime6,5,key); }

constinit const bux::C_KVPair<uint8_t,uint8_t>
L2A_Table0[] ={
    {',',	ACTION_REDUCE_MIN + 15},
    {'}',	ACTION_REDUCE_MIN + 15},
    {ZIP_TOKEN(TID_LEX_Error),	ACTION_SHIFT},
    {ZIP_TOKEN(TID_LEX_String),	ACTION_SHIFT}};

constinit const bux::U_K2V<uint8_t,uint8_t> mapActionPtr[86] ={
    findPrime4_0_9,	// 0
    findPrime2_4_2,	// 1
    findPrime2_0_10,	// 2
    findPrime6_0_3,	// 3
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 4
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 5
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 6
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 7
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 8
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 9
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 10
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 11
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 12
    findPrime2_4_2,	// 13
    findPrime2_0_10,	// 14
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 15
    findPrime6_0_3,	// 16
    findPrime0_0_2,	// 17
    findPrime0_0_2,	// 18
    findPrime0_0_2,	// 19
    findPrime0_0_2,	// 20
    findPrime0_0_2,	// 21
    findPrime0_0_2,	// 22
    findPrime0_0_2,	// 23
    findPrime0_0_2,	// 24
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 25
    findPrime4_0_9,	// 26
    findPrime5_0_2,	// 27
    findPrime1_0_2,	// 28
    findPrime1_0_2,	// 29
    findPrime0_0_2,	// 30
    findPrime0_0_2,	// 31
    findPrime0_0_2,	// 32
    findPrime0_0_2,	// 33
    findPrime0_0_2,	// 34
    findPrime1_0_2,	// 35
    findPrime3_0_10,	// 36
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 37
    findPrime2_4_2,	// 38
    findPrime2_0_10,	// 39
    findPrime6_0_3,	// 40
    isKey<':'>,	// 41
    isKey<':'>,	// 42
    isKey<':'>,	// 43
    isKey<':'>,	// 44
    isKey<':'>,	// 45
    isKey<':'>,	// 46
    isKey<':'>,	// 47
    findPrime3_0_10,	// 48
    findPrime1_0_2,	// 49
    L2A_Table0,	// 50
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 51
    findPrime0_0_2,	// 52
    findPrime0_0_2,	// 53
    findPrime0_0_2,	// 54
    findPrime0_0_2,	// 55
    isKey<':'>,	// 56
    isKey<':'>,	// 57
    isKey<':'>,	// 58
    findPrime0_0_2,	// 59
    isKey<':'>,	// 60
    findPrime1_0_2,	// 61
    findPrime4_0_9,	// 62
    findPrime2_4_2,	// 63
    findPrime2_0_10,	// 64
    findPrime6_0_3,	// 65
    findPrime1_0_2,	// 66
    findPrime1_0_2,	// 67
    findPrime1_0_2,	// 68
    findPrime1_0_2,	// 69
    findPrime1_0_2,	// 70
    findPrime1_0_2,	// 71
    findPrime1_0_2,	// 72
    findPrime1_0_2,	// 73
    findPrime1_0_2,	// 74
    isKey<':'>,	// 75
    isKey<':'>,	// 76
    findPrime1_0_2,	// 77
    findPrime1_0_2,	// 78
    findPrime1_0_2,	// 79
    findPrime1_0_2,	// 80
    findPrime0_0_2,	// 81
    findPrime1_0_2,	// 82
    findPrime1_0_2,	// 83
    findPrime1_0_2,	// 84
    findPrime1_0_2};	// 85

constinit const int8_t mapActionSizeEx[86] ={
    ACTION_SHIFT,	// 0
    ACTION_SHIFT,	// 1
    ACTION_SHIFT,	// 2
    ACTION_SHIFT,	// 3
    ACTION_REDUCE_MIN + 8,	// 4
    ACTION_REDUCE_MIN + 6,	// 5
    ACTION_REDUCE_MIN + 5,	// 6
    ACTION_REDUCE_MIN + 11,	// 7
    ACTION_REDUCE_MIN + 12,	// 8
    ACTION_REDUCE_MIN + 10,	// 9
    ACTION_ACCEPT,	// 10
    ACTION_REDUCE_MIN + 9,	// 11
    ACTION_REDUCE_MIN + 7,	// 12
    ACTION_SHIFT,	// 13
    ACTION_SHIFT,	// 14
    ACTION_REDUCE_MIN + 3,	// 15
    ACTION_SHIFT,	// 16
    ACTION_REDUCE_MIN + 8,	// 17
    ACTION_REDUCE_MIN + 6,	// 18
    ACTION_REDUCE_MIN + 5,	// 19
    ACTION_REDUCE_MIN + 11,	// 20
    ACTION_REDUCE_MIN + 12,	// 21
    ACTION_REDUCE_MIN + 10,	// 22
    ACTION_SHIFT,	// 23
    ACTION_REDUCE_MIN + 20,	// 24
    ACTION_REDUCE_MIN + 1,	// 25
    ACTION_SHIFT,	// 26
    ACTION_SHIFT,	// 27
    ACTION_REDUCE_MIN + 13,	// 28
    ACTION_SHIFT,	// 29
    ACTION_REDUCE_MIN + 9,	// 30
    ACTION_REDUCE_MIN + 7,	// 31
    ACTION_REDUCE_MIN + 3,	// 32
    ACTION_SHIFT,	// 33
    ACTION_REDUCE_MIN + 1,	// 34
    ACTION_SHIFT,	// 35
    ACTION_SHIFT,	// 36
    ACTION_REDUCE_MIN + 4,	// 37
    ACTION_SHIFT,	// 38
    ACTION_SHIFT,	// 39
    ACTION_SHIFT,	// 40
    ACTION_REDUCE_MIN + 8,	// 41
    ACTION_REDUCE_MIN + 6,	// 42
    ACTION_REDUCE_MIN + 5,	// 43
    ACTION_REDUCE_MIN + 11,	// 44
    ACTION_REDUCE_MIN + 12,	// 45
    ACTION_REDUCE_MIN + 10,	// 46
    ACTION_SHIFT,	// 47
    ACTION_SHIFT,	// 48
    ACTION_REDUCE_MIN + 18,	// 49
    -4,	// 50
    ACTION_REDUCE_MIN + 2,	// 51
    ACTION_REDUCE_MIN + 4,	// 52
    ACTION_REDUCE_MIN + 2,	// 53
    ACTION_REDUCE_MIN + 22,	// 54
    ACTION_REDUCE_MIN + 21,	// 55
    ACTION_REDUCE_MIN + 9,	// 56
    ACTION_REDUCE_MIN + 7,	// 57
    ACTION_REDUCE_MIN + 3,	// 58
    ACTION_SHIFT,	// 59
    ACTION_REDUCE_MIN + 1,	// 60
    ACTION_SHIFT,	// 61
    ACTION_SHIFT,	// 62
    ACTION_SHIFT,	// 63
    ACTION_SHIFT,	// 64
    ACTION_SHIFT,	// 65
    ACTION_REDUCE_MIN + 17,	// 66
    ACTION_REDUCE_MIN + 8,	// 67
    ACTION_REDUCE_MIN + 6,	// 68
    ACTION_REDUCE_MIN + 5,	// 69
    ACTION_REDUCE_MIN + 11,	// 70
    ACTION_REDUCE_MIN + 12,	// 71
    ACTION_REDUCE_MIN + 10,	// 72
    ACTION_REDUCE_MIN + 16,	// 73
    ACTION_REDUCE_MIN + 14,	// 74
    ACTION_REDUCE_MIN + 4,	// 75
    ACTION_REDUCE_MIN + 2,	// 76
    ACTION_REDUCE_MIN + 19,	// 77
    ACTION_REDUCE_MIN + 9,	// 78
    ACTION_REDUCE_MIN + 7,	// 79
    ACTION_REDUCE_MIN + 3,	// 80
    ACTION_SHIFT,	// 81
    ACTION_REDUCE_MIN + 1,	// 82
    ACTION_SHIFT,	// 83
    ACTION_REDUCE_MIN + 4,	// 84
    ACTION_REDUCE_MIN + 2};	// 85

constinit const bux::C_KVPair<uint8_t,uint8_t>
L2S_Table0[] ={
    {',',	36},
    {']',	52}},
L2S_Table1[] ={
    {',',	36},
    {']',	75}},
L2S_Table2[] ={
    {',',	36},
    {']',	84}},
L2S_Table3[] ={
    {',',	50},
    {'}',	53}},
L2S_Table4[] ={
    {',',	50},
    {'}',	76}},
L2S_Table5[] ={
    {',',	50},
    {'}',	85}},
L2S_Table6[] ={
    {'-',	13},
    {'[',	14},
    {']',	32},
    {'{',	16},
    {ZIP_TOKEN(TID_LEX_Float),	17},
    {ZIP_TOKEN(TID_LEX_Num),	18},
    {ZIP_TOKEN(TID_LEX_String),	19},
    {ZIP_TOKEN(TID_KEYWORD_false),	20},
    {ZIP_TOKEN(TID_KEYWORD_null),	21},
    {ZIP_TOKEN(TID_KEYWORD_true),	22},
    {ZIP_TOKEN(NID_elements),	33},
    {ZIP_TOKEN(NID_value),	24}},
L2S_Table7[] ={
    {'-',	13},
    {'[',	14},
    {']',	58},
    {'{',	16},
    {ZIP_TOKEN(TID_LEX_Float),	17},
    {ZIP_TOKEN(TID_LEX_Num),	18},
    {ZIP_TOKEN(TID_LEX_String),	19},
    {ZIP_TOKEN(TID_KEYWORD_false),	20},
    {ZIP_TOKEN(TID_KEYWORD_null),	21},
    {ZIP_TOKEN(TID_KEYWORD_true),	22},
    {ZIP_TOKEN(NID_elements),	59},
    {ZIP_TOKEN(NID_value),	24}},
L2S_Table8[] ={
    {'-',	13},
    {'[',	14},
    {']',	80},
    {'{',	16},
    {ZIP_TOKEN(TID_LEX_Float),	17},
    {ZIP_TOKEN(TID_LEX_Num),	18},
    {ZIP_TOKEN(TID_LEX_String),	19},
    {ZIP_TOKEN(TID_KEYWORD_false),	20},
    {ZIP_TOKEN(TID_KEYWORD_null),	21},
    {ZIP_TOKEN(TID_KEYWORD_true),	22},
    {ZIP_TOKEN(NID_elements),	81},
    {ZIP_TOKEN(NID_value),	24}},
L2S_Table9[] ={
    {'-',	13},
    {'[',	14},
    {'{',	16},
    {ZIP_TOKEN(TID_LEX_Error),	54},
    {ZIP_TOKEN(TID_LEX_Float),	17},
    {ZIP_TOKEN(TID_LEX_Num),	18},
    {ZIP_TOKEN(TID_LEX_String),	19},
    {ZIP_TOKEN(TID_KEYWORD_false),	20},
    {ZIP_TOKEN(TID_KEYWORD_null),	21},
    {ZIP_TOKEN(TID_KEYWORD_true),	22},
    {ZIP_TOKEN(NID_value),	55}},
L2S_Table10[] ={
    {'-',	63},
    {'[',	64},
    {'{',	65},
    {ZIP_TOKEN(TID_LEX_Float),	67},
    {ZIP_TOKEN(TID_LEX_Num),	68},
    {ZIP_TOKEN(TID_LEX_String),	69},
    {ZIP_TOKEN(TID_KEYWORD_false),	70},
    {ZIP_TOKEN(TID_KEYWORD_null),	71},
    {ZIP_TOKEN(TID_KEYWORD_true),	72},
    {ZIP_TOKEN(NID_value),	77}},
L2S_Table11[] ={
    {'}',	34},
    {ZIP_TOKEN(TID_LEX_Error),	26},
    {ZIP_TOKEN(TID_LEX_String),	27},
    {ZIP_TOKEN(NID_member),	28},
    {ZIP_TOKEN(NID_members),	35}},
L2S_Table12[] ={
    {'}',	60},
    {ZIP_TOKEN(TID_LEX_Error),	26},
    {ZIP_TOKEN(TID_LEX_String),	27},
    {ZIP_TOKEN(NID_member),	28},
    {ZIP_TOKEN(NID_members),	61}},
L2S_Table13[] ={
    {'}',	82},
    {ZIP_TOKEN(TID_LEX_Error),	26},
    {ZIP_TOKEN(TID_LEX_String),	27},
    {ZIP_TOKEN(NID_member),	28},
    {ZIP_TOKEN(NID_members),	83}},
L2S_Table14[] ={
    {ZIP_TOKEN(TID_LEX_Error),	26},
    {ZIP_TOKEN(TID_LEX_String),	27},
    {ZIP_TOKEN(NID_member),	74}};

constinit const struct C_MapGoto {
    bux::U_K2V<uint8_t,uint8_t> m_k2v;
    uint8_t	m_curState;
    int8_t	m_nextStateEx;
}   mapGoto[28] ={
    {findPrime4_0_10,	0,	1},
    {findPrime2_4_2,	1,	11},
    {findPrime2_0_12,	2,	13},
    {findPrime6_0_5,	3,	25},
    {findPrime2_4_2,	13,	30},
    {L2S_Table6,	14,	-12},
    {L2S_Table11,	16,	-5},
    {findPrime0_0_2,	23,	36},
    {findPrime4_0_10,	26,	38},
    {findPrime5_0_2,	27,	48},
    {findPrime1_0_2,	29,	50},
    {L2S_Table0,	33,	-2},
    {L2S_Table3,	35,	-2},
    {L2S_Table9,	36,	-11},
    {findPrime2_4_2,	38,	56},
    {L2S_Table7,	39,	-12},
    {L2S_Table12,	40,	-5},
    {isKey<':'>,	47,	62},
    {findPrime3_0_11,	48,	63},
    {L2S_Table14,	50,	-3},
    {L2S_Table1,	59,	-2},
    {L2S_Table4,	61,	-2},
    {L2S_Table10,	62,	-10},
    {findPrime2_4_2,	63,	78},
    {L2S_Table8,	64,	-12},
    {L2S_Table13,	65,	-5},
    {L2S_Table2,	81,	-2},
    {L2S_Table5,	83,	-2}};

void _reduce_0(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <@> ::= <value>
{
    _reT_ = _geT_(0);
}

void _reduce_1(bux::LR1::C_Parser &, const F_GetProduced &, C_RetLval _reT_)
//  <value> ::= { }
{
    _reT_ = bux::createLex<json::value>(json::object());
}

void _reduce_2(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <value> ::= { <members> }
{
    _reT_ = bux::createLex<json::value>(bux::unlex<json::object>(_geT_(1)));
}

void _reduce_3(bux::LR1::C_Parser &, const F_GetProduced &, C_RetLval _reT_)
//  <value> ::= [ ]
{
    _reT_ = bux::createLex<json::value>(json::array());
}

void _reduce_4(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <value> ::= [ <elements> ]
{
    _reT_ = bux::createLex<json::value>(bux::unlex<json::array>(_geT_(1)));
}

void _reduce_5(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <value> ::= $String
{
    _reT_ = bux::createLex<json::value>(bux::unlex<std::string>(_geT_(0)));
}

void _reduce_6(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <value> ::= $Num
{
    _reT_ = bux::createLex<json::value>(bux::unlex<jint>(_geT_(0)));
}

void _reduce_7(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <value> ::= - $Num
{
    auto &t = bux::unlex<jint>(_geT_(1));
    t = -t;
    _reT_ = bux::createLex<json::value>(t);
}

void _reduce_8(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <value> ::= $Float
{
    _reT_ = bux::createLex<json::value>(bux::unlex<jfloat>(_geT_(0)));
}

void _reduce_9(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <value> ::= - $Float
{
    auto &t = bux::unlex<jfloat>(_geT_(1));
    t = -t;
    _reT_ = bux::createLex<json::value>(t);
}

void _reduce_10(bux::LR1::C_Parser &, const F_GetProduced &, C_RetLval _reT_)
//  <value> ::= true
{
    _reT_ = bux::createLex<json::value>(true);
}

void _reduce_11(bux::LR1::C_Parser &, const F_GetProduced &, C_RetLval _reT_)
//  <value> ::= false
{
    _reT_ = bux::createLex<json::value>(false);
}

void _reduce_12(bux::LR1::C_Parser &, const F_GetProduced &, C_RetLval _reT_)
//  <value> ::= null
{
    _reT_ = bux::createLex<json::value>();
}

void _reduce_13(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <members> ::= <member>
{
    json::object t;
    auto &src = bux::unlex<std::pair<std::string,json::value>>(_geT_(0));
    t.emplace_back(std::move(src));
    _reT_ = bux::createLex(std::move(t));
}

void _reduce_14(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <members> ::= <members> , <member>
{
    auto &src = bux::unlex<std::pair<std::string,json::value>>(_geT_(2));
    bux::unlex<json::object>(_geT_(0)).emplace_back(std::move(src));
    _reT_ = _geT_(0);
}

void _reduce_15(bux::LR1::C_Parser &_paRSeR_, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <members> ::= <members> ,
//  <elements> ::= <elements> , $Error
{
    dynamic_cast<json::C_Parser&>(_paRSeR_).m_context.log(LL_WARNING, _geT_(1), "Superfluous ','");
    _reT_ = _geT_(0);
}

void _reduce_16(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <member> ::= $String : <value>
{
    _reT_ = bux::createLex(std::pair{bux::unlex<std::string>(_geT_(0)), bux::unlex<json::value>(_geT_(2))});
}

void _reduce_17(bux::LR1::C_Parser &_paRSeR_, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <member> ::= $String : $Error
{
    _paRSeR_.onError(_geT_(2), "Expect <value>");
    _reT_ = bux::createLex(std::pair{bux::unlex<std::string>(_geT_(0)), json::value{}});
}

void _reduce_18(bux::LR1::C_Parser &_paRSeR_, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <member> ::= $String $Error
{
    _paRSeR_.onError(_geT_(1), "Expect ':'");
    _reT_ = bux::createLex(std::pair{bux::unlex<std::string>(_geT_(0)), json::value{}});
}

void _reduce_19(bux::LR1::C_Parser &_paRSeR_, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <member> ::= $Error <value> : <value>
{
    _paRSeR_.onError(_geT_(0), "Only string key allowed");
    _reT_ = bux::createLex(std::pair{std::string{"NonStrKey__"}, bux::unlex<json::value>(_geT_(3))});
}

void _reduce_20(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <elements> ::= <value>
{
    json::array t;
    t.emplace_back(bux::unlex<json::value>(_geT_(0)));
    _reT_ = bux::createLex(std::move(t));
}

void _reduce_21(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <elements> ::= <elements> , <value>
{
    bux::unlex<json::array>(_geT_(0)).emplace_back(bux::unlex<json::value>(_geT_(2)));
    _reT_ = _geT_(0);
}

struct C_ProductionInfo
{
    void            (*m_pAction)(bux::LR1::C_Parser&,const F_GetProduced&,C_RetLval);
    uint8_t         m_ReducedID;
    uint8_t         m_PopLength;
} constinit const prodInfo[23] ={
{_reduce_0, 	ZIP_TOKEN(bux::ROOT_NID), 1},	// 0: <@> ::= <value>
{_reduce_1, 	ZIP_TOKEN(NID_value), 2},	// 1: <value> ::= { }
{_reduce_2, 	ZIP_TOKEN(NID_value), 3},	// 2: <value> ::= { <members> }
{_reduce_3, 	ZIP_TOKEN(NID_value), 2},	// 3: <value> ::= [ ]
{_reduce_4, 	ZIP_TOKEN(NID_value), 3},	// 4: <value> ::= [ <elements> ]
{_reduce_5, 	ZIP_TOKEN(NID_value), 1},	// 5: <value> ::= $String
{_reduce_6, 	ZIP_TOKEN(NID_value), 1},	// 6: <value> ::= $Num
{_reduce_7, 	ZIP_TOKEN(NID_value), 2},	// 7: <value> ::= - $Num
{_reduce_8, 	ZIP_TOKEN(NID_value), 1},	// 8: <value> ::= $Float
{_reduce_9, 	ZIP_TOKEN(NID_value), 2},	// 9: <value> ::= - $Float
{_reduce_10,	ZIP_TOKEN(NID_value), 1},	// 10: <value> ::= true
{_reduce_11,	ZIP_TOKEN(NID_value), 1},	// 11: <value> ::= false
{_reduce_12,	ZIP_TOKEN(NID_value), 1},	// 12: <value> ::= null
{_reduce_13,	ZIP_TOKEN(NID_members), 1},	// 13: <members> ::= <member>
{_reduce_14,	ZIP_TOKEN(NID_members), 3},	// 14: <members> ::= <members> , <member>
{_reduce_15,	ZIP_TOKEN(NID_members), 2},	// 15: <members> ::= <members> ,
{_reduce_16,	ZIP_TOKEN(NID_member), 3},	// 16: <member> ::= $String : <value>
{_reduce_17,	ZIP_TOKEN(NID_member), 3},	// 17: <member> ::= $String : $Error
{_reduce_18,	ZIP_TOKEN(NID_member), 2},	// 18: <member> ::= $String $Error
{_reduce_19,	ZIP_TOKEN(NID_member), 4},	// 19: <member> ::= $Error <value> : <value>
{_reduce_20,	ZIP_TOKEN(NID_elements), 1},	// 20: <elements> ::= <value>
{_reduce_21,	ZIP_TOKEN(NID_elements), 3},	// 21: <elements> ::= <elements> , <value>
{_reduce_15,	ZIP_TOKEN(NID_elements), 3} 	// 22: <elements> ::= <elements> , $Error
};

struct C_ActionTraits
{
    template<class T1, class T2>
    static uint8_t map(T1 &&t1, T2 &&) { return static_cast<uint8_t>(t1); }
    static uint8_t valueError() { return ACTION_ERROR; }
};

struct C_ShiftTraits
{
    template<class T1, class T2>
    static uint8_t map(T1 &&t1, T2 &&t2) { return static_cast<uint8_t>(t1+t2); }
    static uint8_t valueError() { RUNTIME_ERROR("SHIFT ERROR"); }
};

//
//   Generated Parser Policy
//
class C_ParserPolicy: public I_ParserPolicy
{
public:

    // Ctor
    C_ParserPolicy(): I_ParserPolicy(TID_LEX_Error) {}

    // Implement I_ParserPolicy
    size_t action(bux::T_StateID state, bux::T_LexID token) const override;
    size_t getAcceptId() const override;
    bool getTokenName(bux::T_LexID token, std::string &name) const override;
    bux::T_StateID nextState(bux::T_StateID state, bux::T_LexID lex) const override;
    void getReduceInfo(size_t id, C_ReduceInfo &info) const override;
    void onError(bux::LR1::C_Parser &_paRSeR_, const bux::C_SourcePos &pos, std::string_view message) const override;
}   g_policy;

size_t C_ParserPolicy::action(bux::T_StateID state, bux::T_LexID input) const
{
    if (input >= bux::MIN_TOKEN_ID)
        input = ZIP_TOKEN(input);
    else if (input >= ENCODED_TOKEN_LB)
        return ACTION_ERROR;

    return index2value<uint8_t,uint8_t,int8_t,C_ActionTraits>(mapActionPtr[state], mapActionSizeEx[state], input);
}

size_t C_ParserPolicy::getAcceptId() const
{
    return 0;
}

bool C_ParserPolicy::getTokenName(bux::T_LexID token, std::string &name) const
{
    static constinit char const *const NAMES[12] = {
        "$Error",
        "$Float",
        "$Num",
        "$Spaces",
        "$String",
        "\"false\"",
        "\"null\"",
        "\"true\"",
        "<elements>",
        "<member>",
        "<members>",
        "<value>"};
    if (bux::TOKENGEN_LB <= token && token < bux::TOKENGEN_LB + 12)
    {
        name = NAMES[token - bux::TOKENGEN_LB];
        return true;
    }
    return false;
}

bux::T_StateID C_ParserPolicy::nextState(bux::T_StateID state, bux::T_LexID input) const
{
    if (input >= bux::MIN_TOKEN_ID)
        input = ZIP_TOKEN(input);
    else if (input >= ENCODED_TOKEN_LB)
        LOGIC_ERROR("Invalid input: state={} input={}", (int)state, printToken(input));

    static constinit const auto end = mapGoto + 28;
    auto found = std::lower_bound(mapGoto, end, state, [](const C_MapGoto &i, bux::T_StateID state_) {
        return i.m_curState < state_;
    });
    if (found != end && found->m_curState == state)
        return index2value<uint8_t,uint8_t,int8_t,C_ShiftTraits>(found->m_k2v, found->m_nextStateEx, input);

    RUNTIME_ERROR("Invalid state: state={} input={}", (int)state, printToken(input));
}

void C_ParserPolicy::getReduceInfo(size_t id, C_ReduceInfo &info) const
{
    const auto &src  = prodInfo[id];
    info.m_ResultID  = src.m_ReducedID + (bux::MIN_TOKEN_ID-ENCODED_TOKEN_LB);
    info.m_PopLength = src.m_PopLength;
    info.m_Reduce    = src.m_pAction;
}

void C_ParserPolicy::onError(bux::LR1::C_Parser &_paRSeR_, const bux::C_SourcePos &pos, std::string_view message) const
{
    // Grammar %ON_ERROR begins
    dynamic_cast<json::C_Parser&>(_paRSeR_).m_context.log(LL_ERROR, pos, message);
    // Grammar %ON_ERROR ends
}

} // namespace

namespace json {

const bux::LR1::I_ParserPolicy &json::C_Parser::policy() { return g_policy; }

} // namespace json
