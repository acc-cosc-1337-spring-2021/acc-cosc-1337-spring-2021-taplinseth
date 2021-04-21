//write include statements
#include "variables.h"
#include "variables.cpp"

//write namespace using statement for cout
#include<iostream>
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	//retreives meal price from user
	cout << "Enter price of the meal: ";
	cin >> meal_amount;

	//calls the get sales tax funciton
	get_sales_tax_amount(meal_amount);
	{

	}

	//retreives tip rate from user
	cout << "Enter tip rate: ";
	cin >> tip_rate;
	
	//calls the funciton get tip amount
	get_tip_amount(meal_amount, tip_rate);
	{
		return tip_amount;
	}

	//calculates total bill
	total = tip_amount + tax_amount + meal_amount;

	//displays reciept
	cout << "Meal Amount: "<< meal_amount <<"\n";
	cout << "Sales Tax: "<< tax_amount <<"\n";
	cout << "Tip Amount: "<< tip_amount <<"\n";
	cout << "Total: "<< total <<"\n";

	return 0;

}
