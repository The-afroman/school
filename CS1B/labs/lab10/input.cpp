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
    perNode *searchPtr;
    string search;
    do
    {
        outputMenu();
        if(!(cin >> menuOpt))
        {
            cout << "\n**** Please input a number between 0 and 6 ****\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            invalid = true;
        }
        else if(menuOpt < 0 || menuOpt > 6)
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
        case CREATELST:   
            inputfile(head);
            break;
        case DISP:
            displayList(head);
            break;
        case ISEMPTY:
            isEmpty(head);
            break;
        case SEARCH:
            cout << "who would you like to search for?: ";
            getline(cin, search);
            searchNode(head, searchPtr, search);
            cout << "\nSearching For " << search <<endl;
            if(searchPtr == NULL)
            {
                cout << "\nI'm sorry, " << "\"" << search << "\""
                     << " was NOT found!";
            }
            else
            {
                cout << left;
                cout << setw(8) << "Name:" << searchPtr->name <<endl;
                cout << setw(8) << "Gender" << searchPtr->gender <<endl;
                cout << setw(8) << "Age" << searchPtr->age <<endl;
                cout << right;
            }
            break;
        case REMOVE:
            if(head != NULL)
            {
              
            }
            else
            {
                cout << "\nNobody is on the stack!\n";
            }
            
            break;
        case CLR:
            clearList(head);
            break;
    }
}