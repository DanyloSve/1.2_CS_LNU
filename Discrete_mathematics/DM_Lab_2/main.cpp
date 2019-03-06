#include <QCoreApplication>
#include <iostream>
#include <vector>
#include "/home/daniel/Git/Discrete-math/DM_Lab_2/sort.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int n,l,r;
    l:
    cin>>n;
    vector <int> s(n);
    for(int i(0); i < n; i++)
    {
        cin>>s[i];
    }
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
        cout<<"SortBubble"<<" "<<" "<<" ";
        Sort::SortBubble(n, s, l,r);
        break;
    case 'i':
        cout<<"SortInsertion";
        Sort::SortInsertion(n, s, l,r);
        break;
    case 's':
        cout<<"SortSelection";
        Sort::SortSelection(n, s, l,r);
    }
    cout<<"Enter C for continue\n";
    cout<<"Enter Q for continue\n";
    char ar;
    cin>>ar;
    int k(ar);
    if(k = 'c'){
        goto l;
    }

 return 0;
}
