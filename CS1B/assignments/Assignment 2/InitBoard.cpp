#include "header.h"

void InitBoard(char boardAr[][3])
{
    int i;
    int j;

    i = 1;
    j = 1;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            boardAr[i][j] = ' ';
        }
    }
}