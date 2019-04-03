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
    cout << "\n1 - Add a person (PUSH)\n";
    cout << "2 - Remove a person (POP)\n";
    cout << "3 - Is stack empty? (ISEMPTY)\n";
    cout << "4 - Who is on top? (PEEK)\n";
    cout << "5 - How many people are there? (SIZE)\n";
    cout << "0 - to Exit\n";
    cout << "enter a command ? ";
}