
#include "sort.h"
#include <iostream>
Sort::Sort()
{

}


void Swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

int Sort::MinIteam( vector<int> s, int j, int r)
{
    int min(j);
    for(int k = j; k < r; k++)
    {
        if(s[k] < s[min])
        {
            min = k;
        }
    }

    return min;
}

int Sort::MaxIteam( vector<int> s, int j, int r)
{
    int max(j);
    for(int k = j; k < r; k++)
    {
        if(s[k] > s[max])
        {
            max = k;
        }
    }

    return max;
}

vector <int> Sort::SortSelection(vector<int> s,int l, int r)
{
   int min;
    for(int j(l); j < r ; j++)
    {
        min = j;
        Swap (s[MinIteam(s,j,r)], s[j]);
    }

    return s;

}

vector<int> Sort::SortBubble(vector<int> s,int l, int r)
{
    int m{l};

  for(int j{l}; j < r; j++)
    {
       for(int i{j + 1}; i < r; i++)
        {
            if(s[j] > s[i])
            {
              Swap(s[j], s[i]);
            }

        }

    }
  return s;
}

vector<int> Sort::SortInsertion( vector<int> s, int l, int r)
{

     for (int i{l}; i < r ;i++)
     {
         for (int j{i};j > l ;j--)
       {
             if( s[j -1] > s[j])
             {
         Swap(s[j], s[j - 1]);
             }
       }
    }
     return s;
}

vector<int> Sort::SortMy(vector<int> s,int l, int r)
{
    for(int j(l); j < r;j++ )
    {
        for(int i(l); i < r; i++)
        {
           if(s[i] > s[j])
            {
                Swap(s[i], s[j]);
            }
        }
    }
     return s;
}
