/*
    Name:Jason Mullen
    Date:7-25-2020
    Assignment: 
        Roman Numeral Converter
        Write a program that asks the user to enter a number within the range of 1 through 10.
        Use a switch statement to display the Roman numeral version of that number.
        Input Validation: Do not accept a number less than 1 or greater than 10.
*/

#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cout << "Enter a integer/Whole number between 1-10: ";
    cin >> num;
    while (num < 0 || num > 10) {
        cout << "You've entered an invalid number mate, try again gezzah: ";
        cin >> num;
    }
        switch (num)
        {
            case 1: cout << "The number one is: I " << endl;
                break;
            case 2: cout << "The number two is: II " << endl;
                break;
            case 3: cout << "The number three is: III " << endl;
                break;
            case 4: cout << "The number four is: IV " << endl;
                break;
            case 5: cout << "The number five is: V " << endl;
                break;
            case 6: cout << "The number six is: VI " << endl;
                break;
            case 7: cout << "The number seven is: VII " << endl;
                break;
            case 8: cout << "The number eight is: VIII " << endl;
                break;
            case 9: cout << "The number nine is: IX " << endl;
                break;
            case 10: cout << "The number ten is: X " << endl;
                break;
        }
    return 0;
}

