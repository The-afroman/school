/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
 *****************************************************************************/

/******************************************************************************
 * This function will look at the first node of the list and display its Name
 * , Gender, Age
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of list
 * OUTPUT:
 *          name, gender, age of first node if head not NULL
 *****************************************************************************/

#include "header.h"

void peek(perNode *&head)
{
    if(head != NULL)
    {
        cout << left;
        cout << setw(14) << "Name:" << head->name << endl;
        cout << setw(14) << "Gender:" << head->gender << endl;
        cout << setw(14) << "Age:" << head->age << endl;
        cout << right;
    }
}