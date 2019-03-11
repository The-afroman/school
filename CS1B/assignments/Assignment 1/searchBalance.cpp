/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 02/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will search a given array for the largest or smallest floating
 * point value and return the index it is located at.
 *----------------------------------------------------------------------------
 * INPUT:
 * 			token   - menu option chosen
 * 			ar3[]   - float array
 * 			AR_SIZE - size of array
 * OUTPUT:
 *			i		- index of largest or smallest value
 *****************************************************************************/
#include "header.h"

int searchBalance(menuoption token, float ar3[], const int AR_SIZE)
{

	int index;
	int i;
	float target;

	target = ar3[0];
	i = 0;

	if(token == LARGERBALANCE)
	{
		for(index=0; index < AR_SIZE - 1; index++)
		{
			if(ar3[index + 1] > target)
			{
				target = ar3[index + 1];
				i = index +1;
			}
		}
	}
	else
	{
		for(index=0; index < AR_SIZE - 1; index++)
		{
			if(ar3[index + 1] < target)
			{
				target = ar3[index + 1];
				i = index +1;
			}
		}
	}
	return(i);
}
