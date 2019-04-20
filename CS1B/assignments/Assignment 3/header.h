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
	string title;
	string genre;
	string sGenre;
	string lActor;
	string sActor;
	string synopsis;
	int year;
	int rating;
	perNode *next;
};

enum menu
{
	EXIT,
	OUTPUTL,
	TSEARCH,
	ASEARCH,
	GSEARCH,
	YSEARCH,
	RSEARCH
};

void PrintHeader(ostream &output,     	  //output device
				 char exersize,       	  //lab or assignment?
				 string exersizeName, 	  //lab or assignment name
				 int num,             	  //lab or assignment name
				 string names);           //names of programmer(s)

void outputMenu();

void inputfile(perNode *&head);		      //head of list

void getInput(int &menuOpt, perNode *&head, ofstream &ofile);

void stringSearchNode(perNode *&head,
                      ofstream &ofile);

void intSearchNode(perNode *&head,		  //head of list
                   perNode *&searchPtr,   //
                   int &menuOpt,			  //
                   int search);			  //

void displayList(perNode *&head);	      //head of list

#endif /* HEADER_H_ */