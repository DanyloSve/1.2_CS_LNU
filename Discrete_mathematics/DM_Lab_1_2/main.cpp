#include <QCoreApplication>
#include <iostream>
#include "/home/daniel/Git/Discrete-math/Dm_LogCon_Lib/dm_logcon_lib.h"
using namespace std;

int main(int argc, char *argv[])
{
    cout<<"a"<<'|'<<"b"<<'|'<<"c"<<'|'<<"a and -b"<<'|'<<" -(a and -b)"<<'|';
    cout<< "-(a and -b)or c"<<'|'<<"a or b"<<'|'<<"(a or b)or c"<<'|';
    cout<< "[-(a and -b)] xor [(a or b)or c]";
    cout<<endl;
    for (int c(1);c!=-1;c--)
    {
        for(int b(1);b!=-1;b--)
         {
            for(int a(1);a!=-1;a--)
                {
                    cout<<a<<'|'<<b<<'|'<<c<<'|'<<' '<<' '<<' '<<Dm_LogCon_Lib::AND(a, Dm_LogCon_Lib::NOT(b))<<' '<<' '<<' '<<' '<<'|';
                    int ad = Dm_LogCon_Lib::AND(a, Dm_LogCon_Lib::NOT(b));
                    cout<<' '<<' '<<' '<<' '<<' '<<' '<<Dm_LogCon_Lib::NOT(ad)<<' '<<' '<<' '<<' '<<' '<<'|';
                    int nt(Dm_LogCon_Lib::NOT(ad));
                    cout<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<Dm_LogCon_Lib::OR(nt,c)<<' '<<' '<<' '<<' '<<' '<<' '<<'|';
                    int pp(Dm_LogCon_Lib::OR(nt,c));
                    cout<<' '<<' '<<' '<<Dm_LogCon_Lib::OR(a,b)<<' '<<' '<<'|';
                    int r(Dm_LogCon_Lib::OR(a,b));
                    cout<<' '<<' '<<' '<<' '<<' '<<' '<<Dm_LogCon_Lib::OR(r,c)<<' '<<' '<<' '<<' '<<' '<<'|';
                    int rr(Dm_LogCon_Lib::OR(r,c));
                    cout<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<Dm_LogCon_Lib::XOR(pp,rr)<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<' '<<'|';
                    cout<<endl;
                }
            }
     }
    cout<<endl;
    return 0;
 }
