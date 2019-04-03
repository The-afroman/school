/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
 *****************************************************************************/

/******************************************************************************
 * This function will check of the list is empty
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of list
 * OUTPUT:
 *          NA
 *****************************************************************************/
#include "header.h"

void isEmpty(perNode *&head)
{
    if(head == NULL)
    {
        cout << "\nYes, the stack is empty\n";
    }
    else
    {
        cout << "\nThe stack is NOT empty\n";
    }
    
}