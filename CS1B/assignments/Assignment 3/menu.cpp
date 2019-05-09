/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will output the menu to the console
 *----------------------------------------------------------------------------
 * INPUT:
 *          NA
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "header.h"

void outputMenu()
{
    cout << "\n1 - Output Entire List\n";
    cout << "2 - Title Search\n";
    cout << "3 - Genre Search\n";
    cout << "4 - Actor Search\n";
    cout << "5 - Year Search\n";
    cout << "6 - Rating Search (0-9)\n";
    cout << "0 - Exit\n";
    cout << "enter a command (0 to exit): ";
}