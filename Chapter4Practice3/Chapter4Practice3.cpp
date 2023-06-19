/*
    Name:Jason Mullen
    Date: 7-25-20
    Assignment: 
    Magic Dates
    The date June 10, 1960 is special because when we write it in the following format, the month times the day equals the year.
    6/10/60
    Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year. 
    The program should then determine whether the month times the day is equal to the year. 
    If so, it should display a message saying the date is magic.
    Otherwise, it should display a message saying the date is not magic.
*/

#include <iostream>
using namespace std; 
int main()
{
    int month = 0;
    int day = 0;
    int year = 0;
    cout << "*Enter a month in numeric form(1-12): ";
    cin >> month;
    while (month <= 0 || month > 12) {
        cout << "*Enter a valid month you bro: ";
            cin >> month;
    }
    cout << "*Enter a day in numeric form(1-31): ";
    cin >> day;
    while (day <= 0 || day > 31) {
        cout << "*Enter a valid day bro: ";
            cin >> day;
    }
    cout << "*Enter a valid year(0-99): ";
        cin >> year;
    while (year <= 0 || year > 99) {
        cout << "*Enter a valid year bro: ";
            cin >> year; 
    }
    cout << "*" << month << "/" << day << "/" << year << endl; 
    int maftsNDat = month * day;

    if (maftsNDat == year) {
        cout << "*The day times the month is equal to the year " <<  endl;
        cout << "*There is magic in the air broski.";
    }
    else {
        cout << "*The date aint magic my guy.";
    }
    return 0;
}
