/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

#include "dateClass.h"

const int COL_WIDTH = 20;

class employee
{
    public:
        employee();
        employee(std::string name, int id, long int phone, int age, char gender, std::string job, float salary, date hireDate);
        ~employee();

        /* MUTATORS */
        //pre-conditions : pass in parameter
        //post-conditions : private data member is changed
        void chName(std::string name);
        void chId(int id);
        void chPhone(long int phone);
        void chAge(int age);
        void chGender(char gender);
        void chJob(std::string job);
        void chSalary(float salary);
        void chHireDate(date hireDate);

        /* ACCESSORS */
        void print(std::ostream &output) const;

    private:
        std::string name;
        int id;
        long int phoneNum;
        int age;
        char gender;
        std::string jobTitle;
        float salary;
        date hireDate;

    
};