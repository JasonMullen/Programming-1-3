//Jason Mullen
//Date 7-10-20
//Course:COSC-1336 2801 6W2 Programming Fundamentals I - 016901-02-1206-6W2-2801
/*Program discription:
	1.)This program has three variables which hold my name, major, and gpa
	2.)It then displays my name, major, and gpa in that order

*/
/*The Problem:The East Coast sales division of a company generates 58 percent of total sales.
Based on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.

*/
#include<iostream>
#include<string>
using namespace std;

int main() {
	string name = "Jason Mullen";		//initialzing the string variable called name to "Jason Mullen."
	string major = "Computer Science";  //initialzing the string variable called major to "Computer Science."
	double gpa = 3.75;					//initializing the double variable called gpa to 3.75.
	cout << "My name is: " << name << "\n";		//This displays the variable name
	cout << "My major is: " << major << "\n";	//This displays the variable major
	cout << "My gpa is: " << gpa << "\n";		//This displays the variable gpa
	return 0;	//returns 0
}