#include "dateClass.h"

class employee
{
    public:
        employee();
        employee(std::string name, int id, int phone, int age, bool gender, std::string job, float salary, date hireDate);
        ~employee();

        void chName(std::string name);
        void chId(int id);
        void chPhone(int phone);
        void chAge(int age);
        void chGender(bool gender);
        void chJob(std::string job);
        void chSalary(float salary);
        void chHireDate(date hireDate);

    private:
        std::string name;
        int id;
        int phoneNum;
        int age;
        bool gender;
        std::string jobTitle;
        float salary;
        date hireDate;

    
};