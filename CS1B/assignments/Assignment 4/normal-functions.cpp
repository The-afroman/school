#include "header.h"

long long factorial(long long num)
{
    long long factorial;

    factorial = num;

    while(num-1 > 0)
    {
        factorial = factorial * (--num);
    }
    return factorial;
}