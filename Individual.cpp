#include "Individual.h"

Individual::Individual(int len)
{
    for (int i = 0; i < len; i++)
    {
        binaryString[i] = 0;
    }
}

Individual::Individual(std::string binaryString)
{
    this->binaryString = binaryString;
}

std::string Individual::getString()
{
    return binaryString;
}

int Individual::getBit(int pos)
{
    if (pos > (int)binaryString.length()) 
    {
        return -1;
    }

    return atoi(&binaryString[pos]);
}

void Individual::flipBit(int pos)
{
    if (binaryString[pos] =='1')
    {
        binaryString[pos] = '0';
    }
    else
    binaryString = '1';
    
}

int Individual::getMaxOnes()
{
    int max = 0; int current_max = 0;

    for(int i = 0; (int)i < binaryString.length(); i++)
    {
        if (binaryString[i] == '1')
        {
            current_max++;
        }
        else
        {
            current_max = 0;
        }

        if (max < current_max)
        {
            max = current_max;
        }
        
    }
     return max; 
}

int Individual::getLength()
{
    return binaryString.length();
}