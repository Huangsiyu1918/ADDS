#include "Rearrange.h"

Individual *Rearrange::mutate(Individual *obj, int k)
{
    int len = obj->getLength();
    std::string str = obj->getString();

    std::string str1;
    std::string str2;
    if (k > len)
    {
        int pos = (len % k);
        str1 = str.substr(pos - 1, len - pos + 1);
        str2 = str.substr(0, pos - 1);
    }
    else
    {
        str1 = str.substr(k - 1, len - k + 1);
        str2 = str.substr(0, k - 1);
    }

    Individual *offspring = new Individual(str1.append(str2));
    return offspring;
}