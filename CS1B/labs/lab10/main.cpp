/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
 *****************************************************************************/

#include "header.h"

int main()
{
    perNode *head;
    perNode *perPtr;
    int menuOpt;

    head = NULL;
    while(menuOpt != EXIT)
    {
        getInput(menuOpt, head);
    }
    

    return 0;

}
