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
        void incAge(int age);
        //pre-conditions : incAge int is passed in
        //post-conditions : age data member is incrimented by incAge
        //                  employee reference is returned
        employee &operator+(int incAge);
        //preInc OL
        employee &operator++();
        //postInc OL
        employee operator++(int);
        //pre-conditions : passes in istream and employee reference
        //post-conditions : data extracted from is and put into data members
        //                  istream reference is returned
        friend std::istream &operator>>(std::istream &is, employee &obj);

        /* ACCESSORS */
        void print(std::ostream &output) const;
        //pre-conditions : two employee references passed in
        //post-conditions : age data members conpared and bool returned
        friend bool operator==(const employee &obj1,const employee &obj2);
        friend bool operator!=(const employee &obj1,const employee &obj2);
        //pre-conditions : passes in ostream and employee reference
        //post-conditions : data insterted from members to os
        //                  ostream reference is returned
        friend std::ostream &operator<<(std::ostream &os, const employee &obj);

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