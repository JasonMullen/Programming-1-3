/*
    Name:Jason Mullen 
    Date:8-3-2020
    Problem: Sum of Numbers
    Write a program that asks the user for a positive integer value. 
    The program should use a loop to get the sum of all the integers from 1 up to the number entered. 
    For example, if the user enters 50, the loop will find the sum of 1, 2, 3, 4, . . ., 50.
    Input Validation: Do not accept a negative starting number.


*/

#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int sum = 0;
    cout << "Enter an integer(Ex:1,2,3,etc not 1.1,1.2,etc):";
    cin >> num;
    for (int i = 0; i <= num; i++) {//This for loop adds all the values
        sum = sum + i;
    }
    cout << "The sum of number for "<< num <<  " is:" << sum;
    return 0;
}

