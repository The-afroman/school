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

void sortArray(int ar[], const int size)
{
    int i, j;
    int temp;

    for(i = 0; i < size-1; i++)
    {
        for(j = 0; j < size-i-1; j++)
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

void readFile()
{
    ifstream ifile;
    string line;

    ifile.open("output.txt");

    while(ifile)
    {
        getline(ifile, line);
        cout << line << endl;
    }
}

int main()
{
    const int ar_size = 10;

    typedef string BRUH;

    int randNum;
    int i;
    int numAr[ar_size];
    ofstream ofile;
    BRUH fileLine;

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
    
    ofile.open("output.txt");
    for (i = 0; i < ar_size; i++)
    {ofile << "sorted " << i+1 << ":" << numAr[i] << endl;}
    ofile.close();

    readFile();

    return 0;
}