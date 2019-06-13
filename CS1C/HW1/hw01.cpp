/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 01		:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/13/19
 *****************************************************************************/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/* generates a random 3 digit number */
int genRand()
{return rand() % 900 + 100;}

/* will return the sum of digits in a 3 digit num */
int sumDigits(int num)
{
    int hundreds, tens, ones; //CALC - stores number in respective place

    hundreds = num/100;
    num -= hundreds*100;
    tens = num/10;
    num -= tens*10;
    ones = num;

    return ones + tens + hundreds;
}

/* will return 3* num */
int trippleNum(int num)
{return num*3;}

/* reverses order of digits in num */
int reverseDigits(int num)
{
    int hundreds, tens, ones; // CALC - stores number in respective place

    hundreds = num/100;
    num -= hundreds*100;
    tens = num/10;
    num -= tens*10;
    ones = num;
    
    return ones*100 + tens*10 + hundreds;
}

/* sorts an array of ints least to greatest */
void sortArray(int ar[], const int size)
{
    int i, j; //CALC - LCVS in for loops
    int temp; //CALC - holds an int while swaping places

    for(i = 0; i < size-1; i++)
    {
        for(j = 0; j < size-i-1; j++)
        {
            //swaps if left is bigger    
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

    // string typedef
    typedef string line; 
    ifstream ifile; //IN - input file variable
    line fileLine;  //OUT - output string

    ifile.open("output.txt");

    while(ifile)
    {
        getline(ifile, fileLine);
        cout << fileLine << endl;
    }
    ifile.close();
}

int main()
{   
    //constant for size of array
    enum{ ar_size = 10};
    int randNum;        //CALC & OUT - stores random 3 digit int
    int i;              //CALC - LCV in for loop
    int numAr[ar_size]; //CALC & OUT - array of random 3 digit ints
    ofstream ofile;     //OUT - output file variable

     //initializes random seed with time
    srand(time(NULL));
    
    for (i = 0; i < ar_size; i++)
    {
        randNum = genRand();
        numAr[i] = randNum;
        cout << "original " << i+1 << ": " << numAr[i] << endl;
        cout << "summed   " << i+1 << ": " << sumDigits(numAr[i]) << endl;
        cout << "trippled " << i+1 << ": " << trippleNum(numAr[i]) << endl;
        cout << "reversed " << i+1 << ": " << reverseDigits(numAr[i]) << endl << endl;
    }

    sortArray(numAr, ar_size);
    
    //output to file
    ofile.open("output.txt");
    for (i = 0; i < ar_size; i++)
    {ofile << "sorted " << i+1 << ":" << numAr[i] << endl;}
    ofile.close();

    //read from file
    readFile();

    return 0;
}