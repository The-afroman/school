/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 1 : Functions and Arrays
 * CLASS		: CS1B
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 02/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will output the menu
 *----------------------------------------------------------------------------
 * INPUT:
 * 			NA
 * OUTPUT:
 * 			menu
 *****************************************************************************/
#include "header.h"

void menu()
{
	cout << "\nMENU OPTIONS\n\n";
	cout << "1 - Find the larger balance\n";
	cout << "2 - Find the smaller balance\n";
	cout << "3 - Obtain the sum of all balances\n";
	cout << "4 - Obtain the average of all balances\n";
	cout << "5 - Find person\n";
	cout << "0 - Exit\n";
	cout << "Enter an option (0 to exit): ";
}
