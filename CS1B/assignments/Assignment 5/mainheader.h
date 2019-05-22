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
#include <fstream>
using namespace std;

struct DVDNode 
{ 
	string title;			// store movie's title 
	string lActor;			// store leading actor/actress 
	string sActor;			// store supporting actor/actress 
	string genre;    		// store movie’s genre 
	string sGenre; 			// store movie’s alternate genre 
	int year;				// store movie’s release year 
	int rating;				// store movie’s rating 
	string synopsis;		// store movie’s synopsis 
	DVDNode *next;			// linked list next pointer 
}; 

#endif /* HEADER_H_ */