/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
 *****************************************************************************/

/******************************************************************************
 * This function will remove the first node in the list if there are 1 or more
 * nodes.
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of the list
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "header.h"

void pop(perNode *&head)
{
    perNode *perPtr;
    if(head != NULL)
    {
        cout << "\nPOPPING\n";
        peek(head);
        perPtr = head;
        head = perPtr->next;
        delete perPtr;
    }
    else
    {
        cout << "\nCan't POP from an empty stack.\n";
    }
    
    perPtr = NULL;
}