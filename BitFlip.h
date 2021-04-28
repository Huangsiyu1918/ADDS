#ifndef BitFlip_H
#define BitFlip_H

#include "Mutator.h"
class BitFlip : public Mutator
{
    public:
    Individual* mutate(Individual*, int k);
};
#endif