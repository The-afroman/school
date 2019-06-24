/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

#include "programmerClass.h"

programmer::programmer() : depNum{0}, svName{"none"}, lastSalInc{0}, cpp{0}, java{0}  
{}
programmer::programmer(std::string name, int id, long int phone, int age, char gender, std::string job, float salary, date hireDate, int depNum, std::string svName, float lastSalInc, bool cpp, bool java)
                        : employee(name, id, phone, age, gender, job, salary, hireDate), depNum{depNum}, svName{svName}, lastSalInc{lastSalInc}, cpp{cpp}, java{java}
{}
programmer::~programmer(){};

void programmer::chDepNum(int depNum)
{this->depNum = depNum;}
void programmer::chSvName(std::string name)
{this->svName = name;}
void programmer::chlastSalInc(float salInc)
{this->lastSalInc = salInc;}
void programmer::chCpp(bool cpp)
{this->cpp = cpp;}
void programmer::chJava(bool java)
{this->java = java;}

void programmer::print(std::ostream &os) const
{
    employee::print(std::cout);
    os << std::left << std::setw(COL_WIDTH) << this->depNum;
    os << std::setw(COL_WIDTH) << this->svName;
    os << std::setw(COL_WIDTH/2) << this->lastSalInc;
    os << std::setw(COL_WIDTH) << ' ';
    if(this->cpp)
        os << std::setw(COL_WIDTH/2) << "Yes";
    else
        os << std::setw(COL_WIDTH/2) << "No";

    if(this->java)
        os << std::setw(COL_WIDTH/2) << "Yes";
    else
        os << std::setw(COL_WIDTH/2) << "No";
 
    os << std::endl;
}


