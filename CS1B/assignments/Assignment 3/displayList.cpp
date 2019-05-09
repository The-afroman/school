/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will display contents of a linked list
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of linked list
 *          output - where to output list
 * OUTPUT:
 *          contents of linked list
 *****************************************************************************/

#include "header.h"

void displayList(movNode *&head, ostream &output)
{
    movNode *perPtr; //CALC - pointer to display nodes in list 
    int i = 1;
    perPtr = head->next;
    
    cout << "\nListing all movies...\n";

    output << left << "COMPLETE MOVIE LISTING\n";
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
    while(perPtr != NULL) //MAIN LOOP
    {
        //getInput(menuOpt, head, ofile);
        output << setw(8) << i;
        output << setw(49) << perPtr->title;
        output << setw(5) << perPtr->year;
        output << setw(7) <<perPtr->rating;
        output << setw(18) << perPtr->genre;
        output << setw(18) <<perPtr->sGenre;
        output << setw(20) << perPtr->lActor;
        output << setw(20) << perPtr->sActor << endl;
        i++;
        perPtr = perPtr->next;
    }
    output << endl << endl;
}