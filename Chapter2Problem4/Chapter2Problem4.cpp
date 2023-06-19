// Chapter2Problem4.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    The problem:
        Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:
        The number of millimeters higher than the current level that the ocean’s level will be in 5 years.
        The number of millimeters higher than the current level that the ocean’s level will be in 7 years.
        The number of millimeters higher than the current level that the ocean’s level will be in 10 years.
*/

#include <iostream>
using namespace std;
int main()
{
    const double risingMeasurment = 1.5;
    double fiveYears = 5 * risingMeasurment;
    double sevenYears = 7 * risingMeasurment;
    double tenYears = 10 * risingMeasurment;
    cout << "The oceans is rising: " << risingMeasurment << "mm each year." << endl;
    cout << " The oceans will rise " << fiveYears << "mm in five years." << endl;
    cout << " The oceans will rise " << sevenYears << "mm in seven years." << endl;
    cout << " The oceans will rise " << tenYears << "mm in ten years." << endl;

}