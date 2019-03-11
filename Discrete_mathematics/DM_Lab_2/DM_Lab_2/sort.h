#ifndef SORT
#define SORT
#include <iostream>
#include <vector>
using namespace std;
class Sort
{
public:
    Sort();
    static vector <int> SortSelection(  vector <int> s,int l, int r);
    static vector <int> SortBubble   (  vector <int> s,int l, int r);
    static vector <int> SortInsertion(  vector <int> s,int l, int r);
    static vector <int> SortMy(         vector <int> s,int l, int r);
    static int  MinIteam( vector<int> s, int j, int r);
    static int  MaxIteam( vector<int> s, int j, int r);

};

#endif // SORT
