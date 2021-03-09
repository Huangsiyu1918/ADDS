#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class HumanPlayer
{
private:
    vector<char> move;

public:
    char makeMove();
};

#endif