#ifndef SORT_H
#define SORT_H
#include <vector>
using namespace std;
class sort
{
public:
    sort();
     void SortSelection(int n, vector<int> s);
     void SortInsertion(int n, vector<int> s);
     void SortBubble   (int n, vector<int> s);
};

#endif // SORT_H
