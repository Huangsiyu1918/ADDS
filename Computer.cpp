#include "Computer.h"

char ComputerPlayer::makeMove()
{
    /*move.push_back('R'); //Temp
    return;

    switch (rand() % 3)
    {
    case 0:
        move.push_back('P');
        break;

    case 1:
        move.push_back('R');
        break;

    case 2:
        move.push_back('S');
        break;

    default:
        break;
    }
    */
    char ch = 'R';
    return ch;
}
vector<char> ComputerPlayer::getMove()
{
    return move;
}