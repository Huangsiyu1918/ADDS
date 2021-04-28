#include "BitFlip.h"

Individual* BitFlip::mutate(Individual* obj, int k)
{
    int len = obj->getLength();
    std::string str = obj->getString();
    if (k > len)
    {
        if (str[(len % k) - 1] == '1')
        {
            str[(len % k) - 1 ] = '0';
        }
        else
        {
            str[(len % k) - 1 ] = '1';
        }
        
    }
    else
    {
        if (str[k-1] == '0')
        {
            str[k-1] = '1';
        }
        else
        {
            str[k-1] = '0';
        }
        
    }
    Individual* offspring = new Individual(str);

    return offspring;
}