/******************************************************************************
 * AUTHOR 		: Faris Hijazi
 * STUDENT ID 	: 1039438
 * Hw 03     	:
 * CLASS		: CS1C
 * SECTION 		: M,T,W,TH 3:00PM
 * DUE DATE		: 06/21/19
 *****************************************************************************/

#include "programmerClass.h"

class swArchitect : public employee
{
    public:
        swArchitect();
        swArchitect(std::string name, int id, long int phone, int age, char gender, std::string job, float salary, date hireDate, int depNum, std::string svName, float lastSalInc, int yearsExp);
        ~swArchitect();

        /* MUTATORS */
        //pre-conditions : pass in parameter
        //post-conditions : private data member is changed
        void chDepNum(int depNum);
        void chSvName(std::string name);
        void chlastSalInc(float salInc);
        void chExp(int exp);

        /* ACCESSORS */
        void print(std::ostream &os) const;
 
    private:
        int depNum;
        std::string svName;
        float lastSalInc;
        int yearsExp;
};