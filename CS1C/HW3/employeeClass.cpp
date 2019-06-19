# include "employeeClass.h"

employee::employee(std::string name, int id, int phone, int age, bool gender, 
                   std::string job, float salary, date hireDate)
                   : name{name}, id{id}, phoneNum{phone}, age{age}, gender{gender}, jobTitle{job}, salary{salary}, hireDate{hireDate}
{
    
}