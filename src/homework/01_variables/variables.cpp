#include "variables.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

double TAX_RATE = .0675;

//write code for multiply_numbers function here
int multiply_numbers(int num1, int num2)
{
	//function returns product of num1 and num2
	return num1 * num2;
}

//write function code, multiply tax_rate and meal_amount
double get_sales_tax_amount(double meal_amount)
{
	//return their product
	return TAX_RATE * meal_amount;
}

//write function code to multiply meal_amount and tip_rate
double get_tip_amount(double meal_amount, double tip_rate)
{
	//returns product
	return meal_amount * tip_rate;
}

