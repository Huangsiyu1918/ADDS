#ifndef Crescendo_H
#define Crescendo_H

#include "Player.h"

class Crescendo : public Player
{
    private:
    char arr[3];
    int i;

    public:
    char makeMove();  
    void Reset();
};

#endif