/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Lab 10		: Creating an Ordered List
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/11/19
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

void isEmpty(perNode *&head);		  //head of list

void outputMenu();

void inputfile(perNode *&head);		  //head of list

void getInput(int &menuOpt,			  //user menu option (0-6)
			  perNode *&head);

void searchNode(perNode *&head,       //head of list
				perNode *&searchPtr,  //searching ptr
				string search);		  //string to search for

void displayList(perNode *&head);	  //head of list

void clearList(perNode *&head);		  //head of list

void removeNode(perNode *&head);	  //head of list

#endif /* HEADER_H_ */