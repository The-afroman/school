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

void getInput(int &menuOpt, movNode *&head, ofstream &ofile);

void titleSearchNode(movNode *&head,
                      ostream &output);

void intSearchNode(movNode *&head,		  //head of list
                   movNode *&searchPtr,   //
                   int &menuOpt,
                   int search);			  //

void displayList(movNode *&head, ostream &output);	      //head of list	

void wordWrap(ostream &output, movNode *&searchPtr);

void actorSearchNode(movNode *&head,
                    ostream &output);

void genreSearchNode(movNode *&head,
                    ostream &output);

void yearSearchNode(movNode *&head,
                    ostream &output);

void ratingSearchNode(movNode *&head,
                    ostream &output);

#endif /* HEADER_H_ */