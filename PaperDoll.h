#ifndef PaperDoll_H
#define PaperDoll_H
#include "Player.h"

class PaperDoll : public Player
{
    private: char arr[3];
    
    public:
    char makeMove();
    void Reset();
    int i;
};
#endif
