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

void genreSearchNode(movNode *&head,
                    ostream &output)
{
    movNode *searchPtr;
    string search;
    int i = 1;

    searchPtr = head;

    cout << "Enter a genre: ";
    getline(cin, search, '\n');

    output << left << "GENRE SEARCH\n";
    output << setw(8) << "MOVIE #";
    output << setw(49) << "TITLE";
    output << setw(5) << "YEAR";
    output << setw(7) << "RATING";
    output << setw(18) << "GENRE";
    output << setw(18) << "ALT GENRE";
    output << setw(20) << "LEAD ACTOR";
    output << setw(20) << "SUPPORTING ACTOR";
    output << endl;

    output << left << setfill('-') << setw(7) << '-';
    output << ' ';
    output << setw(48) << '-';
    output << ' ';
    output << setw(4) << '-';
    output << ' ';
    output << setw(6) << '-';
    output << ' ';
    output << setw(17) << '-';
    output << ' ';
    output << setw(17) << '-';
    output << ' ';
    output << setw(19) << '-'; 
    output <<  ' ';
    output << setw(19) << '-';
    output << endl;
    output << setfill(' ');

    while(searchPtr != NULL)
    {
        if(search == searchPtr->genre || search == searchPtr->sGenre)
        {
            output << setw(8) << i;
            output << setw(49) << searchPtr->title;
            output << setw(5) << searchPtr->year;
            output << setw(7) <<searchPtr->rating;
            output << setw(18) << searchPtr->genre;
            output << setw(18) <<searchPtr->sGenre;
            output << setw(20) << searchPtr->lActor;
            output << setw(20) << searchPtr->sActor << endl;
            i++;
            searchPtr = searchPtr->next;
        }
        else
        {
            searchPtr = searchPtr->next;
        }
    }
    cout << endl << endl;
}