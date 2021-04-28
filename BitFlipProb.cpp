#include "BitFlipProb.h"

BitFlipProb::BitFlipProb()
{
    p = 0;
}

double BitFlipProb::randomProb()
{
    srand( (unsigned)time( NULL ) );

    return  (double) rand()/RAND_MAX;
}

Individual* BitFlipProb::mutate(Individual* obj, int k)
{
    for(int i = 0; i < obj->getLength(); i++)
    {
        obj[i] = BitFlipProb::randomProb();
    }

    return obj;
}