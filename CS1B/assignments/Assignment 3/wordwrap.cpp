#include "header.h"

void wordWrap(ostream &output, movNode *&searchPtr)
{
    const int MAX = 75;
    int i;
    int j;
    string word;
    string line;
    for(i=0;i < searchPtr->synopsis.size();i++)
    {
        if(searchPtr->synopsis[i] != ' ')
        {
            word += searchPtr->synopsis[i];
        }
        else
        {
            if (word.size() + line.size() > MAX)
            {
                output << line;
                output << endl;
                line.clear();
            }
            line += word + ' ';
            word.clear();
        }
        if(i == searchPtr->synopsis.size()-1)
        {
            output << line << word << endl;
        }
    }
}