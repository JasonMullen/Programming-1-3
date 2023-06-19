/*
    Name:Jason Mullen
    Date:Final exam day: 8-15-2020
*/

#include <iostream>
#include <iomanip>
using namespace std;
const int MONTHS = 12;

double getTotal(double[], int);
double getMonthlyAverage(double[], int);
double getLargest(double[], int, int);
double getSmallest(double[], int, int);
int main()
{
    double bankStatments[MONTHS];
    for (int monthlyPay = 0; monthlyPay < MONTHS; monthlyPay++) {
        cout << "Enter the amount of money you earned each month:" << (monthlyPay + 1) << ":";
        cin >> bankStatments[monthlyPay];

        while (bankStatments[monthlyPay] < 0) {
            cout << "Please enter a valid no-negative number.";
                cin >> bankStatments[monthlyPay];
        }
    }
    cout << "The total amount of money you earned is:$";
    cout << getTotal(bankStatments, MONTHS) << endl;

    cout << "The monthly average you've made is:$";
    cout << getMonthlyAverage(bankStatments, MONTHS) << endl;

    int subScript = 0;

    cout << "The highest amount of money you've earned is:$";
    cout << getLargest(bankStatments, MONTHS, subScript);
    cout << (subScript + 1) << "." << endl;

    cout << "The smallest amount of monney you've earned is:$";
    cout << getSmallest(bankStatments, MONTHS, subScript);
        cout << (subScript + 1) << "." << endl << endl;
        return 0;
}
/*=========================================================================================*/
double getTotal(double newBankStatments[], int size) {
    double newTotal = 0.0;
    for (int i = 0; i < size; i++) {
        newTotal += newBankStatments[i];
    }
    return newTotal;
}
double getMonthlyAverage(double newBankStatments[], int size) {
    double average = getTotal(newBankStatments, size) / size;
    return average;
}
double getLargest(double newBankStatments[], int size, int item) {
    double newLargest = 0.0;
    newLargest = newBankStatments[0];
    item = 0;

    for (int i = 1; i < size; i++) {
        if (newBankStatments[i] > newLargest) {
            newLargest = newBankStatments[i];
            item = i;
        }
    }
    return newLargest;
}
double getSmallest(double newBankStatments[], int size, int item) {
    double newSmallest = 0.0;
    newSmallest = newBankStatments[0];
    item = 0;

    for (int i = 1; i < size; i++) {
        if (newBankStatments[i] < newSmallest) {
            newSmallest = newBankStatments[i];
            item = i;
        }
    }
    return newSmallest;
}


