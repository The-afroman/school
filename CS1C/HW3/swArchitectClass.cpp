/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

#include "swArchitectClass.h"

swArchitect::swArchitect() : depNum{0}, svName{"none"}, lastSalInc{0}, yearsExp{0}  
{}
swArchitect::swArchitect(std::string name, int id, long int phone, int age, char gender, std::string job, float salary, date hireDate, int depNum, std::string svName, float lastSalInc, int yearsExp)
                        : employee(name, id, phone, age, gender, job, salary, hireDate), depNum{depNum}, svName{svName}, lastSalInc{lastSalInc}, yearsExp{yearsExp}
{}
swArchitect::~swArchitect(){};

void swArchitect::chDepNum(int depNum)
{this->depNum = depNum;}
void swArchitect::chSvName(std::string name)
{this->svName = name;}
void swArchitect::chlastSalInc(float salInc)
{this->lastSalInc = salInc;}
void swArchitect::chExp(int exp)
{this->yearsExp = exp;}

void swArchitect::print(std::ostream &os) const
{
    employee::print(std::cout);
    os << std::left << std::setw(COL_WIDTH) << this->depNum;
    os << std::setw(COL_WIDTH) << this->svName;
    os << std::setw(COL_WIDTH/2) << this->lastSalInc;
    os << std::setw(COL_WIDTH) << this->yearsExp;
    os << std::endl;
}
