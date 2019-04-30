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

void titleSearchNode(movNode *&head,
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
        cout << endl <<endl;
        cout << "START:";
        cout << searchPtr->title;
        if(search == searchPtr->title)
        {
            cout << "\nTITLEFOUND\n";
            found = true;
            ofile << left;
            ofile << setfill('*') << setw(MAX_WIDTH_TITLE)
                  << '*' << endl;
            ofile << searchPtr->title << endl;
            ofile << setfill('-') << setw(MAX_WIDTH_TITLE) << '-' << endl;
            ofile << setfill(' ') << "Year: " << setw(COL_SIZE_TITLE-6) 
                  << searchPtr->year;
            ofile << setw(COL_SIZE_TITLE) << "Rating: " 
                    << searchPtr->rating << endl;
            ofile << setfill('-') << setw(MAX_WIDTH_TITLE)
                  << '-' << endl;
            ofile << setfill(' ') << setw(COL_SIZE_TITLE)
                    << "Leading Actor:" << setw(COL_SIZE_TITLE)
                    << searchPtr->lActor << setw(COL_SIZE_TITLE)
                    << "Genre 1: " << searchPtr->genre << endl;
            ofile << setw(COL_SIZE_TITLE)
                    << "Supporting Actor:" << setw(COL_SIZE_TITLE)
                    << searchPtr->sActor << setw(COL_SIZE_TITLE)
                    << "Genre 2: " << searchPtr->sGenre << endl;
            ofile << setfill('-') << setw(MAX_WIDTH_TITLE) << '-';
            ofile << "\nPLOT:\n";
            wordWrap(ofile, searchPtr);
            ofile << setfill('*') << setw(MAX_WIDTH_TITLE)
                  << '*' << endl << endl << endl;
        }
        else
        {
            searchPtr = searchPtr->next;
        }
    }
}