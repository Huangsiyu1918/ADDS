#include "BitFlip.h"

Individual* BitFlip::mutate(Individual* obj, int k)
{
    int len = obj->getLength();
    std::string str = obj->getString();
    if (k % len == 0)
    {
        if(str[len - 1] == '0')
        {
            str[len-1] = '1';
        }
        else
        {
            str[len-1] = '0';
        }
        
    }
    else
    {
        if(str[(k % len) - 1] == '0')
        {
            str[(k % len) - 1] = '1';
        }
        else
        {
            str[(k % len) - 1] = '0';
        }
    }
    Individual* offspring = new Individual(str);

    return offspring;
}