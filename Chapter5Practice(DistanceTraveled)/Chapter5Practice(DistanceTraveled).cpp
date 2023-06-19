/*
    Name:Jason Mullen
    Date:8-3-2020
    Assignment: Distance Traveled
    The distance a vehicle travels can be calculated as follows:distance = speed * time
    For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.
    Write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled.
    The program should then use a loop to display the distance the vehicle has traveled for each hour of that time period. 
    Here is an example of the output:
    What is the speed of the vehicle in mph? 40
    How many hours has it traveled? 3
    Hour Distance Traveled
    --------------------------------
    1 40
    2 80
    3 120
    Input Validation: Do not accept a negative number for speed and do not accept any value less than 1 for time traveled.
*/

#include <iostream>
using namespace std;
int main()
{
    double milesPerHour = 0.0;
    int hours = 0;
    int counter = 0;
    double sum = 0.0;
    cout << "Enter the how fast you were going in mph(miles per hour):";
    cin >> milesPerHour;
    cout << "Enter how many hours you've travled:";
    cin >> hours;
    for (int i = 1; i <= hours; i++) {
        counter++;
        sum = milesPerHour * counter;
        cout << "Hour:" << counter << ". Miles Traveled:" << sum << endl;
    }
}

