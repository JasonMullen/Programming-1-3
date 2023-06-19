/*
    Name:Jason Mullen 
    Date: 7-25-2020
    Assignment: 
    Areas of Rectangles The area of a rectangle is the rectangle’s length times its width
       (A = L* W). 
    Write a program that asks for the length and width of two rectangles. 
    The program should tell the user which rectangle has the greater area, or if the areas are the same.
*/

#include <iostream>
using namespace std; 
int main()
{
    double length1 = 0;
    double length2 = 0;
    double width1 = 0;
    double width2 = 0;

    cout << "*Enter the length of the first rectangle in inches: "; 
    cin >> length1;
    while (length1 < 0) {
        cout << "*Enter a valid length: ";
            cin >> length1;
    }
    //------------------------------------------------------------------------------------------
    cout << "*Enter the width of the first rectangle: ";
    cin >> width1;
    while (width1 < 0) {
        cout << "*Enter a valid width: ";
        cin >> width1;
    }
    //------------------------------------------------------------------------------------------
    cout << "*Enter the length of the second rectangle: ";
    cin >> length2;
    while (length2 < 0) {
        cout << "*Enter a valid length: ";
        cin >> length2;
    }
    //------------------------------------------------------------------------------------------
    cout << "*Enter the length of the second rectangle: ";
    cin >> width2;
    while (width2 < 0) {
        cout << "*Enter a valid width: ";
        cin >> width2;
    }
    //------------------------------------------------------------------------------------------
    double area1 = length1 * width1;
    double area2 = length2 * width2;
    cout << "*Area of rectangle 1 is: " << area1 << endl;
    cout << "*Area of rectangle 2 is: " << area2 << endl;
    if (area1 > area2) {
        cout << "*The area of the first rectangle is greater than that of the second's." << endl;
    }
    else if (area1 < area2) {
        cout << "*The area of the second rectangle is greater than that of the first's." << endl;
    }
    else if (area1 == area2) {
        cout << "*The area of both rectangles is the same." << endl;
    }
}
