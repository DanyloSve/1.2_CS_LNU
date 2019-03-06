#ifndef SORT
#define SORT
#include <iostream>
#include <vector>
using namespace std;
class Sort
{
public:
    Sort();
    static void SortSelection( int n, vector <int> s,int l, int r);
    static void SortBubble   ( int n, vector <int> s,int l, int r);
    static void SortInsertion( int n, vector <int> s,int l, int r);
    static int  MinIteam( vector<int> s, int j, int r);
    static int  MaxIteam( vector<int> s, int j, int r);

};

#endif // SORT
