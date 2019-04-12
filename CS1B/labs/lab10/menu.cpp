/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
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
    cout << "4 - Search ny name\n";
    cout << "5 - Remove Node\n";
    cout << "6 - Clear list\n";
    cout << "0 - to Exit\n";
    cout << "enter a command (0 to exit): ";
}