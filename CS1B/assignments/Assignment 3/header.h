/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Assignment 3 : Searching Linked Lists 
 * CLASS		: CS1A
 * SECTION 		: MW 7:30PM
 * DUE DATE		: 04/15/19
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



struct movNode
{
	string title;
	string genre;
	string sGenre;
	string lActor;
	string sActor;
	string synopsis;
	int year;
	int rating;
	movNode *next;
};

enum menu
{
	EXIT,
	OUTPUTL,
	TSEARCH,
	GSEARCH,
	ASEARCH,
	YSEARCH,
	RSEARCH
};

void PrintHeader(ostream &output,     	  //output device
				 char exersize,       	  //lab or assignment?
				 string exersizeName, 	  //lab or assignment name
				 int num,             	  //lab or assignment name
				 string names);           //names of programmer(s)

void outputMenu();

void inputfile(movNode *&head);		      //head of list

void getInput(int &menuOpt,				  //user menu option
			  movNode *&head,		      //head of list
			  ofstream &ofile);           //output file variable

void titleSearchNode(movNode *&head,	  //head of list
                    ostream &output);	  //where to display output

void displayList(movNode *&head,		  //head of list
				ostream &output);	      //where to display output

void wordWrap(ostream &output,			  //where to display output
			  movNode *&searchPtr);		  //node for word wrap

void actorSearchNode(movNode *&head,	  //head of list
                    ostream &output);	  //where to display output

void genreSearchNode(movNode *&head,	  //head of list
                    ostream &output);	  //where to display output

void yearSearchNode(movNode *&head,		  //head of list
                    ostream &output);	  //where to display output

void ratingSearchNode(movNode *&head,     //head of list
                    ostream &output);	  //where to display output

#endif /* HEADER_H_ */