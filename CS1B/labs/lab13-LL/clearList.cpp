/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

/******************************************************************************
 * This function will clear all nodes from a linked list
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of the list
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "header.h"

void clearList(perNode *&head)
{
    perNode *perPtr; //CALC - pointer to remove from front of list

    if(head != NULL)
    {
        perPtr = head;
        
        cout << endl;
        cout << "CLEARING LIST:\n";
        while(perPtr != NULL)
        {
            cout << "Removing " << perPtr->name << endl;
            head = perPtr->next;
            delete perPtr;
            perPtr = perPtr->next;
        }
    }
    else
    {
        cout << "\nThe list has been cleared!\n";
    }
    
}