#include "programmerClass.h"
programmer::programmer() : depNum{0}, svName{"none"}, lastSalInc{0}, cpp{0}, java{0}  
{}
programmer::programmer(int depNum, std::string svName, float lastSalInc, bool cpp, bool java)
                        : depNum{depNum}, svName{svName}, lastSalInc{lastSalInc}, cpp{cpp}, java{java}
{}

void programmer::chDepNum(int depNum)
{this->depNum = depNum;}
void programmer::chSvName(std::string name)
{this->svName = name;}
void programmer::chlastSalInc(float salInc)
{this->lastSalInc = salInc;}
void programmer::chCpp(bool cpp)
{this->cpp = cpp;}
void programmer::chJava(bool java)
{this->java = java;}
