#include "FilterNonPositive.h"

bool FilterNonPositive::g(int x)
{
    if (x > 0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}