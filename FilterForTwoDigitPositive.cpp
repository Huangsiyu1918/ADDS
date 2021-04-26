#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x)
{
    if(x % 100 > 9)
    {
        return false;
    }
    else
    {
        return true;
    }
}