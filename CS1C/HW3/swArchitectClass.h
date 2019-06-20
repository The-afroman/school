#include "employeeClass.h"

class swArchitect
{
    public:
    swArchitect();
    swArchitect(int depNum, std::string svName, float lastSalInc, int yearsExp);
    ~swArchitect();

    private:
        int depNum;
        std::string svName;
        float lastSalInc;
        int yearsExp;
};