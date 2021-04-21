//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>
//Write namespace using statements for cout and cin
using std::cout;
using std::cin;

int main() 
{
	//retireives numerical grade from user
	int numerical_grade;

	cout << "Enter numerical value:";
	cin >> numerical_grade;

		if(numerical_grade >= 0 && numerical_grade <= 100)
		{
			cout << get_letter_grade_using_if(numerical_grade) + "\n";
			
			cout << get_letter_grade_using_switch(numerical_grade) + "\n";
			
		}
		else
		{
			cout << "invalid entry";
		}
		


	return 0;
}

