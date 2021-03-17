#ifndef FistfullODollars_H
#define FistfullODollars_H
#include "Player.h"

class FistfullODollars : public Player
{
    private:
    char arr[3];
    int i;

    public:
    FistfullODollars();
    char makeMove();
    void Reset();
};
#endif