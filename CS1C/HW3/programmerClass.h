#include "employeeClass.h"

class programmer
{
    public:
    programmer();
    programmer(int depNum, std::string svName, float lastSalInc, bool cpp, bool java);
    ~programmer();

    void chDepNum();
    void chSvName();
    void chlastSalInc();
    void chCpp();
    void chJava();
    private:
        int depNum;
        std::string svName;
        float lastSalInc;
        bool cpp;
        bool java;
};