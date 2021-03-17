#include "PaperDoll.h"
char PaperDoll::makeMove()
{
   char arr[] = {'P', 'S', 'S'};

    if (i == 3)
    {
        i = 0;
    }
    return arr[i++];
}

void PaperDoll::Reset()
{
    i = 0;
}