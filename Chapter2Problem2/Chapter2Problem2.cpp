// Chapter2Problem2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
    To get the average of a series of values, you add the values up then divide the sum by the number of values. 
    Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. 
    The program should first calculate the sum of these five variables and store the result in a separate variable named sum.
    Then, the program should divide the sum variable by 5 to get the average. Display the average on the screen.

Use the double data type for all variables in this program.
*/

#include <iostream>
using namespace std;
int main()
{
    double a = 28;
    double b = 32;
    double c = 37;
    double d = 24;
    double e = 33;
    double sum = a + b + c + d + e;
    double numberAmount = 5;
    double average = sum / numberAmount; 
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;
    cout << "The value of the sum all the values is: " << sum << endl;
    cout << "The number of values is: " << numberAmount << endl;
    cout << "The average of these values is: "<< average << endl;
}

