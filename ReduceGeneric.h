#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H

#include <vector>
class ReduceGeneric 
{
    private:
    virtual int binaryOperator(int, int) = 0;

    public:
    int reduce(std::vector<int>);
    int Min;
    int Res;
};
#endif