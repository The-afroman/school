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
    int menuInpt; //IN   - menu option input by user
    perNode *head;//CALC - temp pointer

    PrintHeader(cout,
                'l',
                "Implementing a Stack",
                9,
                "Faris Hijazi & Paul Abrams");

    head = NULL;
    
    getInput(menuInpt, head);

    //loop when user has not input 0
    while(menuInpt != 0)
    {
        getInput(menuInpt, head);
    }
    
    return 0;
}
