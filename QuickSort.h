#ifndef QuickSort_H
#define QuickSort_H
#include "Sort.h"

class QuickSort : public Sort
{
    public:
    std::vector<int> sort(std::vector<int>& list);
};
#endif