/*
    Name:Jason Mullen
    Date: 7-31-2020
*/

#include <iostream>
using namespace std;
int main()
{
    string month1 = "";
    string month2 = "";
    string month3 = "";
    double month1Hours = 0;
    double month2Hours = 0;
    double month3Hours = 0;
    cout << "Enter the name of the first month: " << endl;
    cin >> month1;
    cout << "Enter the name of the second month: " << endl;
    cin >> month2;
    cout << "Enter the name of the third month: " << endl;
    cin >> month3;

    cout << "Enter the hours spent during on your mobile in " << month1 << endl;
    cin >> month1Hours;
    cout << "Enter the hours spent during on your mobile in " << month2 << endl;
    cin >> month2Hours;
    cout << "Enter the hours spent during on your mobile in " << month3 << endl;
    cin >> month3Hours;

    double averageHours = (month1Hours + month2Hours + month3Hours) / 3;
    cout << "The average time spent on your mobile device for " << month1 << ", " << month2 << ", and " << month3 << ", is: " << averageHours << " hours";
}

