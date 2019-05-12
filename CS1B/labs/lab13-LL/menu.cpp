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
    cout << "\n1 - Add Sheep\n";
    cout << "2 - Output first sheep\n";
    cout << "3 - Find sheep\n";
    cout << "4 - List size\n";
    cout << "5 - Output list\n";
    cout << "6 - Clear list\n";
    cout << "0 - Exit\n";
    cout << "enter a command ? ";
}