/*
    Name:Jason Mullen
    Date:8-3-2020
    Assignment: Ocean Levels
    Assuming the ocean’s level is currently rising at about 1.5 millimeters per year,
    write a program that displays a table showing the number of millimeters that the ocean will have risen each year for the next 25 years.



*/
#include <iostream>
using namespace std;
int main()
{
    const double oceanRisingHeight = 1.5;
    int counter = 0;
    double sum = 0;
    for (int i = 0; i <= 24; i++){
        sum = (i * 1.5) + oceanRisingHeight;
        counter++;
        cout << "Year:" << counter << "'s ocean height is:" << sum << " mm" << endl;
    }
}

