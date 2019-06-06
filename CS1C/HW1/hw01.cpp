#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    const int ar_size = 10;

    int randNum;
    int i;
    int numAr[ar_size]{0};

    for (i = 0; i < ar_size; i++)
    {
        randNum = rand();
        numAr[i] = randNum;
    }
    

    return 0;
}