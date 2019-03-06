#include <QCoreApplication>

#include <iostream>
#include "/home/daniel/Git/Discrete-math/Dm_LogCon_Lib/dm_logcon_lib.h"

using namespace std;
int main()
{
    int a, b;

    for(int i = 1; i != 38;i++)
        {
            cout<<'_';
        }
    cout<<endl;
    cout<<'|'<<"a"<<'|'<<"b"<<'|'<<'|'<<"not a"<<'|'<<"not b"<<'|'<<"or"<<'|'<<"equ"<<'|'<<"imp"<<'|'<<"xor"<<'|'<<"and"<<'|'<<endl;
    for(int i = 1; i != 38;i++)
        {
            cout<<'_';
        }
    cout<<endl;

    a = 1;
    b = 1;

        for(a = 1; a!= -1; a--)
        {
            for( b = 1; b != -1; b --)
            {
                cout<<'|'<<a<<'|'<<b<<'|'<<'|'<<Dm_LogCon_Lib::NOT(a)<<' '<<' '<<' '<<' '<<'|'<<Dm_LogCon_Lib::NOT(b)<<' '<<' '<<' '<<' '<<'|'<<Dm_LogCon_Lib::OR(a,b)<<' '<<'|'<<Dm_LogCon_Lib::EQU(a,b)<<' '<<' '<<'|'<<Dm_LogCon_Lib::IMP(a,b)<<' '<<' '<<'|'<<Dm_LogCon_Lib::XOR(a,b)<<' '<<' '<<'|'<<Dm_LogCon_Lib::AND(a,b)<<' '<<' '<<'|'<<endl;
                for(int i = 1; i != 38;i++)
                    {
                        cout<<'_';
                    }
                cout<<endl;
            }



    }
    return 0;
}
