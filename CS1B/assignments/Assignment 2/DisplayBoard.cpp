/******************************************************************************
* The following function is provided for you… please desk check it and ensure
* that you thoroughly understand it. MODIFY it as stated below!
*
* 1 - Be sure to document the following in detail!
* (demonstrate that you understand this code segment).
* 2 - Modify the variable names to something more appropriate.
* 3 - Use appropriate constants if necessary.
******************************************************************************/

#include "header.h";

void DisplayBoard(const char boardAr[][3])
{
	int i;
	int j;

	cout << setw(10) << "1" << setw(8) << "2" << setw(9) << "3\n";

	for (i = 0; i < 3; i++)
	{
		cout << setw(7) << "[" << i+1 << "][1] | " << "[" << i+1;
		cout << "][2] | " << "[" << i+1 << "][3]" << endl;
		cout << setw(14) << "|" << setw(9) << "|" << endl;
		for (j = 0; j < 3; j++)
		{
			switch(j)
			{
				case 0: cout << i + 1 << setw(9) << boardAr[i][j];
				cout << setw(4) << "|";
				break;
				case 1: cout << setw(4) << boardAr[i][j];
				cout << setw(5) << "|";
				break;
				case 2: cout << setw(4) << boardAr[i][j] << endl;
				break;
				default: cout <<"ERROR!\n\n";
			}
		}

		cout << setw(14)<< "|" << setw(10) << "|\n";

		if (i != 2)
		{
			cout << setw(32) << "--------------------------\n";
		}
	}
	cout << endl << endl;
}
