/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
 *****************************************************************************/

/******************************************************************************
 * This function will search the list for the name specified and change
 * searchPtr
 *----------------------------------------------------------------------------
 * INPUT:
 *          head      - head of the list
 *          searchPtr - search pointer
 * OUTPUT:
 *          NA
 *****************************************************************************/

#include "header.h"

void intSearchNode(perNode *&head,
                   perNode *&searchPtr,
                   int menuOpt,
                   int search)
    {
    searchPtr = head;
    bool found = false;

    while(!found  && searchPtr != NULL)
    {
        switch(menuOpt)
        {
        case YSEARCH:  
            if(searchPtr->year == search)
            {
                found = true;
            }
            else
            {
                searchPtr = searchPtr->next;
            }
            break;
        case RSEARCH:  
            if(searchPtr->rating == search)
            {
                found = true;
            }
            else
            {
                searchPtr = searchPtr->next;
            }
            break;
        }
    }
}