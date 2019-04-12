/******************************************************************************
 * AUTHOR 		: Faris Hijazi & Paul Abrams
 * STUDENT ID 	: 1039438 &
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
#include <fstream>
using namespace std;

struct perNode
{
	int age;
	string name;
	char gender;
	perNode *next;
	perNode *prev;
};

enum menu
{
	EXIT,
	CREATELST,
	DISP,
	ISEMPTY,
	SEARCH,
	REMOVE,
	CLR
};

void PrintHeader(ostream &output,     //output device
				 char exersize,       //lab or assignment?
				 string exersizeName, //lab or assignment name
				 int num,             //lab or assignment name
				 string names);       //names of programmer(s)

void isEmpty(perNode *&head);

void outputMenu();

void inputfile(perNode *&head);

void getInput(int &menuOpt, perNode *&head);

void searchNode(perNode *&head, perNode *&searchPtr, string search);

void displayList(perNode *&head);

void clearList(perNode *&head);

#endif /* HEADER_H_ */