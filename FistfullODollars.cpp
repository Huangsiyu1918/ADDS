#include "FistfullODollars.h"

FistfullODollars::FistfullODollars()
{
     arr[0] = 'R';
     arr[1] = 'P';
     arr[2] = 'P';
}
char FistfullODollars::makeMove()
{
 

    if (i == 3)
    {
        i = 0;
    }

    return arr[i++];
    
}

void FistfullODollars::Reset()
{
    i = 0;
}