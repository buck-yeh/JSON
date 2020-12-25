#include "ParseJSON.h"      // json::parse()
//----------------------------------------------------
#include "bux/LogStream.h"  // HRTN()
#include <iostream>         // std::cin, std::cerr
#include <fstream>          // std::ifstream
#include <filesystem>       // std::filesystem::*

namespace fs = std::filesystem;

enum
{
    MAIN_SUCCESS        = 0,
    MAIN_PARSE_ERROR,
    MAIN_CAUGHT,
    MAIN_FILE_NOT_EXIST
};

int parseUnparse(std::istream &in, std::string &outStr, size_t indent)
{
    try
    {
        // Output the result
        std::ostringstream out;
        dump(json::parse(in), out, indent);
        outStr = out.str();
        return MAIN_SUCCESS;
    }
    catch (const std::exception &t)
    {
        std::cerr <<HRTN(t) <<": " <<t.what() <<" ... \r\n";
        return MAIN_CAUGHT;
    }
    catch (...)
    {
        std::cerr <<"Unknown exception\r\n";
        return MAIN_CAUGHT;
    }
}

int doTheDance(std::istream &in, size_t indent)
{
    std::string         pass1, pass2;
    auto err = parseUnparse(in, pass1, indent);
    if (err != MAIN_SUCCESS)
        return err;

    std::cout <<"PASS-1 ok!\n";
    std::istringstream  in2{pass1};
    err = parseUnparse(in2, pass2, indent);
    if (err != MAIN_SUCCESS)
        return err;

    if (pass1 != pass2)
        std::cout <<"PASS-1:\t" <<pass1 <<"\n"
                    "PASS-2:\t";

    std::cout <<pass2 <<'\n';
    return err;
}

int main(int argc, char* argv[])
{
    size_t indent{4};
    if (argc <= 1)
        return doTheDance(std::cin, indent);
    else for (int i = 1; i < argc; ++i)
    {
        const char *const arg = argv[i];
        if (arg[0] == '-' && arg[1] == 'i')
        {
            indent = strtoul(arg+2, {}, 0);
            continue;
        }
        if (!fs::exists(arg))
        {
            std::cerr <<"No such file " <<arg <<'\n';
            return MAIN_FILE_NOT_EXIST;
        }
        std::ifstream   in(arg);
        if (const auto ret = doTheDance(in, indent))
            return ret;
    }
    return 0;
}
