// chapter9Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	//1.Variables
	int num = -2;
	int num2 = 10;
	double num3 = 0.0;
	int* intptr = nullptr; //intptr is storing the address of num
	intptr = &num;
	int vals[] = { 2,4,6,8 };

	cout << *(vals + 1) << endl; //goes to the address of the vals and then prints its value.

	//cout << &num << endl; //finding and printing the memory address.
	//cout << *intptr << endl; //intptr is showing nums value.
	//(*) means value, while (no *) means address
	return 0;
}

