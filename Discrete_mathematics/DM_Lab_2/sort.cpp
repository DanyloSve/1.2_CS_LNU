#include "sort.h"

Sort::Sort()
{

}

void Show(int n, vector<int> s)
{
    for(int i(0); i < n; i++)
    {
        cout<<s[i]<<' ';
    }
    cout<<endl;
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

void Sort::SortSelection(int n, vector<int> s,int l, int r)
{
   int min;
    for(int j(l); j < r ; j++)
    {
        min = j;
        Swap (s[MinIteam(s,j,r)], s[j]);
        }
    Show(n, s);
}

void Sort::SortBubble(int n, vector<int> s,int l, int r)
{
  for(int j(0); j < r; j++)
    {
        int m(l);
        for(int i(l+1); i < r; i++)
        {
            if(s[m] > s[i])
            {
              Swap(s[m], s[i]);
            }
            m++;
        }
    }
  Show(n, s);
}

void Sort::SortInsertion(int n, vector<int> s,int l, int r)
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
    Show(n, s);
}
