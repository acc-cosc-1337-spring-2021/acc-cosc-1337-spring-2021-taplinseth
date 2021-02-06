//Write the include statement for types.h here
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
#include <iostream>
using std::cin;		
using std::cout;

int main() 
{
	int num;
	cout<<"Enter number: ";
	cin>>num;

	int result;
	result = multiply_numbers(num);
	cout<<"Result: "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result: "<<result<<"\n";

	return result;
}

