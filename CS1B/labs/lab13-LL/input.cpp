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
        }
        else
        {
            cin.ignore(1000, '\n');
            invalid = false;
        }
        
    }while(invalid);

    switch (menuOpt)
    {
        case EXIT:
            break;
        case ADD:   
            push(head);
            break;
        case PEEK:
            peek(head);
            break;
        case SEARCH:
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
                if (size(head) == 1)
                {
                    cout << "\nThere is one sheep\n";
                }
                else
                {
                    cout << "\nThere are " << size(head) << " sheep.\n";
                }
            }
            
            else
            {
                cout << "\nthere are no sheep\n";
            }
            break;
        case OUTPUT:
            displayList(head);
            break;
        
        case CLEAR:
            clearList(head);
            break;
    }
}