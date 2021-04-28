#include "Individual.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
using namespace std;

Individual* execute(Individual* indPtr, Mutator* mPtr, int k)
{
    return mPtr->mutate(indPtr, k);
}

int main()
{
    string str1, str2;
    int k1, k2;
    cin >> str1 >> k1 >> str2 >> k2;

    Individual* human1 = new Individual(str1);
    Individual* human2 = new Individual(str2);

    Mutator* M1 = new BitFlip();
    Mutator* M2 = new Rearrange();
    
    Individual* human1Pro = execute(human1, M1, k1);
    Individual* human2Pro = execute(human2, M2, k2);

    cout << human1Pro->getString() << " " << human2Pro->getString() << " " << human2Pro->getMaxOnes() << endl;

}