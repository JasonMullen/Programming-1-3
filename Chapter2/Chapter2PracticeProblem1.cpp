//Jason Mullen
//Date 7-11-20
//Course:COSC-1336 2801 6W2 Programming Fundamentals I - 016901-02-1206-6W2-2801
/*Program discription:
	1.)This program has three constant variables and one regualar varibale which holds the bill amount, tax amount, 
	the tip percentage, and the total bill
	2.)Then the programs multiplies the bill times the tip.
	3.)Then the 
	3.)It then displays those four variables on the screen.
*/
/* Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge.
The tax should be 6.75 percent of the meal cost.The tip should be 20 percent of the total after adding the tax.
Display the meal cost, tax amount, tip amount, and total bill on the screen.


*/
#include<iostream>
using namespace std;

int main()
{
	const double bill = 88.67;
	const double tipPercentage = 0.20;
	double tipAmount = bill * tipPercentage;
	const double taxAmount = 6.75;
	double finalBill= bill + tipPercentage + tipAmount + taxAmount;
    cout << "The amount of the original bill is: " << bill << "\n";
	cout << "The tax percentage is: " << tipPercentage << "\n";
	cout << "The tip amount is: " << tipAmount << "\n";
	cout << "The tax amount is: " << taxAmount << "\n";
	cout << "The cost of the final bill is: " << finalBill << "\n";
	return 0;
}


