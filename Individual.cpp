#include "Individual.h"
#include "queue"

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
    std::queue<char> myqueue;

    for (int i = 0; i < (int)binaryString.length(); i++)
    {
        myqueue.push(binaryString[i]);
    }

    bool flag;

    if (myqueue.back() == '0') flag = true;
    else flag = false;

    while(myqueue.size() != 0)
    {
        if(myqueue.front() == '1')
        {
            current_max++;
            myqueue.pop();
        }
        else if(myqueue.front() == '0')
        {
            if(current_max > max)
            {
                max = current_max;
            }
            current_max = 0;
            myqueue.pop();
        }
    }


    if (flag == false)
    {
        return current_max;
    }
    else
    {
        return max;
    }
    
}

int Individual::getLength()
{
    return binaryString.length();
}