// chapter17(recursivePractice).cpp : This file contains the 'main' function. Program execution begins and ends there.
//*11-28-20
//

#include <iostream>
#include <iomanip>
using namespace std;
int sum(int);
int main()
{
	cout << sum(6) << endl;
	return 0;
}
int sum(int number) {
	int counter = number; //inital number
	int subtractor = counter--; //decrements the number
	if (number > 0) {//recursive case
		 cout << subtractor << endl;//prints out the numbers in decending order
		 return number + sum(number-1); //recursively gets the sum of all those numbers.
	}
	else {//base case
		return 0;
	}
}
