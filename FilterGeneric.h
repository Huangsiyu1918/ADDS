#ifndef FilterGeneric_H
#define FilterGeneric_H

#include <vector>
class FilterGeneric
{
    private:
    virtual bool g(int) = 0;

    public:
    std::vector<int> filter(std::vector<int>);
     
};
#endif