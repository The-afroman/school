/*******************************************************************************
 * AUTHOR     :Faris Hijazi
 * STUDENT ID :1039438
 * LAB #12    :Recursion Performance
 * CLASS      :CS1B
 * SECTION    :MW: 7:30pm
 * DUE DATE   :4/30/19
 ******************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <ios> 
#include<chrono>
#include<ctime>
using namespace std::chrono;
using namespace std;

enum menu
{
    EXIT,
	FAC,
	FIB,
	FACP,
	FIBP
};

void PrintHeader(ostream &output,     	  //output device
				 char exersize,       	  //lab or assignment?
				 string exersizeName, 	  //lab or assignment name
				 int num,             	  //lab or assignment name
				 string names);           //names of programmer(s)

long long factorial(long long num);		  //num to calulate factorial of

long long factorialR(long long num);      //num to calulate factorial of

string fib(long num);					  //numbers in series to display

long fibR(long num);					  //number in series to display

string outputArray(long arr[],			  //array to output
				   int num);			  //number of elements to output

void outputMenu();

int menuInput();

#endif /* HEADER_H_ */