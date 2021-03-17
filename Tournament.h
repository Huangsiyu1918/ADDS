#ifndef Tournament_H
#define Tournament_H

#include "Referee.h"
#include <array>

class Tournament
{
    public:
        Tournament();
        Player* run(std::array<Player *, 8> competitors);
};
#endif