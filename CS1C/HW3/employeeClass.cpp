# include "employeeClass.h"
employee::employee() : name{"none"}, id{0}, phoneNum{0}, age{0}, gender{0}, jobTitle{none}, salary{0}, hireDate{date()}
{}
employee::employee(std::string name, int id, int phone, int age, bool gender, std::string job, float salary, date hireDate)
                            : name{name}, id{id}, phoneNum{phone}, age{age}, gender{gender}, jobTitle{job}, salary{salary}, hireDate{hireDate}
{}

void employee::chName(std::string name)
{this->name = name;}
void employee::chId(int id)
{this->id = id;}
void employee::chPhone(int phone)
{this->phoneNum = phone;}
void employee::chAge(int age)
{this->age = age;}
void employee::chGender(bool gender)
{this->gender = gender;}
void employee::chJob(std::string job)
{this->jobTitle = job;}
void employee::chSalary(float salary)
{this->salary = salary;}
void employee::chHireDate(date hireDate)
{this->hireDate = hireDate;}
