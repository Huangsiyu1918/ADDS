#ifndef Player_H
#define Player_H

#include <iostream>

class Player
{
public:
    int id;
    Player();
    virtual char makeMove()=0;
};

#endif