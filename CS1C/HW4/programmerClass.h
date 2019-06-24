/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

#include "employeeClass.h"

class programmer : public employee
{
    public:
        programmer();
        programmer(std::string name, int id, long int phone, int age, char gender, std::string job, float salary, date hireDate, int depNum, std::string svName, float lastSalInc, bool cpp, bool java);
        ~programmer();

        /* MUTATORS */
        //pre-conditions : pass in parameter
        //post-conditions : private data member is changed
        void chDepNum(int depNum);
        void chSvName(std::string svName);
        void chlastSalInc(float salInc);
        void chCpp(bool cpp);
        void chJava(bool java);

        /* ACCESSORS */
        //prints to os specified cout default
        void print(std::ostream &os = std::cout) const;

    private:
        int depNum;
        std::string svName;
        float lastSalInc;
        bool cpp;
        bool java;
};