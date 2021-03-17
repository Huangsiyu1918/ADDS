#include "Crescendo.h"


char Crescendo::makeMove()
{
    arr[0] = 'P';
    arr[1] = 'S';
    arr[2] = 'R';

    if (i == 3)
    {
        i = 0;
    }
    return arr[i++];
    
    
}