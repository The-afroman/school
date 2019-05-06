/*******************************************************************************
 * AUTHOR     :Faris Hijazi
 * STUDENT ID :1039438
 * LAB #12    :Recursion Performance
 * CLASS      :CS1B
 * SECTION    :MW: 7:30pm
 * DUE DATE   :4/30/19
 ******************************************************************************/

#include "header.h"
/******************************************************************************
 * This function will find the factorial of an int, num recursively
 *----------------------------------------------------------------------------
 * INPUT:
 * 		num - long long integer
 * OUTPUT:
 * 		factorial of num
 *****************************************************************************/
long long factorialR(long long num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num*factorialR(num-1);
    }
}

/******************************************************************************
 * This function will output the fibonachi number at num recursively
 *----------------------------------------------------------------------------
 * INPUT:
 * 		num - number of numbers in series to calculate
 * OUTPUT:
 * 		fibonachi number
 *****************************************************************************/
long fibR(long num) 
{ 
    if (num <= 1)
    {
        return num;
    }
    return fibR(num-1) + fibR(num-2);
} 