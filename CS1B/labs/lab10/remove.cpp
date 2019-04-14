/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

/******************************************************************************
 * This function will remove a searched node from the list
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of list
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "header.h"

void removeNode(perNode *&head)
{
    perNode *searchPtr; //CALC    - search pointer
    perNode *tail;      //CALC    - keeps track of last node
    string search;      //IN&CALC - string to match
    if(head != NULL)
    {
        cout << "\nwho would you like to remove?: ";
        getline(cin, search);
        cout << "\nSearching For " << search << endl;
        searchNode(head, searchPtr, search);

        if(searchPtr!=NULL)
        {
            cout << "Removing: " << search << endl;
            
            if(searchPtr == head)
            {
                searchPtr = head;
                searchPtr->next->prev = NULL;
                head = searchPtr->next;
                delete searchPtr;
                searchPtr = NULL; 
            }
            else if(searchPtr->next != NULL)
            {
                searchPtr->next->prev = searchPtr->prev;
                searchPtr->prev->next = searchPtr->next;
                delete searchPtr;
                searchPtr = NULL; 
            }
            else
            {
                tail = head;
                while(tail->next != NULL)
                {
                    tail = tail->next;
                }
                searchPtr = tail;
                searchPtr->prev->next = NULL;
                tail = searchPtr->prev;
                delete searchPtr;
                searchPtr = NULL; 
            }
            
        }
        else
        {
            cout << "I'm sorry, " << "\"" << search << "\""
                << " was NOT found!\n";
        }
    }
    else
    {
        cout << "\nCan't remove from an empty list!\n";
    }
}