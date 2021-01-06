// This file is fully generated by running parsergen
// with grammer definition file "grammar.txt"

// %HEADERS_FOR_CPP expanded BEGIN
#include "JsonObjs.h"   // JSON object types
#include <iostream>     // std::cerr
// %HEADERS_FOR_CPP expanded END
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
    NID_members  = TID_UB_+1,	// <members>
    NID_value    = TID_UB_+2,	// <value>
    TOKENGEN_UB,
    //---------------------------------------------------
    ENCODED_TOKEN_LB	 = 126
};
#define ZIP_TOKEN(x) (x-(bux::MIN_TOKEN_ID-ENCODED_TOKEN_LB))

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
alphaPrime3[10] = {
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
alphaPrime4[3] = {
    '}',
    ZIP_TOKEN(TID_LEX_String),
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
int findPrime3_0_9	(uint8_t key)	{ return findKey(alphaPrime3,9,key); }
int findPrime4_0_2	(uint8_t key)	{ return findKey(alphaPrime4,2,key); }
int findPrime4_0_3	(uint8_t key)	{ return findKey(alphaPrime4,3,key); }

constinit const bux::U_K2V<uint8_t,uint8_t> mapActionPtr[63] ={
    findPrime3_0_9,	// 0
    findPrime2_4_2,	// 1
    findPrime2_0_10,	// 2
    findPrime4_0_2,	// 3
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
    findPrime4_0_2,	// 16
    findPrime0_0_2,	// 17
    findPrime0_0_2,	// 18
    findPrime0_0_2,	// 19
    findPrime0_0_2,	// 20
    findPrime0_0_2,	// 21
    findPrime0_0_2,	// 22
    findPrime0_0_2,	// 23
    findPrime0_0_2,	// 24
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 25
    isKey<':'>,	// 26
    findPrime1_0_2,	// 27
    findPrime0_0_2,	// 28
    findPrime0_0_2,	// 29
    findPrime0_0_2,	// 30
    findPrime0_0_2,	// 31
    findPrime0_0_2,	// 32
    findPrime1_0_2,	// 33
    findPrime3_0_9,	// 34
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 35
    findPrime3_0_9,	// 36
    isKey<ZIP_TOKEN(TID_LEX_String)>,	// 37
    isKey<ZIP_TOKEN(bux::TID_EOF)>,	// 38
    findPrime0_0_2,	// 39
    findPrime0_0_2,	// 40
    findPrime0_0_2,	// 41
    findPrime2_4_2,	// 42
    findPrime2_0_10,	// 43
    findPrime4_0_2,	// 44
    findPrime1_0_2,	// 45
    findPrime1_0_2,	// 46
    findPrime1_0_2,	// 47
    findPrime1_0_2,	// 48
    findPrime1_0_2,	// 49
    findPrime1_0_2,	// 50
    findPrime1_0_2,	// 51
    isKey<':'>,	// 52
    findPrime1_0_2,	// 53
    findPrime1_0_2,	// 54
    findPrime1_0_2,	// 55
    findPrime0_0_2,	// 56
    findPrime1_0_2,	// 57
    findPrime1_0_2,	// 58
    findPrime3_0_9,	// 59
    findPrime1_0_2,	// 60
    findPrime1_0_2,	// 61
    findPrime1_0_2};	// 62

constinit const int8_t mapActionSizeEx[63] ={
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
    ACTION_REDUCE_MIN + 15,	// 24
    ACTION_REDUCE_MIN + 1,	// 25
    ACTION_SHIFT,	// 26
    ACTION_SHIFT,	// 27
    ACTION_REDUCE_MIN + 9,	// 28
    ACTION_REDUCE_MIN + 7,	// 29
    ACTION_REDUCE_MIN + 3,	// 30
    ACTION_SHIFT,	// 31
    ACTION_REDUCE_MIN + 1,	// 32
    ACTION_SHIFT,	// 33
    ACTION_SHIFT,	// 34
    ACTION_REDUCE_MIN + 4,	// 35
    ACTION_SHIFT,	// 36
    ACTION_SHIFT,	// 37
    ACTION_REDUCE_MIN + 2,	// 38
    ACTION_REDUCE_MIN + 4,	// 39
    ACTION_REDUCE_MIN + 2,	// 40
    ACTION_REDUCE_MIN + 16,	// 41
    ACTION_SHIFT,	// 42
    ACTION_SHIFT,	// 43
    ACTION_SHIFT,	// 44
    ACTION_REDUCE_MIN + 8,	// 45
    ACTION_REDUCE_MIN + 6,	// 46
    ACTION_REDUCE_MIN + 5,	// 47
    ACTION_REDUCE_MIN + 11,	// 48
    ACTION_REDUCE_MIN + 12,	// 49
    ACTION_REDUCE_MIN + 10,	// 50
    ACTION_REDUCE_MIN + 13,	// 51
    ACTION_SHIFT,	// 52
    ACTION_REDUCE_MIN + 9,	// 53
    ACTION_REDUCE_MIN + 7,	// 54
    ACTION_REDUCE_MIN + 3,	// 55
    ACTION_SHIFT,	// 56
    ACTION_REDUCE_MIN + 1,	// 57
    ACTION_SHIFT,	// 58
    ACTION_SHIFT,	// 59
    ACTION_REDUCE_MIN + 4,	// 60
    ACTION_REDUCE_MIN + 2,	// 61
    ACTION_REDUCE_MIN + 14};	// 62

constinit const bux::C_KVPair<uint8_t,uint8_t>
L2S_Table0[] ={
    {',',	34},
    {']',	39}},
L2S_Table1[] ={
    {',',	34},
    {']',	60}},
L2S_Table2[] ={
    {',',	37},
    {'}',	40}},
L2S_Table3[] ={
    {',',	37},
    {'}',	61}},
L2S_Table4[] ={
    {'-',	13},
    {'[',	14},
    {']',	30},
    {'{',	16},
    {ZIP_TOKEN(TID_LEX_Float),	17},
    {ZIP_TOKEN(TID_LEX_Num),	18},
    {ZIP_TOKEN(TID_LEX_String),	19},
    {ZIP_TOKEN(TID_KEYWORD_false),	20},
    {ZIP_TOKEN(TID_KEYWORD_null),	21},
    {ZIP_TOKEN(TID_KEYWORD_true),	22},
    {ZIP_TOKEN(NID_elements),	31},
    {ZIP_TOKEN(NID_value),	24}},
L2S_Table5[] ={
    {'-',	13},
    {'[',	14},
    {']',	55},
    {'{',	16},
    {ZIP_TOKEN(TID_LEX_Float),	17},
    {ZIP_TOKEN(TID_LEX_Num),	18},
    {ZIP_TOKEN(TID_LEX_String),	19},
    {ZIP_TOKEN(TID_KEYWORD_false),	20},
    {ZIP_TOKEN(TID_KEYWORD_null),	21},
    {ZIP_TOKEN(TID_KEYWORD_true),	22},
    {ZIP_TOKEN(NID_elements),	56},
    {ZIP_TOKEN(NID_value),	24}},
L2S_Table6[] ={
    {'-',	13},
    {'[',	14},
    {'{',	16},
    {ZIP_TOKEN(TID_LEX_Float),	17},
    {ZIP_TOKEN(TID_LEX_Num),	18},
    {ZIP_TOKEN(TID_LEX_String),	19},
    {ZIP_TOKEN(TID_KEYWORD_false),	20},
    {ZIP_TOKEN(TID_KEYWORD_null),	21},
    {ZIP_TOKEN(TID_KEYWORD_true),	22},
    {ZIP_TOKEN(NID_value),	41}},
L2S_Table7[] ={
    {'-',	42},
    {'[',	43},
    {'{',	44},
    {ZIP_TOKEN(TID_LEX_Float),	45},
    {ZIP_TOKEN(TID_LEX_Num),	46},
    {ZIP_TOKEN(TID_LEX_String),	47},
    {ZIP_TOKEN(TID_KEYWORD_false),	48},
    {ZIP_TOKEN(TID_KEYWORD_null),	49},
    {ZIP_TOKEN(TID_KEYWORD_true),	50},
    {ZIP_TOKEN(NID_value),	62}},
L2S_Table8[] ={
    {'}',	32},
    {ZIP_TOKEN(TID_LEX_String),	26},
    {ZIP_TOKEN(NID_members),	33}},
L2S_Table9[] ={
    {'}',	57},
    {ZIP_TOKEN(TID_LEX_String),	26},
    {ZIP_TOKEN(NID_members),	58}};

constinit const struct C_MapGoto {
    bux::U_K2V<uint8_t,uint8_t> m_k2v;
    uint8_t	m_curState;
    int8_t	m_nextStateEx;
}   mapGoto[22] ={
    {findPrime3_0_10,	0,	1},
    {findPrime2_4_2,	1,	11},
    {findPrime2_0_12,	2,	13},
    {findPrime4_0_3,	3,	25},
    {findPrime2_4_2,	13,	28},
    {L2S_Table4,	14,	-12},
    {L2S_Table8,	16,	-3},
    {findPrime0_0_2,	23,	34},
    {isKey<':'>,	26,	36},
    {findPrime1_0_2,	27,	37},
    {L2S_Table0,	31,	-2},
    {L2S_Table2,	33,	-2},
    {L2S_Table6,	34,	-10},
    {findPrime3_0_10,	36,	42},
    {isKey<ZIP_TOKEN(TID_LEX_String)>,	37,	52},
    {findPrime2_4_2,	42,	53},
    {L2S_Table5,	43,	-12},
    {L2S_Table9,	44,	-3},
    {isKey<':'>,	52,	59},
    {L2S_Table1,	56,	-2},
    {L2S_Table3,	58,	-2},
    {L2S_Table7,	59,	-10}};

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
//  <members> ::= $String : <value>
{
    json::object t;
    t.try_emplace(bux::unlex<std::string>(_geT_(0)), bux::unlex<json::value>(_geT_(2)));
    _reT_ = bux::createLex(std::move(t));
}

void _reduce_14(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <members> ::= <members> , $String : <value>
{
    bux::unlex<json::object>(_geT_(0)).try_emplace(bux::unlex<std::string>(_geT_(2)), bux::unlex<json::value>(_geT_(4)));
    _reT_ = _geT_(0);
}

void _reduce_15(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
//  <elements> ::= <value>
{
    json::array t;
    t.emplace_back(bux::unlex<json::value>(_geT_(0)));
    _reT_ = bux::createLex(std::move(t));
}

void _reduce_16(bux::LR1::C_Parser &, const F_GetProduced &_geT_, C_RetLval _reT_)
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
} constinit const prodInfo[17] ={
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
{_reduce_13,	ZIP_TOKEN(NID_members), 3},	// 13: <members> ::= $String : <value>
{_reduce_14,	ZIP_TOKEN(NID_members), 5},	// 14: <members> ::= <members> , $String : <value>
{_reduce_15,	ZIP_TOKEN(NID_elements), 1},	// 15: <elements> ::= <value>
{_reduce_16,	ZIP_TOKEN(NID_elements), 3} 	// 16: <elements> ::= <elements> , <value>
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
    C_ParserPolicy(): I_ParserPolicy(TOKENGEN_UB+2) {}

    // Implement I_ParserPolicy
    size_t action(bux::T_StateID state, bux::T_LexID token) const override;
    size_t getAcceptId() const override;
    bool getTokenName(bux::T_LexID token, std::string &name) const override;
    bux::T_StateID nextState(bux::T_StateID state, bux::T_LexID lex) const override;
    void getReduceInfo(size_t id, C_ReduceInfo &info) const override;
    void onError(bux::LR1::C_Parser &_paRSeR_, const bux::C_SourcePos &pos, const std::string &message) const override;
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
    static constinit char const *const NAMES[10] = {
        "$Float",
        "$Num",
        "$Spaces",
        "$String",
        "\"false\"",
        "\"null\"",
        "\"true\"",
        "<elements>",
        "<members>",
        "<value>"};
    if (bux::TOKENGEN_LB <= token && token < bux::TOKENGEN_LB + 10)
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

    auto end = mapGoto + 22;
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

void C_ParserPolicy::onError(bux::LR1::C_Parser &, const bux::C_SourcePos &pos, const std::string &message) const
{
    // User-defined %ON_ERROR begins
    std::cerr <<'(' <<pos.m_Line <<',' <<pos.m_Col <<"): " <<message <<'\n';
    if (++errors > 10)
        RUNTIME_ERROR("Too many errors !");
    // User-defined %ON_ERROR ends
}

} // namespace

namespace json {

// %SCOPED_CPP_HEAD expanded BEGIN
int errors =0;
// %SCOPED_CPP_HEAD expanded END

C_Parser::C_Parser(): bux::LR1::C_Parser(g_policy)
{
}

} // namespace json
