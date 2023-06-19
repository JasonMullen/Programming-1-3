// Chapter2(AreaOfASquare).cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
   Date: 7-13-2020
   Name: Jason Mullen
   Problem: Write a program that calculates and prints the area and the 
   perimeter of a square when the size of one side is given. 
		*Area of a square equation: Area = (width)(height) OR side squared. 
		*Perimeter of a square equation: X = 4(side).

		Example: Height = 8

*/
 
#include <iostream>
using namespace std; 

int main()
{
	const short int height = 8; // the variable "height" is constant and the memory used is smaller than a regular int. 
	int area = height * 8;
	int perimeter = 4 * (8);
	cout << "The given dimension is: " << height << "ft." << endl;
	cout << "The area of the square is: " << area << "ft. " << endl;
	cout << "The perimeter of the sqaure is: " << perimeter << "ft." << endl;
}

