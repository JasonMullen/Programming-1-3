/*
    Name:Jason Mullen
    Date:8-3-2020
    Assignment:Calories Burned
    Running on a particular treadmill you burn 3.6 calories per minute. 
    Write a program that uses a loop to display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.
*/
#include <iostream>
using namespace std;
int main()
{
    const double caloriesBurned = 3.6;
    int counter = 0;
    double total = 0;
    for (int i = 5; i <= 30; i = i+5) {
        counter = counter + 5;
        total = i * caloriesBurned;
        cout << "You burned " << total << " total calories in " << counter << " minutes." << endl;
    }
    return 0;
}

