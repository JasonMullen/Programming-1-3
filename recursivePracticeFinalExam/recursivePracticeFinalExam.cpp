/*
Write a function that uses recursion to raise a number
to a power. The function should accept two arguments:
the number to be raised and the exponent. Assume that the 
exponent is a nonnegative integer. Demonstrate the function 
in a program.
*/


#include <iostream>
#include<iomanip>
using namespace std;
// Function prototype
double power(double, double);
int main() {

    // Raise 2 to the power of 10
    cout << power(2.0, 10) << endl;
    
    return 0;

}
//******************************************
// The power function raises x to the power *

// of y and returns the result.             *
//*******************************************
double power(double baseNumber, double exponent) {
    if (exponent !=0) {//recursive case
        return(baseNumber * power(baseNumber, exponent - 1));
    }
    else {//base case
        return 1;
    }
}

