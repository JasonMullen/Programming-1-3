// Chapter2Problem1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
The tax should be 6.75 percent of the meal cost. 
The tip should be 20 percent of the total after adding the tax. 
Display the meal cost, tax amount, tip amount, and total bill on the screen.


*/

#include <iostream>
using namespace std;
int main()
{
	const double bill = 88.67;
	const double tipPercentage = 0.20;
	const double taxAmount = 6.75;
	double tipAmount = bill * tipPercentage; 
	double finalBill = bill + tipAmount + taxAmount;
	cout << " The cost of the original bill is: $" << bill << endl;
	cout << " The percentage of the tip is: " << tipPercentage << endl;
	cout << " The tax amount is: $" << taxAmount << endl;
	cout << " The tip amount is: $" << tipAmount << endl;
	cout << " The cost of the final bill is: $ " << finalBill << endl;

	
}
