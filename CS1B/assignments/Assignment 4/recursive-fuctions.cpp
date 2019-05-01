#include "header.h"

long long factorialR(long long num)
{
    long long factorial;
    bool recurse = false;

    if (!recurse) {

    }
    

    factorial = factorial * (--num);

    if (num - 1 > 0)
    {
        recurse = true;
        factorialR(num);
    }
    else
    {
       return factorial;
    }
}