// chapter1Problem2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
/*The East Coast sales division of a company generates 58 percent of total sales. 
Based on that percentage, write a program that will predict how much the East Coast division will generate 
if the company has $8.6 million in sales this year.
*/

#include <iostream>
using namespace std;
int main()
{
	const double salesPercentage = 0.58;
	const int companyRevenue = 86000000;
	double salesRevenue = salesPercentage * companyRevenue;
	cout << "The sales percentage is: " << salesPercentage << "%." << endl;
	cout << "The company revenue is: $" << companyRevenue << endl;
	cout << "The sales revenue is: $" << salesRevenue << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
