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

bool operator==(const employee &obj1,const employee &obj2)
{
    if(obj1.phoneNum == obj2.phoneNum)
        return 1;
    else
        return 0;
    
}

bool operator!=(const employee &obj1,const employee &obj2)
{
    if(obj1.phoneNum != obj2.phoneNum)
        return 1;
    else
        return 0;
    
}

void employee::incAge(int age)
{
    this->age += age;
    std::cout << "Age of " + this->name + " was incrimented by " + std::to_string(age) << std::endl << std::endl;
}

employee &employee::operator+(int incAge)
{
    this->incAge(incAge);
    return *this;
}

std::ostream &operator<<(std::ostream &os, const employee &obj)
{
    os << std::left << std::setw(COL_WIDTH) << obj.name;
    os << std::setw(COL_WIDTH) << obj.id;
    os << std::setw(COL_WIDTH) << obj.phoneNum;
    os << std::setw(COL_WIDTH/2) << obj.age;
    os << std::setw(COL_WIDTH/2) << obj.gender;
    os << std::setw(COL_WIDTH) << obj.jobTitle;
    os << std::setw(COL_WIDTH) << obj.salary;
    os << std::setw(COL_WIDTH) << obj.hireDate;
    os << std::right;

    return os;
}

std::istream &operator>>(std::istream &is, employee &obj)
{
    std::cout << "name: ";
    getline(is, obj.name);
    std::cout << "id: ";
    is >> obj.id;
    std::cout << "phone num: ";
    is >> obj.phoneNum;
    std::cout << "age: ";
    is >> obj.age;
    std::cout << "gender: ";
    is >> obj.gender;
    std::cout << "job: ";
    is >> obj.jobTitle;
    std::cout << "salary: ";
    is >> obj.salary;
    is >> obj.hireDate;

    return is;
}

employee &employee::operator++()
{
    this->age++;
    return *this;
}

employee employee::operator++(int)
{
    employee temp(*this); //make copy to return
    ++(*this);
    return temp;
}