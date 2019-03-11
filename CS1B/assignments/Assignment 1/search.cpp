/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 02/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will search the an array of type string for a specified string
 * and return the index of the match if found
 *----------------------------------------------------------------------------
 * INPUT:
 *			token     - menu option chosen
 *			ar1[]     - string array
 *			AR_SIZE   - size of array
 *			userInput - user inputed search item
 * OUTPUT:
 *			index     - index returned is that of the matched string
 *			found     - true if match false otherwise
 *****************************************************************************/
#include "header.h"

int search(menuoption token, string ar1[], const int AR_SIZE, string userInput, bool &found)
{
	int index; //CALC & OUT - used in while loop and returned

	index = 0;
	found = false;

	while(!found && index < AR_SIZE)
	{
		if(ar1[index] == userInput)
		{
			found = true;
			cout << "Found\n";
		}
		else
		{
			index++;
		}
	}

	if(!found)
	{
		cout << userInput << "was not found.\n";
	}

	return(index);
}
