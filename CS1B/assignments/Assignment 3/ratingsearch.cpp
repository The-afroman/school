/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will search the list for the rating specified and output
 * the result to output.
 *----------------------------------------------------------------------------
 * INPUT:
 *          head      - head of the list
 *          output    - output device to use
 * OUTPUT:
 *          movie list for rating specified
 *****************************************************************************/

#include "header.h"

void ratingSearchNode(movNode *&head,
                    ostream &output)
{
    movNode *searchPtr;
    int search;
    int i = 0;
    bool found = false;
    bool invalid;
    ostringstream temp;

    searchPtr = head;

    
    do
    {
        cout << "Enter rating: ";
        if(!(cin >> search))
        {
            cout << "\n**** Please input a number between 0 and 9 ****\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            invalid = true;
        }
        else if(search < 0 || search > 9)
        {
            cout << "\n**** The number " <<  search << " is an invalid entry ****\n";
            cout << "**** Please input a number between 0 and 9 ****\n";
            invalid =  true;
        }
        else
        {
            cin.ignore(1000, '\n');
            invalid = false;
        }
    }while(invalid);
    cout << "\nSearching for " << search << endl;

    while(searchPtr != NULL)
    {
        if(search == searchPtr->rating)
        {
            i++;
            found = true;
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

        output << left << "RATING SEARCH\n";
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