#pragma once
#ifndef dayOfTheYear_h
#define dayOfTheYear_h
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Declare class
class dayOfTheYear {
private: 
	//Instance fields aka member variable
	//private variables
	int day;
public:
	//public variables
	static int daysAtTheEndOfTheMonth[]; //31,59,356...This an array to hold the last days of the month.
	static string monthName[];	//Jan, Fed,...dec an array to hold month names.
	
	//constructor
	dayOfTheYear(); //default constructor
	dayOfTheYear(string nameOfMonth, int dayOfMonth); //parameter constructor
	dayOfTheYear operator++(int); //postfix x++
	dayOfTheYear operator++();//prefix ++x
	dayOfTheYear operator--(int);//postfix x--
	dayOfTheYear operator--();//prefix --x

	//specialty functions
	void print();
	void printDayNumber() { cout << day; }
	void setDay(int day) { this->day = day;}

	//Setters

	~dayOfTheYear() {} //destructor
};
#endif //!dayOfTheYear_pch