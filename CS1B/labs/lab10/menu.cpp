/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
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
    cout << "\n1 - Create list\n";
    cout << "2 - Display list\n";
    cout << "3 - Is list empty?\n";
    cout << "4 - Search by name\n";
    cout << "5 - Remove Node\n";
    cout << "6 - Clear list\n";
    cout << "0 - to Exit\n";
    cout << "enter a command (0 to exit): ";
}