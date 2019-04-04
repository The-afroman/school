/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
 *****************************************************************************/

/******************************************************************************
 * This function will add a node to the front of the list if mem can be 
 * allocated.
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of the list
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "header.h"

void push(perNode *&head)
{
    perNode *perPtr; //CALC - temp pointer

    perPtr = new perNode;
    perPtr->next = head;
    head = perPtr;
    perPtr = NULL;
    if(head != NULL) //check if memory was allocated
    {
        cout << "\nwho would you like to add?\n\n";
        cout << left << setw(14) << "Enter Name:";
        getline(cin, head->name);
        do
        {
            cout << setw(14) << "Enter Gender:";
            cin.get(head->gender);
            head->gender = toupper(head->gender);
        }
        while(head->gender != 'M' && head->gender != 'F');
        cout << setw(14) << "Enter Age:";
        cout << right;
        cin >> head->age;
    }
    else
    {
        cout << "\nOut of memory!\n";
    }
    
}