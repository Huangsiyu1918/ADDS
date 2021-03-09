#include "Referee.h"
#include "Human.h"
#include "Computer.h"

char Referee::refGame(HumanPlayer player1, ComputerPlayer player2)
{
    /*for (int i = 0; i < p.size(); i++)
    {
        if (p[i] == c[i])
        {
            cout << 'T';
        }
        else if (p[i] == 'P' && c[i] != 'S')
        {
            cout << 'W';
        }
        else if (p[i] == 'R' && c[i] != 'P')
        {
            cout << 'W';
        }
        else if (p[i] == 'S' && c[i] != 'R')
        {
            cout << 'W';
        }
        else
        {
            cout << 'L';
        }

        if (i < p.size() - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
    */
    char ch1 = player1.makeMove();
    char ch2 = player2.makeMove();

    if (ch1 == ch2)
    {
        return 'T';
    }
    else if (ch1 == 'P' && ch2 != 'S')
    {
        return 'W';
    }
    else if (ch1 == 'S' && ch2 != 'R')
    {
        return 'W';
    }
    else if (ch1 == 'R' && ch2 != 'P')
    {
        return 'W';
    }
    else
    {
        return 'L';
    }
}