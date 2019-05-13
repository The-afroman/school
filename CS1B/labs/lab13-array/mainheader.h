/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 14		: Arrays and Linked Lists of Sheep
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 05/09/19
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

void outputMenu();

int menuInput();

void PrintHeader(ostream &output,	//output device to use
				char exersize,		//assignment or lab
				string exersizeName,//name of exersize
				int num,			//as or lab number
				string names);		//names

#endif /* HEADER_H_ */