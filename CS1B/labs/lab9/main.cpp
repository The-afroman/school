/******************************************************************************
 * AUTHOR 		: Faris Hijazi &
 * STUDENT ID 	: 1039438 &
 * Lab 9		: 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

#include "header.h"

int main()
{
    int menuInpt;
    perNode *head;

    head = NULL;
    outputMenu();
    getInput(head);
    while(menuInpt != 0)
    {
        outputMenu();
        getInput(head);
    }
    
    return 0;
}
