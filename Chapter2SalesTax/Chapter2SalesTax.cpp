// Chapter2SalesTax.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
	-Name: Jason Mullen 
	-Course:COSC 13362801Programming Fundamentals I
	-Date: 7-13-2020
	-Assignment Description:
		Write a program that will ask the user to enter the amount of a purchase. 
		The program should then compute the state and county sales tax. 
		Assume the state sales tax is 5 percent and the county sales tax is 2.5 percent. 
		The program should display the amount of the purchase, the state sales tax, the county sales tax, 
		the total sales tax, and the total of the sale (which is the sum of the amount of purchase plus the total sales tax).
		Hint: Use the value 0.025 to represent 2.5 percent, and 0.05 to represent 5 percent.

		Sample Output: 

		Enter the amount of the purchase: 10.00
		Purchase Amount: 10.00
		State Tax: 0.50
		County Tax: 0.25
		Total Tax: 0.75
		Sale Total: 10.75

		Program Description: 
		-First: This program is designed to ask the user the price of a purchased item. 
		-Second:It will then display the percentages of both the state and county tax.
		-Third: Both percentages will seperately be multiplied by the user input, which will result in the state and county tax amounts.
		-fouth: Both tax amounts will be added togeather to get the total tax amount. 
		tax amount.
		-Fifth: Then the combined tax amounts will be added to the user input amount, which will result in the final cost.
*/

#include <iostream>
using namespace std; 
int main()
{
	const double stateTaxPerentage = 0.05;		//initailized the constant variable which will store the state tax percentage.
	const double countyTaxPercentage = 0.025;	//initailized the constant variable which will store the county tax percentage.
	double purchaseCost = 0;	//initailized the variable which will store the user's input value. 
	double stateAmount = 1;
	double countyAmount = 1;
	double totalTax = 1;
	double finalCost = 1;

	cout << "Enter the price of the your item: $";	//Asks the user to input the cost of an item.
	cin >> purchaseCost;	//This variable Store the user's input data. 
	cout << "The state tax percent is: " << stateTaxPerentage << "%." << endl; // Displays the state tax percent.
	cout << "The county tax percent is: " << countyTaxPercentage << "%." << endl; //Displays the county tax percent.
	stateAmount = stateTaxPerentage * purchaseCost; //calculates the state tax amount.
	countyAmount = countyTaxPercentage * purchaseCost; //calculates the county tax amount.
	totalTax = stateAmount + countyAmount; //combines the state and county tax amount.

	cout << "The state tax amount is: $" << stateAmount << endl; //displays the state tax amount.
	cout << "The county tax amount is: $" << countyAmount << endl; //displays the county tax amount.
	cout << "The total tax amount is : $" << totalTax << endl; //displays the total tax cost.
	finalCost = purchaseCost + totalTax; //Calculates the total cost by adding the user's input price with the total tax.
	cout << "The final cost is: $" << finalCost << endl; //displays the final cost.

}

