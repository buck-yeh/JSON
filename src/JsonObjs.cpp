#include "JsonObjs.h"
//--------------------------------------------------------------------
#include "bux/LexBase.h"    // bux::asciiLiteral()
#include <ostream>          // std::ostream

namespace {

//
//      In-Module Types
//
class C_ToStr
{
public:

    // Nonvirtuals
    C_ToStr(std::ostream &out, size_t indent = 0): m_out(out), m_indent(indent) {}
    void operator()(std::monostate)         { m_out <<"null"; }
    void operator()(bool y)                 { m_out <<(y?"true":"false"); }
    void operator()(json::jint i)           { m_out <<i; }
    void operator()(json::jfloat d)         { m_out <<d; }
    void operator()(const std::string &s)   { m_out <<'"' <<bux::asciiLiteral(s) <<'"'; }
    void operator()(const json::array &arr);
    void operator()(const json::object &obj);

private:

    // Data
    std::ostream    &m_out;
    const size_t    m_indent;
    size_t          m_base{};
};


//
//      Implement In-Module Classes
//
void C_ToStr::operator()(const json::array &arr)
{
    if (arr.empty())
    {
        m_out <<"[]";
        return;
    }
    m_out <<(m_indent?"[\n":"[ ");
    m_base += m_indent;

    bool first = true;
    for (auto &&i: arr)
    {
        if (first)
            first = false;
        else
            m_out <<(m_base?",\n":", ");

        m_out <<std::string(m_base,' ');
        std::visit(*this,i);
    }
    m_base -= m_indent;
    if (m_indent)
        m_out <<'\n' <<std::string(m_base,' ') <<']';
    else
        m_out <<" ]";
}

void C_ToStr::operator()(const json::object &obj)
{
    if (obj.empty())
    {
        m_out <<"{}";
        return;
    }
    m_out <<(m_indent?"{\n":"{ ");
    m_base += m_indent;

    bool first = true;
    for (auto &i: obj)
    {
        if (first)
            first = false;
        else
            m_out <<(m_base?",\n":", ");

        m_out <<std::string(m_base,' ') <<'"' <<bux::asciiLiteral(i.first) <<"\": ";
        std::visit(*this, i.second);
    }
    m_base -= m_indent;
    if (m_indent)
        m_out <<'\n' <<std::string(m_base,' ') <<'}';
    else
        m_out <<" }";
}

} // namespace

namespace json {

//
//      Functions
//
std::ostream &operator<<(std::ostream &out, const value &src)
{
    std::visit(C_ToStr{out}, src);
    return out;
}

const value &operator/(const value &root, const std::string &key)
{
    for (auto &i: get<object>(root))
        if (i.first == key)
            return i.second;

    RUNTIME_ERROR("Key '{}' not found", key);
}

const value *operator/(const value *root, const std::string &key) noexcept
{
    return root? subvalue(*root, key): nullptr;
}
const value *subvalue(const value &root, const std::string &key) noexcept
{
    if (holds_alternative<object>(root))
    {
        for (auto &i: get<object>(root))
            if (i.first == key)
                return &i.second;
    }
    return nullptr;
}

void dump(const value &src, std::ostream &out, size_t indent)
{
    std::visit(C_ToStr{out,indent}, src);
}

void dump(const array &src, std::ostream &out, size_t indent)
{
    C_ToStr{out,indent}(src);
}

void dump(const object &src, std::ostream &out, size_t indent)
{
    C_ToStr{out,indent}(src);
}

} // namespace json
