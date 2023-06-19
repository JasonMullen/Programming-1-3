/*
    Name:Jason Mullen
    Date: 8-2-2020
*/

#include <iostream>
using namespace std;
int main()
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int num = 0;
    cout << "Enter the value of num:";
    cin >> num;
    int counter = 1; 
    while (counter <= num) {
        sum1 += counter;
        sum2 += counter * counter;
        sum3 += counter * counter * counter;
        counter++;
    }
    cout << "Value of num: " << num << endl;
    cout << "Value of num1: " << sum1 << endl;
    cout << "Value of num2: " << sum2 << endl;
    cout << "Value of num3: " << sum3 << endl;
    return 0;
}

