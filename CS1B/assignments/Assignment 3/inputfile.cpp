/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
 *****************************************************************************/

/******************************************************************************
 * This function will get information from an infile and create a 
 * linked list.
 *----------------------------------------------------------------------------
 * INPUT:
 *          head - head of the new list
 * OUTPUT:
 *          linked list
 *****************************************************************************/

#include "header.h"

void inputfile(movNode *&head)
{
    ifstream infile;     //IN   - inputfile variable
    movNode *searchPtr;  //CALC - searching ptr, for adding to middle of list
    movNode *perPtr;     //CALC - ptr to keep track of new nodes
    movNode *tail;       //CALC - for finding tail of list
    bool found = false;  //CALC - determine if location to add to middle found
    string infileName;
    
    cout << "which input file would you like to use (d for default) ?: ";
    getline(cin, infileName);
    if(infileName == "d")
    {
        infileName = "infile.txt";
    }
    infile.open(infileName);

    cout << endl;

    while(infile)
    {
        perPtr = new movNode;
        getline(infile, perPtr->title);
        getline(infile, perPtr->lActor);
        getline(infile, perPtr->sActor);
        getline(infile, perPtr->genre);
        getline(infile, perPtr->sGenre);
        infile >> perPtr->year;
        infile.ignore(1000, '\n');
        infile >> perPtr->rating;
        infile.ignore(1000, '\n');
        getline(infile, perPtr->synopsis);
        infile.ignore(1000, '\n');
        searchPtr = NULL;
        perPtr->next = head;
        head = perPtr;
        perPtr = NULL;
    }
    infile.close();
}