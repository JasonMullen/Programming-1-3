/*
    Name:Jason Mullen
    Date: 7-25-20
    Assignment: 
        Minimum/Maximum
            Write a program that asks the user to enter two numbers. 
            The program should use the conditional operator to determine which 
            number is the smaller and which is the larger.
*/

#include <iostream>
using namespace std;
int main()
{
    double num1 = 0;
    double num2 = 0;
    double larger = 0;
    double smaller = 0;

    cout << "You will need to enter two numbers and this program will determine which one smaller and which one is larger" << endl;
    cout << "Enter the first number: ";
    cin >> num1; 
    cout << "Enter the second number: ";
    cin >> num2;
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------
    if (num1 == num2) {
        cout << "The first value: " << num1 << " is equal to the second value: " << num2 << endl;
    }
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------
    else if (num1 > num2) {
        larger = num1;
        smaller = num2;
        cout << larger << ">" << smaller << endl;
        cout << "The larger number is: " << larger << "(num1)" << endl;
        cout << "The smaller number is: " << smaller << "(num2)" << endl;
     }
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------
    else if (num2 > num1) {
        larger = num2;
        smaller = num1;
        cout << larger << ">" << smaller << endl;
        cout << "The larger number is: " << larger << "(num2)" << endl;
        cout << "The smaller number is: " << smaller << "(num1)" << endl;
    }
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------
    return 0;
}

