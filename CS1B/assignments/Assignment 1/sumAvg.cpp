/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 02/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will find the sum or average of all nums in an array of type
 * float
 *----------------------------------------------------------------------------
 * INPUT:
 *			token   - menu option chosen
 *			ar3[]   - float array
 *			AR_SIZE - size of array
 * OUTPUT:
 * 			avg or sum
 *
 *****************************************************************************/
#include "header.h"

float sumAvg(menuoption token, float ar3[], const int AR_SIZE)
{
	int index; //CALC - used in for loop
	float sum; //CALC - sum of all values in ar3[]
	float avg; //CALC - avg of all values in ar3[]

	sum = 0;

	for(index = 0; index < AR_SIZE; index++)
	{
		sum += ar3[index];
	}

	if(token == AVERAGE)
	{
		avg = sum/AR_SIZE;
		return(avg);
	}
	else
	{
		return(sum);
	}
}


