// This file is fully generated by running scannergen v1.5.2

#ifndef ScannerH
#define ScannerH

#include <bux/ImplScanner.h>

class C_JSONScanner: public bux::C_ScannerImpl<uint8_t,int8_t,bux::C_LexUTF32>
{
public:
    C_JSONScanner(bux::I_Parser &parser);
};

#endif // ScannerH
