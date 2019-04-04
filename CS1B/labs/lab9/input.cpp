/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
 *****************************************************************************/

/******************************************************************************
 * This function will recieve menu input from user and call the required
 * function based on menu input.
 *----------------------------------------------------------------------------
 * INPUT:
 *          menuOpt - user menu input
 *          head    - head of list
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "header.h"

void getInput(int &menuOpt, perNode *&head)
{
    bool invalid; // CALC - if true input is invalid

    do
    {
        outputMenu();
        if(!(cin >> menuOpt))
        {
            cout << "\n**** Please input a number between 0 and 5 ****\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            invalid = true;
        }
        else if(menuOpt < 0 || menuOpt > 5)
        {
            cout << "\n**** The number " <<  menuOpt << " is an invalid entry ****\n";
            cout << "**** Please input a number between 0 and 5 ****\n";
            invalid =  true;
            cin.ignore(1000, '\n');
        }
        else
        {
            cin.ignore(1000, '\n');
        }
        
    }while(invalid);

    switch (menuOpt)
    {
        case EXIT:
            break;
        case PUSH:   
            push(head);
            break;
        case POP:
            pop(head);
            break;
        case ISEMPTY:
            isEmpty(head);
            break;
        case PEEK:
            if(head != NULL)
            {
                cout << "\nPEEKING AT\n";
                peek(head);
            }
            else
            {
                cout << "\nThere is nobody to PEEK at!\n";
            }
            break;
        case SIZE:
            if(head != NULL)
            {
                cout << "\nThere are " << size(head) << " people on the stack.\n";
            }
            else
            {
                cout << "\nNobody is on the stack!\n";
            }
            
            break;
    }
}