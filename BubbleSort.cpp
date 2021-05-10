#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int>& list)
{
    for (int i = 0; i < list.size() - 1; i++)
    {
        bool exchange = false;
        for (int j = 0; j < list.size() - i;i++)
        {
            if(list[j] > list[j+1])
            {
                int temp = list[j+1];
                list[j+1] = list[j];
                list[j] = temp;
                exchange = true;
            }
        }
        if(exchange == false) return list;
        
    }
    return list; 
}