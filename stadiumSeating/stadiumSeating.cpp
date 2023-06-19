// stadiumSeating.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
    Name: Jason Mullen
    Date: 7-14-20
    Project description:
       There are three seating categories at a stadium. For a softball game, 
       Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9. 
       Write a program that asks how many tickets for each class of seats were sold, then displays 
       the amount of income generated from ticket sales. Format your dollar amount in fixed-point notation, 
       with two decimal places of precision, and be sure the decimal point is always displayed. 
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const double classA = 15;
    const double classB = 12;
    const double classC = 9;
    double ticketsA = 0;
    double ticketsB = 0;
    double ticketsC = 0;
    cout << "Class A,how many tickets were sold? ";
    cin >> ticketsA;
    cout << "Class B,how many tickets were sold? ";
    cin >> ticketsB;
    cout << "Class C,how many tickets were sold? ";
    cin >> ticketsC;
    double totaltickets = ticketsA + ticketsB + ticketsC;
    cout << setprecision(2) << "The total amount of tickets sold is: " << totaltickets << endl;
    double totalSales = (classA * ticketsA) + (classB * ticketsB) + (classC * ticketsC);
    cout << setprecision(2) << "1. = $" << classA * ticketsA << endl;
    cout << setprecision(2) << "2. = $" << classB * ticketsB << endl;
    cout << setprecision(2) << "3. = $" << classC * ticketsC << endl;
    cout << fixed;
    cout << setprecision(2) << "The total amount of money made from all three classes is: $" << totalSales << endl;
}

