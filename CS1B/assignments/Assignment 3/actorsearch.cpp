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

void actorSearchNode(movNode *&head,
                    ofstream &ofile)
{
    movNode *searchPtr;
    string search;
    const int COL_SIZE_TITLE = 18;
    const int MAX_WIDTH_TITLE = 75;   
    bool found = false;
    int n = 1;

    searchPtr = head;

    cout << "Enter a title: ";
    getline(cin, search, '\n');
    cout << search;
    while(!found  && searchPtr != NULL)
    {
        if(search == searchPtr->title)
        {
            found = true;
            ofile << left;
            ofile << setw(8) << "MOVIE #";
            ofile setw(50) << "TITLE";
        }
        else
        {
            searchPtr = searchPtr->next;
        }
    }
}