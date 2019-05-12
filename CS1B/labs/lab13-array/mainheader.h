/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 9		: Implementing a Stack
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/02/19
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

#endif /* HEADER_H_ */