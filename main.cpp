#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

void gameControl()
{
    HumanPlayer player1;
    ComputerPlayer player2;
    Referee Ref;

    int n;
    cout << " how many rounds would you like to play ?" << endl;
    cin >> n;

    vector<char> outcome;

    for (int i = 0; i < n; i++)
    {
        char ch;
        ch = Ref.refGame(player1, player2);
        outcome.push_back(ch);
    }
    
    for (int i = 0; i < (int)outcome.size(); i++)
    {
        cout << outcome[i] << " ";
    }
    cout << endl;
    
}