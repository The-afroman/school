 /******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 5	: DVD Movie List Intro to OOP
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/21/19
 *****************************************************************************/

#include "classheader.h"

int main()
{
    MovieList movieList;    //IN&OUT - instance of MovieList class
    string input;           //IN     - file name input
    string ofileName;       //IN     - name of output file
    string ifileName;       //IN     - name of input file

    //get names of in and out files
    cout << "which output file would you like to use (d for default) ?: ";
    getline(cin, input);//name output file
    if(input == "d")
    {
        ofileName = "outfile.txt";
    }
    else
    {
        ofileName = input;
    }

    cout << "which input file would you like to use (d for default) ?: ";
    getline(cin, ifileName);//name output file
    if(input == "d")
    {
        ifileName = "inputfile.txt";
    }
    else
    {
        ifileName = input;
    }
    cout << endl;

    //create and output list
    movieList.CreateList(ifileName);
    movieList.OutputList(ofileName);

    return 0;
}