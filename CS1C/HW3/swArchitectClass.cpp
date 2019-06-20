#include "swArchitectClass.h"

swArchitect::swArchitect() : depNum{0}, svName{"none"}, lastSalInc{0}, yearsExp{0}  
{}
swArchitect::swArchitect(int depNum, std::string svName, float lastSalInc, int yearsExp)
                        : depNum{depNum}, svName{svName}, lastSalInc{lastSalInc}, yearsExp{yearsExp}
{}

void swArchitect::chDepNum(int depNum)
{this->depNum = depNum;}
void swArchitect::chSvName(std::string name)
{this->svName = name;}
void swArchitect::chlastSalInc(float salInc)
{this->lastSalInc = salInc;}
void swArchitect::chExp(int exp)
{this->yearsExp = exp;}
