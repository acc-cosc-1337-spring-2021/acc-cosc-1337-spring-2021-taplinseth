//write includes statements
#include "loops.h"
#include <iostream>

//write using statements for cin and cout
using std::cin;
using std::cout;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	std::string play_again;

	do {

		do {
			cout << "Enter a number: ";
			cin >> num;

		} while (num < 1 || num > 10);

		cout << std::to_string(factorial(num)) + "\n";

		cout << "Would you like to play agiain? (y/n) ";
		cin >> play_again;

	} while (play_again == "y");

	return 0;
}