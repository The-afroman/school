#include "employeeClass.h"

class swArchitect : public employee
{
    public:
    swArchitect();
    swArchitect(int depNum, std::string svName, float lastSalInc, int yearsExp);
    ~swArchitect();

    void swArchitect::chDepNum(int depNum);
    void swArchitect::chSvName(std::string name);
    void swArchitect::chlastSalInc(float salInc);
    void swArchitect::chExp(int exp);
 
    private:
        int depNum;
        std::string svName;
        float lastSalInc;
        int yearsExp;
};