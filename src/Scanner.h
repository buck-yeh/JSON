// This file is fully generated by running scannergen
// Read ScannerGen.chm for further info.

#ifndef ScannerH
#define ScannerH

#include "ImplScanner.h"

class C_JSONScanner: public bux::C_ScannerImpl<uint8_t,int8_t,bux::C_LexUTF32>
{
public:
    C_JSONScanner(bux::I_Parser &parser);
};

#endif // ScannerH
