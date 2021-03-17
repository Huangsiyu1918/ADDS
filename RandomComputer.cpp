#include "RandomComputer.h"

char RandomComputer::makeMove()
{
    char t = ' ';
    switch (rand() % 3)
    {
    case 0:
        t =  'R';
    case 1:
        t = 'P';

    case 2:
        t = 'S';

    default:
        break;
    }
    return t;
}
