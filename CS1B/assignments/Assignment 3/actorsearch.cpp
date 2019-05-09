/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will search the list for the name specified and output
 * the result to output.
 *----------------------------------------------------------------------------
 * INPUT:
 *          head      - head of the list
 *          output    - output device to use
 * OUTPUT:
 *          movie list for actor specified
 *****************************************************************************/

#include "header.h"

void actorSearchNode(movNode *&head,
                    ostream &output)
{
    movNode *searchPtr; //CALC&OUT - node to check and output at end
    string search;      //CALC     - target to search for
    ostringstream temp; //CALC     - temp location to output matches
    int i = 0;          //CALC&OUT - number of matches
    bool found = false; //CALC     - match found?

    searchPtr = head;

    cout << "Enter an actor: ";
    getline(cin, search, '\n');
    cout << "\nSearching for " << search << endl;

    while(searchPtr != NULL)
    {
        if(search == searchPtr->lActor || search == searchPtr->sActor)
        {
            found = true;
            i++;
            temp << left;
            temp << setw(8) << i;
            temp << setw(49) << searchPtr->title;
            temp << setw(5) << searchPtr->year;
            temp << setw(7) <<searchPtr->rating;
            temp << setw(18) << searchPtr->genre;
            temp << setw(18) <<searchPtr->sGenre;
            temp << setw(20) << searchPtr->lActor;
            temp << setw(20) << searchPtr->sActor << endl;
            searchPtr = searchPtr->next;
        }
        else
        {
            searchPtr = searchPtr->next;
        }
    }
    if(!found)
    {
        cout << "No movies for " << search << " found.\n";
    }
    else
    {
        cout << i << " movies found for " << search << " found\n";

        output << left << "ACTOR SEARCH\n";
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

        output << temp.str() << endl << endl;
    }
}