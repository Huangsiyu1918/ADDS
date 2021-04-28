#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>

class Individual
{
    protected:
    std::string binaryString;
    int max;

    public:
    std::string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength() ;

    Individual(int len);
    Individual(std::string binaryString);

};
#endif