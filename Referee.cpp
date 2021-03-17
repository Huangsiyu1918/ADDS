#include "Referee.h"
using namespace std;
Player* Referee::refGame(Player* player1, Player* player2)
{
    int p1 = 0; 
    int p2 = 0;
    for(int i = 0; i < 5; i++)
    {
       char ch1 = player1->makeMove();
       char ch2 = player2->makeMove();   
        if (ch1 == ch2)
        {
            p1++; p2++;
        }
        else if ((ch1 == 'S' && ch2 == 'P') || 
                (ch1 == 'R' && ch2 == 'S') || 
                (ch1 == 'P' && ch2 == 'R'))
        {
            p1++;
        }
        else
        {
            p2++;
        }
    //   cout << "1: " << ch1 << " : " << p1 << " 2: " << ch2 << " : " << p2 <<endl;;
    }

// cout << endl;
    if (p2 <= p1)
    {
        return player1;
    }
    return player2;
}