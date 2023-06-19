/*
    Name: Jason Mullen
    Date: 7-18-20
    Project: Write a program that calculates the average rainfall for three months. 
    The program should ask the user to enter the name of each month, such as June or July, 
    and the amount of rain (in inches) that fell each month. The program should display a message similar to the following:
    The average rainfall for June, July, and August is 6.72 inches.
*/
#include <iostream>
#include <iomanip>
using namespace std; 
int main()
{
    double month1RainFall = 0;
    double month2RainFall = 0;
    double month3RainFall = 0;
    string month1Name = "";
    string month2Name = "";
    string month3Name = "";
    //-----------------------------------------------------------------------------------------------------------------------
    cout << "Enter the name of the first month: ";
    cin >> month1Name;
    cout << "Enter the amount of rainfall(in inches): ";
    cin >> month1RainFall;
    cout << "Name: " << month1Name << "|| Rainfall: " << month1RainFall << " inches." << endl;
    cout << "------------------------------------------------------------" << endl;
    //-----------------------------------------------------------------------------------------------------------------------
    cout << "Enter the name of the second month: ";
    cin >> month2Name;
    cout << "Enter the amount of rainfall(in inches): ";
    cin >> month2RainFall;
    cout << "Name: " << month2Name << "|| Rainfall: " << month2RainFall << " inches." << endl;
    cout << "------------------------------------------------------------" << endl;

    //-----------------------------------------------------------------------------------------------------------------------
    cout << "Enter the name of the third month: ";
    cin >> month3Name;
    cout << "Enter the amount of rainfall(in inches): ";
    cin >> month3RainFall;
    cout << "Name: " << month3Name << "|| Rainfall: " << month3RainFall << " inches." << endl;
    cout << "------------------------------------------------------------" << endl;
    //-----------------------------------------------------------------------------------------------------------------------
    double averageRainfall = (month1RainFall + month2RainFall + month3RainFall) / 3;
    cout << month1Name << ", " << month2Name << ", " << month3Name << " and the combined is rainfall is " << averageRainfall << " inches.";
}
