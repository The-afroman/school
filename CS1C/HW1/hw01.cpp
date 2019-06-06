#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int genRand()
{return rand() % 900 + 100;}

int sumDigits(int num)
{
    int hundreds, tens, ones;

    hundreds = num/100;
    num -= hundreds*100;
    tens = num/10;
    num -= tens*10;
    ones = num;

    return ones + tens + hundreds;
}

int trippleNum(int num)
{return num*3;}

int reverseDigits(int num)
{
    int hundreds, tens, ones;

    hundreds = num/100;
    num -= hundreds*100;
    tens = num/10;
    num -= tens*10;
    ones = num;
    
    return ones*100 + tens*10 + hundreds;
}

void sortArray(int ar[], int size)
{
    int i, j;
    int temp;

    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size-i; j++)
        {
            if(ar[j] > ar[j+1])
            {
                temp = ar[j+1];
                ar[j+1] = ar[j];
                ar[j] = temp;
            }
        }
    }
}

int main()
{
    const int ar_size = 10;

    int randNum;
    int i;
    int numAr[ar_size];
    
    srand(time(NULL));
    
    for (i = 0; i < ar_size; i++)
    {
        randNum = genRand();
        numAr[i] = randNum;
        cout << "original " << i+1 << ":" << numAr[i] << endl;
        cout << "summed   " << i+1 << ":" << sumDigits(numAr[i]) << endl;
        cout << "trippled " << i+1 << ":" << trippleNum(numAr[i]) << endl;
        cout << "reversed " << i+1 << ":" << reverseDigits(numAr[i]) << endl << endl;
    }

    sortArray(numAr, ar_size);
    
    for (i = 0; i < ar_size; i++)
    {cout << "sorted " << i+1 << ":" << numAr[i] << endl;}

    return 0;
}