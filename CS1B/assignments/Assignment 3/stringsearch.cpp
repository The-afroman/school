/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will search the list for the movie specified and output it to output
 *----------------------------------------------------------------------------
 * INPUT:
 *          head      - head of the list
 *          output    - output device to use
 * OUTPUT:
 *          movie listing
 *****************************************************************************/

#include "header.h"

void titleSearchNode(movNode *&head,
                      ostream &output)
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
    cout << "\nSearching for " << search << endl;
    while(!found  && searchPtr != NULL)
    {
        if(search == searchPtr->title)
        {
            //cout << "\nTITLEFOUND\n";
            found = true;
            output << left;
            output << setfill('*') << setw(MAX_WIDTH_TITLE)
                  << '*' << endl;
            output << searchPtr->title << endl;
            output << setfill('-') << setw(MAX_WIDTH_TITLE) << '-' << endl;
            output << setfill(' ') << "Year: " << setw(COL_SIZE_TITLE-6) 
                  << searchPtr->year;
            output << setw(COL_SIZE_TITLE) << "Rating: " 
                    << searchPtr->rating << endl;
            output << setfill('-') << setw(MAX_WIDTH_TITLE)
                  << '-' << endl;
            output << setfill(' ') << setw(COL_SIZE_TITLE)
                    << "Leading Actor:" << setw(COL_SIZE_TITLE)
                    << searchPtr->lActor << setw(COL_SIZE_TITLE)
                    << "Genre 1: " << searchPtr->genre << endl;
            output << setw(COL_SIZE_TITLE)
                    << "Supporting Actor:" << setw(COL_SIZE_TITLE)
                    << searchPtr->sActor << setw(COL_SIZE_TITLE)
                    << "Genre 2: " << searchPtr->sGenre << endl;
            output << setfill('-') << setw(MAX_WIDTH_TITLE) << '-';
            output << "\nPLOT:\n";
            wordWrap(output, searchPtr);
            output << setfill('*') << setw(MAX_WIDTH_TITLE)
                  << '*' << endl << endl;
        }
        else
        {
            searchPtr = searchPtr->next;
        }
        output << setfill(' ');
    }
    if(!found)
    {
        cout << search << " was not found.\n";
    }
    else
    {
        cout << search << " found!\n";
    }
}