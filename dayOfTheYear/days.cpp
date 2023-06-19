//Define class
#include "dayOfTheYear.h"
int dayOfTheYear::daysAtTheEndOfTheMonth[] = { 31,59,90,
120,151,181,
212,243,273,
304,334,365 };
string dayOfTheYear::monthName[] = { "January" ,"Febuary", 
"March", "April",
"May","June",
"July","August",
"September","October",
"November","December" };
dayOfTheYear::dayOfTheYear()
{
	day = 0;
}
dayOfTheYear::dayOfTheYear(string nameOfMonth, int dayOfMonth) 
{
	//variable
	bool error = false;
	//Find the month
	for (int m = 0; m < 12; m++)//loop through all twelve months. 0-11(12 month) 
	{ 
		if (nameOfMonth == monthName[m])
		{
			if (m == 0) {
				day = dayOfMonth;
				error = dayOfMonth < 0 || dayOfMonth >= 32;
				if (error)break;
			}


			else
			{
				day = dayOfMonth + daysAtTheEndOfTheMonth[m-1];
				error = dayOfMonth < 0 || 
				dayOfMonth > daysAtTheEndOfTheMonth[m] - daysAtTheEndOfTheMonth[m-1]; //checks to see if your out of bonds or not.
				if (error)break; //if out of bounds break out
			}
			return;
		}
	}
	cout << "Incorrect name or day of month.";
	exit(1);
}
void dayOfTheYear::print() 
{
	int month = 0;
	while (daysAtTheEndOfTheMonth[month] < day)
	{
		month = (month + 1) % 12;
		if (month == 0)
		{
			cout << "\January " << day << endl << endl;
		}
		else
		{
			cout << monthName[month] << " "
				<< day - daysAtTheEndOfTheMonth[month - 1]
				<< endl;
		}
		
	}
}
dayOfTheYear dayOfTheYear:: operator++(int) //postfix x++ goes one day after.
{
	//go foward one day in the year
	dayOfTheYear tempObj = *this;
	day++;
	if (day == 365) {
		day = 1;
	}
	return tempObj;
}
dayOfTheYear dayOfTheYear:: operator++() //prefix ++x goes one day before.
{
	day++;
	if (day == 365) {
		day = 1;
	}
	return *this;
}
dayOfTheYear dayOfTheYear :: operator--(int)//postfix x-- goes back/up one day in the year
{
	dayOfTheYear tempObj = *this;
	day--;
	if (day == 0) {
		day = 365;
	}
	return tempObj;
}
dayOfTheYear dayOfTheYear :: operator--()//postfix x--
{
	day--;
	if (day == 0) {
		day = 365;
	}
	return *this;
}


/*
	dayOfYear :: print.
	convert and print day of the year.
*/
