 /******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 5	: DVD Movie List Intro to OOP
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/21/19
 *****************************************************************************/

#include "classheader.h"

/**
 *  StackList Methods
 */
 
StackList::StackList()
{
    stackCount = 0;
    head = NULL;
}

StackList::~StackList()
{
    DVDNode *DVDPtr;    //pointer to keep track of nodes

    while(head != NULL)
    {
        DVDPtr = head;
        head = DVDPtr->next;
        delete DVDPtr;
    }
}

/******************************************************************************
 * This method will add a node to a linked list
 *----------------------------------------------------------------------------
 * INPUT:
 * 		newDVD - new node to add
 * OUTPUT:
 * 		NA
 *****************************************************************************/
void StackList::Push(DVDNode newDVD)
{
    DVDNode *DVDPtr;    //pointer to keep track of nodes

    DVDPtr = new DVDNode;
    if(DVDPtr != NULL)
    {
        *DVDPtr = newDVD;
        DVDPtr->next = head;
        head = DVDPtr;
        DVDPtr = NULL;
    }
    stackCount++;
}

/**
 *  MovieList Methods
 */
MovieList::MovieList()
{}
MovieList::~MovieList()
{}

/******************************************************************************
 * This method will create a linked list
 *----------------------------------------------------------------------------
 * INPUT:
 * 		inFileName - name of input file
 * OUTPUT:
 * 		NA
 *****************************************************************************/
void MovieList::CreateList(string inFileName)
{
    ifstream infile;    //input file name
    DVDNode newNode;    //pointer to keep track of nodes

    infile.open(inFileName);
    while(infile)
    {
        getline(infile, newNode.title);
        getline(infile, newNode.lActor);
        getline(infile, newNode.sActor);
        getline(infile, newNode.genre);
        getline(infile, newNode.sGenre);
        infile >> newNode.year;
        infile.ignore(1000, '\n');
        infile >> newNode.rating;
        infile.ignore(1000, '\n');
        getline(infile, newNode.synopsis);
        infile.ignore(1000, '\n');
        StackList::Push(newNode);
    }
    infile.close();
}

/******************************************************************************
 * This method will output a linked list to a specified output file
 *----------------------------------------------------------------------------
 * INPUT:
 * 		outFileName - name of output file
 * OUTPUT:
 * 		formatted linked list
 *****************************************************************************/

void MovieList::OutputList(string outFileName) const
{
    const int COL_SIZE_TITLE = 18; //col width
    const int MAX_WIDTH_TITLE = 75;//col width

    int i = 0;          //counter for nodes outputted
    ofstream ofile;     //output file variable
    DVDNode *DVDPtr;    //pointer to keep track of nodes

    ofile.open(outFileName);

    PrintHeader(ofile, 'A',"DVD Movie List", 5, "Faris Hijazi");
    DVDPtr = head;
    while(DVDPtr != NULL)
    {
        ofile << left;
        ofile << setfill('*') << setw(MAX_WIDTH_TITLE)
            << '*' << endl;
        ofile << setfill(' ');
        ofile << setw(COL_SIZE_TITLE-6) << "MOVIE # " + to_string(++i);
        ofile << "Title: " << DVDPtr->title << endl;
        ofile << setfill('-') << setw(MAX_WIDTH_TITLE) << '-' << endl;
        ofile << setfill(' ') << "Year: " << setw(COL_SIZE_TITLE-6) 
            << DVDPtr->year;
        ofile << setw(COL_SIZE_TITLE) << "Rating: " 
                << DVDPtr->rating << endl;
        ofile << setfill('-') << setw(MAX_WIDTH_TITLE)
            << '-' << endl;
        ofile << setfill(' ') << setw(COL_SIZE_TITLE)
                << "Leading Actor:" << setw(COL_SIZE_TITLE)
                << DVDPtr->lActor << setw(COL_SIZE_TITLE)
                << "Genre 1: " << DVDPtr->genre << endl;
        ofile << setw(COL_SIZE_TITLE)
                << "Supporting Actor:" << setw(COL_SIZE_TITLE)
                << DVDPtr->sActor << setw(COL_SIZE_TITLE)
                << "Genre 2: " << DVDPtr->sGenre << endl;
        ofile << setfill('-') << setw(MAX_WIDTH_TITLE) << '-';
        ofile << "\nPLOT:\n";
        wordwrap(ofile, DVDPtr);
        ofile << setfill('*') << setw(MAX_WIDTH_TITLE)
            << '*' << endl << endl;
        ofile << setfill(' ');
        DVDPtr = DVDPtr->next;
    }
    ofile.close();
}


/******************************************************************************
 * This method will word wrap a given line to 75 charcters per line
 *----------------------------------------------------------------------------
 * INPUT:
 * 		output  - output device
 *      DVDPtr  - Pointer to struct to access string member 
 * OUTPUT:
 * 		word wraped string
 *****************************************************************************/
void MovieList::wordwrap(ostream &output, DVDNode *&DVDPtr) const
{
    const int MAX = 75; //max width of line
    int i;              //for loop lcv
    int j;              //for loop lcv
    string word;        //indivisual word
    string line;        //indivisual line
    for(i=0;i < DVDPtr->synopsis.size();i++)
    {
        if(DVDPtr->synopsis[i] != ' ')
        {
            word += DVDPtr->synopsis[i];
        }
        else
        {
            if (word.size() + line.size() > MAX)
            {
                output << line;
                output << endl;
                line.clear();
            }
            line += word + ' ';
            word.clear();
        }
        if(i == DVDPtr->synopsis.size()-1)
        {
            output << line << word << endl;
        }
    }
}

/******************************************************************************
 * This function will output the class header using ostream
 *----------------------------------------------------------------------------
 * INPUT:
 * 		output 		- output file variable
 * 		exersize	- Lab or Assignment
 * 		exersizeName- name of exersize
 * 		num			- number of Lab/Assignment
 * 		names		- names of programmers
 * OUTPUT:
 * 		header
 *****************************************************************************/
void MovieList::PrintHeader(ostream &output, char exersize, string exersizeName,  int num, string names) const
{

	int colWidth;  //CALC - changes based on exersize
	string asType; //CALC - changes based on exersize

	if(exersize == 'L')
	{
		asType = "Lab";
		colWidth = 9;
	}
	else
	{
		asType = "Assignment";
		colWidth = 2;
	}

	output << left;
	output <<"************************************************\n";
	output <<"* PROGRAMMED BY : "  << names << endl;
	output <<"* "<< setw(14) << "CLASS"   << ": " << "CS1A"    << endl;
	output <<"* "<< setw(14) << "SECTION" << ": " << "MW: 7:30P"  << endl;
	output <<"* "<< asType << " #" << setw(colWidth)  << num   << ": " << exersizeName << endl;
	output <<"************************************************\n\n";
	output << right;
}
