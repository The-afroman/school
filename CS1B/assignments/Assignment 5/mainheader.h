 /******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * ASSIGNMENT 5	: DVD Movie List Intro to OOP
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/21/19
 *****************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_
#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <ios> 
using namespace std;

enum menu
{
	EXIT,
	ADD,
	PEEK,
	SEARCH,
	SIZE,
	OUTPUT,
	CLEAR
};

struct DVDNode 
{ 
	string title;			// store movie's title 
	string leadingActor;	// store leading actor/actress 
	string supportingActor;// store supporting actor/actress 
	string genre;    		// store movie’s genre 
	string alternateGenre; // store movie’s alternate genre 
	int year;				// store movie’s release year 
	int rating;			// store movie’s rating 
	string synopsis;		// store movie’s synopsis 
	DVDNode *next;			// linked list next pointer 
}; 

void outputMenu();

int menuInput();

void PrintHeader(ostream &output,	//output device to use
				char exersize,		//assignment or lab
				string exersizeName,//name of exersize
				int num,			//as or lab number
				string names);		//names

#endif /* HEADER_H_ */