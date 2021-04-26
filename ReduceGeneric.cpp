#include "ReduceGeneric.h"

int ReduceGeneric::reduce(std::vector<int> a)
{
    int j = 0;

    if(a.size() > 0)
    {
        if(a.size() == 1)
        {
            return a[0];
        }

        j = binaryOperator(a[0],a[1]);
        a.erase(a.begin());

        j = binaryOperator(j,reduce(a));

    }

    return j;
}