// testAverage.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Name:Jason Mullen
    Date: 7-18-2020
    Project description:
        Write a program that asks for five test scores. 
        The program should calculate the average test score and display it.
        The number displayed should be formatted in fixed-point notation,
        with one decimal point of precision.


*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double test1 = 0;
    double test2 = 0;
    double test3 = 0;
    double test4 = 0;
    double test5 = 0;
    //==========================================================
    cout << "Enter the first test score between 0 and 100: ";
    cin >> test1;
    while (test1 < 0 || test1 > 100) {
        cout << "Enter a valid test score mate. ";
        cin >> test1;
    }
    cout << "Enter the second test score between 0 and 100: ";
    cin >> test2;
    while (test2 < 0 || test2 > 100) {
        cout << "Enter a valid test score mate. ";
        cin >> test2;
    }
    cout << "Enter the third test score between 0 and 100: ";
    cin >> test3;
    while (test3 < 0 || test3 > 100) {
        cout << "Enter a valid test score mate. ";
        cin >> test3;
    }
    cout << "Enter the fourth test score between 0 and 100: ";
    cin >> test4;
    while (test4 < 0 || test4 > 100) {
        cout << "Enter a valid test score mate. " ;
        cin >> test4;
    }
    cout << "Enter the fifth test score between 0 and 100: ";
    cin >> test5;
    while (test5 < 0 || test5 > 100) {
        cout << "Enter a valid test score mate. ";
        cin >> test5;
    }
    double average = (test1 + test2 + test3 + test4 + test5) / 5;
    //==========================================================
    cout << "-----------------------------------------------" << endl;
    //==========================================================
    cout << "The test scores are: " << test1 << ", " << test2 << ", " << test3 << ", " << test4 << ", " << test5 << "." << endl;
    cout << "-----------------------------------------------" << endl;
    cout << fixed;
    cout << setprecision(1) << "The average value of the 5 test scores is: " << average;
    return 0;
}
