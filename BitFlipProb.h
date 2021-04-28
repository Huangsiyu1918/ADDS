#ifndef BitFlipProb_H
#define BitFlipProb_H

#include "Mutator.h"

class BitFlipProb : public Mutator
{
    private:
    double p;

    public:
    Individual* mutate(Individual*, int k);
    BitFlipProb();
    double randomProb();
};
#endif