/*******************************************************************************
 * AUTHOR     :Daniel Olaes & Faris Hijazi
 * STUDENT ID :1128957 & 1039438
 * LAB #12    :Intro to OOP
 * CLASS      :CS1B
 * SECTION    :MW: 7:30pm
 * DUE DATE   :4/25/19
 ******************************************************************************/

#ifndef CLASSHEADER_H_
#define CLASSHEADER_H_

#include <iomanip>
#include <string>
using namespace std;

class Animal
{
	public:
		Animal();
		~Animal();

		void SetInitialValues(string aName, string aType, int aAge,
				               float aValue);
		void ChangeAge(int aAge);
		void ChangeValue(float aValue);

		void   Display() const;
		string GetName() const;
		string GetType() const;
		int    GetAge() const;
		float  GetValue() const;

	private:
		string name;
		string type;
		int    age;
		float  value;

};

#endif /* CLASSHEADER_H_ */
