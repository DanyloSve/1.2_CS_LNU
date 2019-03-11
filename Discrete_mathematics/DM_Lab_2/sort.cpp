#include "sort.h"
#include <iostream>
#include <vector>
using namespace std;
sort::sort()
{
}

void sort::SortSelection(int n, vector<int> s)
{
    int min,p(n) ;
        for(int i = 0; i < n; i++)
        {
            min = i;
            for(int k = i; k < n ; k++)
            {
                if(s[k] < s[min])
                 min = k;
            }

            n = s[i];
            s[i] = s[min];
            s[min] = n;
        }
        for(int i(0); i < p; i++)
        {
            cout<<s[i];
        }
}

void sort::SortInsertion(int n, vector<int> s)
{
    int p(n);
    for(int j(0); j < n; j++)
    {
        for(int i(0); i < n; i++)
        {
            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }
    for(int i(0); i < p; i++)
    {
        cout<<s[i];
    }
}

void sort::SortBubble(int n, vector<int> s)
{ int p(n);
    for (int j = 1; j < n ; j++)
   {
    int m (0);
    for (int i = 1; i < n ; i++)
    {

        if(s[m] > s[i])
        {
            swap(s[m] , s[i]);
        }
        m++;
    }
   }

    for(int i(0); i < p; i++)
    {
        cout<<s[i];
    }

}






