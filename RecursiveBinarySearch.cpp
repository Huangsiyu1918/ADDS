#include "RecursiveBinarySearch.h"

int search_helper(std::vector<int>& v, const int& x, int l, int r)
{
    if(l > r) return -1;

    int m = (l + r) / 2;
    
    
    if (v[m] == x)
        return m;
    else if(x > v[m])
        return search_helper(v, x, m + 1, r);
    else 
        return search_helper(v, x,l, m - 1);      
}

bool RecursiveBinarySearch::search(std::vector<int> v, int x)
{
    if (search_helper(v, x, 0, v.size() -1) == -1) return false;
    else return true;
}