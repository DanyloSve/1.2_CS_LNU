#include "dm_logcon_lib.h"
#include <iostream>

bool Dm_LogCon_Lib::NOT(int a)
{
    if(a == 0 )
        {
            return  1;
        }
    else
        {
            return 0;
        }
}

bool Dm_LogCon_Lib::AND(int a, int b)
{
    if (a == 1)
    {
        if( b == 1)
            {
                return 1;
            }
        else
        {
             return 0;
        }

    }
        else
            {
                return 0;
            }
}

bool Dm_LogCon_Lib::OR(int a, int b)
{
    if(a == 0 )
        {
          if(b == 0)
             {
                return 0;
             }
          else
          {
              return 1;
          }

        }
    else
       {
           return 1;
       }
}

bool Dm_LogCon_Lib::IMP(int a, int b)
{
    if( a == b)
        {
            return 1;
        }
    else if  (b == 1)
        {
            return 1;
        }
    else
        {
           return 0;
        }
}

bool Dm_LogCon_Lib::EQU(int a, int b)
{
    if(a == b)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

bool Dm_LogCon_Lib::XOR(int a, int b)
{
    if (a == b)
        {
            return 0;
        }
    else
        {
            return 1;
        }
}








