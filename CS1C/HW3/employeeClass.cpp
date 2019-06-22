/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

# include "employeeClass.h"

employee::employee() : name{"none"}, id{0}, phoneNum{0}, age{0}, gender{'M'}, jobTitle{"none"}, salary{0}, hireDate{date()}
{}
employee::~employee(){};
employee::employee(std::string name, int id, long int phone, int age, char gender, std::string job, float salary, date hireDate)
                            : name{name}, id{id}, phoneNum{phone}, age{age}, gender{gender}, jobTitle{job}, salary{salary}, hireDate{hireDate}
{}

void employee::chName(std::string name)
{this->name = name;}
void employee::chId(int id)
{this->id = id;}
void employee::chPhone(long int phone)
{this->phoneNum = phone;}
void employee::chAge(int age)
{this->age = age;}
void employee::chGender(char gender)
{this->gender = gender;}
void employee::chJob(std::string job)
{this->jobTitle = job;}
void employee::chSalary(float salary)
{this->salary = salary;}
void employee::chHireDate(date hireDate)
{this->hireDate = hireDate;}

void employee::print(std::ostream &os) const
{
    os << std::left << std::setw(COL_WIDTH) << this->name;
    os << std::setw(COL_WIDTH) << this->id;
    os << std::setw(COL_WIDTH) << this->phoneNum;
    os << std::setw(COL_WIDTH/2) << this->age;
    os << std::setw(COL_WIDTH/2) << this->gender;
    os << std::setw(COL_WIDTH) << this->jobTitle;
    os << std::setw(COL_WIDTH) << this->salary;
    os << std::setw(COL_WIDTH) << this->hireDate;
    os << std::right;
}
