//write include statements
#include "dna.h"
#include<iostream>
#include<string>
//write using statements
using std::cout;
using std::cin;
using std::string;
/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string play_again, user_choice, dna;

	do {
	
		cout << "Enter '1' to get GC Contenct: \nEnter '2' for Get DNA Complement: \n";
		cin >> user_choice;

		if (user_choice == "1") {
			cout << "Enter dna strand: ";
			cin >> dna;
			cout << get_gc_content(dna) << "\n";
		}
		else if (user_choice == "2") {
			cout << "Enter dna strand: ";
			cin >> dna;
			cout << get_dna_complement(dna) << "\n";
		}

		cout << "Would you like to enter anothe dna strand?";
		cin >> play_again;

	}while (play_again == "y" || play_again == "Y");

	return 0;
}