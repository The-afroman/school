#include "dateClass.h"

class employee
{
    public:
        employee();
        employee(std::string name, int id, int phone, int age, bool gender, std::string job, float salary, date hireDate);
        ~employee();

    private:
        std::string name;
        int id;
        int phoneNum;
        int age;
        bool gender;
        std::string jobTitle;
        float salary;
        date hireDate;

    
}