#include <iostream>
#include "Tournament.h"
using namespace std;

int main()
{
    Player* F = new FistfullODollars();
    Player* R = new RandomComputer();
    Player* A = new Avalanche();
    Player* B = new Bureaucrat();
    Player* T = new Toolbox();
    Player* C = new Crescendo();
    Player* P = new PaperDoll();
    Player* F2 = new FistfullODollars();

    F->id = 1;
    R->id = 2; //s //f
    A->id = 3;
    B->id = 4; //s
    T->id = 5; //s //f
    C->id = 6;
    P->id = 7; //s
    F2->id = 8;

    std::array<Player*,8> arr;

    arr[0] = F;
    arr[1] = R;
    arr[2] = A;
    arr[3] = B;
    arr[4] = T;
    arr[5] = C;
    arr[6] = P;
    arr[7] = F2;

    Tournament* t = new Tournament();
    cout << t->run(arr)->id << endl;

}