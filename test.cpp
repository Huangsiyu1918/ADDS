#include <math.h>
#include <iostream>

int fun(int n, int num, int value)
{
    if (n == 0)
    {
        return value;
    }
    //value = value * fun();
    return fun((n-1), num, value*num);
    
}

double fun2(int i)
{
    if(i == 1)
    {
        return 1.0/2.0;
    }
    return fun2(i-1.0) + (double)(i/i+1.0);
}

int main()
{
    std::cout << fun2(2);
}