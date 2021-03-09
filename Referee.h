#ifndef REFEREE_H
#define REFEREE_H

#include <string>
#include <vector>
#include <iostream>
#include "Human.h"
#include "Computer.h"

using namespace std;

class Referee
{
private:
    string decision;

public:
    char refGame(HumanPlayer player1, ComputerPlayer player2);
};
#endif