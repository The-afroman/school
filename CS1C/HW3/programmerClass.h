#include "employeeClass.h"

class programmer : public employee
{
    public:
    programmer();
    programmer(int depNum, std::string svName, float lastSalInc, bool cpp, bool java);
    ~programmer();

    void chDepNum(int depNum);
    void chSvName(std::string svName);
    void chlastSalInc(float salInc);
    void chCpp(bool cpp);
    void chJava(bool java);
    private:
        int depNum;
        std::string svName;
        float lastSalInc;
        bool cpp;
        bool java;
};