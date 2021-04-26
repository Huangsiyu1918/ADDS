#include "ReduceGeneric.h"
int j = 0;
int ReduceGeneric::reduce(std::vector<int> a)
{
    if(a.size() == 1)
    {
        return a[0];
    }

    int temp = a[0];
    a.erase(a.begin());

    j = binaryOperator(temp,reduce(a));

    return j;
}