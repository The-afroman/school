/******************************************************************************
 * AUTHOR 		: Faris Hijazi &
 * STUDENT ID 	: 1039438 &
 * Lab 9		: 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 03/14/19
 *****************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_
#include <string>
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
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

void getInput(perNode *&head);

void outputMenu();

void push(perNode *&head);

void pop(perNode *&head);

void isEmpty(perNode *&head);

void peek(perNode *&head);

int size(perNode *&head);

#endif /* HEADER_H_ */
