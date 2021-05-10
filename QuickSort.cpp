#include "QuickSort.h"

std::vector<int> sort_helper(std::vector<int>& list, int s, int t)
{
    int i = s, j = t;
    if (s < t) //at least 2 elements are in the list 
    {   
        int tmp = list[s];
        while(i != j)
        {
            while(i < j && list[j] >= tmp) j--;
            list[i] = list[j];

            while (i < j && list[i] <= tmp) i++;
            list[j] = list[i];
        }
        list[i] = tmp;

     sort_helper(list, s, i-1);
     sort_helper(list, i+1, t);
    }
    return list;
}

std::vector<int> QuickSort::sort(std::vector<int>& list)
{
    return sort_helper(list, 0, list.size()-1);
}