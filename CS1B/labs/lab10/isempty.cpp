/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

/******************************************************************************
 * This function will check if the list is empty
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
        cout << "\nYes, the list is empty\n";
    }
    else
    {
        cout << "\nThe list is NOT empty\n";
    }
    
}