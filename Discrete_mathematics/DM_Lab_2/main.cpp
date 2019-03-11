#include <QCoreApplication>
#include <iostream>
#include <vector>
#include "/home/daniel/Git/Discrete-math/DM_Lab_2/sort.h"
using namespace std;

void Show(int n, vector <int> v)
{
    for (int i{0};i < n;i++) {
    cout<<v[i]<<' ';
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int n,l,r;
    l:
     vector <int> s(n);
     vector <int> v(n);
    /*
    cin>>n;
    vector <int> s(n);
    for(int i(0); i < n; i++)
    {
        cin>>s[i];
    }
    */
    n = 10;
    s={9,8,7,6,5,4,3,2,1,0};

    cout<<"Enter limits to sort\n";
    cin>>l>>r;
    l--;
    cout<<"Enter B for SortBubble\n";
    cout<<"Enter I for SortInsertion\n";
    cout<<"Enter S for SortSelection \n";

    char ch;
    cin>>ch;
    int m(ch);
    switch (m)
    {
    case 'b' :
        cout<<"SortBubble"<<' ';
        v =  Sort::SortBubble(s, l,r);
        Show(n,v);
        break;
    case 'i':
        cout<<"SortInsertion"<<' ';
         v = Sort::SortInsertion(s,l,r);
        Show(n,v);
        break;
    case 's':
        cout<<"SortSelection"<<' ';
         v = Sort::SortSelection(s,l,r);
        Show(n,v);
        break;
    case 'm':
        cout<<"SortMy"<<' ';
        v = Sort::SortMy(s,l,r);
        Show(n,v);
        break;
    }
    cout<<endl;

    cout<<"Enter C for continue\n";
    cout<<"Enter Q for continue\n";
    char ar;
    cin>>ar;
    int k(ar);
    if(k == 'c'){
        goto l;
    }

 return 0;
}
