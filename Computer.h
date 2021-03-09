#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class ComputerPlayer
{
private:
    vector<char> move;

public:
    char makeMove();
    vector<char> getMove();
};

#endif