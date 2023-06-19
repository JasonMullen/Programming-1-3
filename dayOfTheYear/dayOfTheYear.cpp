/*
    Name:Jason Mullen
    Date:9-19-2020
    Assignment: Day of the Year

Assuming a year has 365 days, write a class named DayOfYear that takes an integer representing a day of the year and translates it to a string consisting of the month followed by day of the month. For example,
Day 2 would be January 2.
Day 32 would be February 1.
Day 365 would be December 31.
The constructor for the class should take as parameter an integer representing the day of the year, and the class should have a member function print()that prints the day in the month–day format. The class should have an integer member variable to represent the day, and should have static member variables holding string objects that can be used to assist in the translation from the integer format to the month–day format.
Test your class by inputting various integers representing days and printing out their representation in the month–day format.
Day of the Year Modification
Modify the DayOfYear class, written in Programming Challenge 2, to add a constructor that takes two parameters: a string object representing a month and an integer in the range 0 through 31 representing the day of the month. The constructor should then initialize the integer member of the class to represent the day specified by the month and day of month parameters. The constructor should terminate the program with an appropriate error message if the number entered for a day is outside the range of days for the month given.
Add the following overloaded operators:
++
prefix and postfix increment operators. These operators should modify the DayOfYear object so it represents the next day. If the day is already the end of the year, the new value of the object will represent the first day of the year.
−−
prefix and postfix decrement operators. These operators should modify the DayOfYear object so it represents the previous day. If the day is already the first day of the year, the new value of the object will represent the last day of the year.
*/

//Demo class
#include <iostream>
#include <iomanip>
#include <string>
#include "dayOfTheYear.h"
using namespace std;
int main()
{
    //1.Variables
    string month;
    int day = 0;
    cout << "*This programs converts a month and day of the month into a day of the year in the range of 1 to 365." << endl;
    cout << "*Enter a month(spell the full name) and a day(in numbers):" << endl;
    cin >> month >> day;
    dayOfTheYear d1(month, day); //Create an object named d1 with a month and day provided by the user.
    d1.printDayNumber();
    d1++;
    ++d1;
    cout << "\nThe day after is:" << endl;
    cout << "------------------------------------" <<endl;
    d1.print();
    d1--;
    --d1;
    cout << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "\nThe day before is:" << endl ;
    cout << "------------------------------------" << endl;
    d1.print();
}

