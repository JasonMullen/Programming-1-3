/*
	Name:Jason Mullen 
	Date:8-3-2020
	Assignment: 
	Membership Fees Increase:A country club, which currently charges $2,500 per year for membership, 
	has announced it will increase its membership fee by 4 percent each year for the next 6 years. 
	Write a program that uses a loop to display the projected rates for the next 6 years.
*/

#include <iostream>
using namespace std;
int main()
{
	const double standardRate = 0.04;
	double membershipFees = 2500;
	double rateIncreasePercentage = 0.0;
	double sum = 0.0;
	int counter = 0;
	for (int i = 0; i <= 5; i++) {
		counter = i + 1;
		rateIncreasePercentage = standardRate * i;
		sum = membershipFees * rateIncreasePercentage;
		double finalPrice = sum + membershipFees;
		cout << "The membership fee for year " << counter << " has increased by $" << sum << " and the membership percentage increase is:" << rateIncreasePercentage << endl;
		cout << "The total price for year " << counter << " is:$" << finalPrice << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	}
	return 0;
}

