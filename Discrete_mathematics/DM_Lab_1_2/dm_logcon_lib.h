#ifndef DM_LOGCON_LIB_H
#define DM_LOGCON_LIB_H
#include <iostream>
#include "dm_logcon_lib_global.h"

class DM_LOGCON_LIBSHARED_EXPORT Dm_LogCon_Lib
{

public:
    Dm_LogCon_Lib(int a,int b);
    static bool NOT(int a);
    static bool AND(int a,int b);
    static bool OR (int a, int b);
    static bool IMP(int a ,int b);
    static bool EQU(int a,int  b);
    static bool XOR(int a,int b);
};

#endif // DM_LOGCON_LIB_H
