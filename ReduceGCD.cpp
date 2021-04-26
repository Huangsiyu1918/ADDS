#include "ReduceGCD.h"
#include <iostream>
int ReduceGCD::binaryOperator(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return binaryOperator(a-b, b);
        
    return binaryOperator(a, b-a);
}