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
using namespace std;

struct perNode
{
	int age;
	string name;
	char gender;
	perNode *next;
};

enum menu
{
	EXIT,
	PUSH,
	POP,
	ISEMPTY,
	PEEK,
	SIZE
};

void PrintHeader(ostream &output,     //output device
				 char exersize,       //lab or assignment?
				 string exersizeName, //lab or assignment name
				 int num,             //lab or assignment name
				 string names);       //names of programmer(s)

void getInput(int &menuOpt,			  //menu option
			  perNode *&head);		  //head of list

void outputMenu();

void push(perNode *&head);			  //head of list

void pop(perNode *&head);			  //head of list

void isEmpty(perNode *&head);	      //head of list

void peek(perNode *&head);			  //head of list

int size(perNode *&head);	          //head of list

#endif /* HEADER_H_ */
