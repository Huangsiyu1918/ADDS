#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x)
{
    if(x >= 100 || x < 10)
    {
        return false;
    }
    else
    {
        return true;
    }
}