#include "Tournament.h"
#include <vector>
using namespace std;
Tournament::Tournament(){

}

Player* Tournament::run(std::array<Player *, 8> competitors)
{
    Referee ref;
    int n = 8;

    //std::array<Player*, 4> round;
    std::vector<Player*> res1;
    // cout << "T1: " << endl;
    for (int i = 0; i < n; i+=2)
    {
        Player* temp;
        temp = ref.refGame(competitors[i], competitors[i+1]);
        //round[k] = temp;
        //k++;
        res1.push_back(temp);
    }

    // n = n/2;
     std::vector<Player*> res2;
    // cout << "T2: " << endl;
    for (int i = 0; i < (int)res1.size(); i+=2)
    {
        Player* temp;
        temp = ref.refGame(res1[i], res1[i+1]);
        res2.push_back(temp);
    }

    // cout << "T3: " << endl;
    return ref.refGame(res2[0], res2[1]);
    
}