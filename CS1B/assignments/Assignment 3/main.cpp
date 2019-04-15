/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

#include "header.h"

int main()
{
    perNode *head;  //CALC    - head of list
    int menuOpt;    //IN&CALC - user menu choice

    head = NULL;

    PrintHeader(cout,
                'l',
                "Creating an Ordered list",
                10,
                "Faris Hijazi");
    
    getInput(menuOpt, head);
    while(menuOpt != EXIT) //MAIN LOOP
    {
        getInput(menuOpt, head);
    }
    

    return 0;

}
