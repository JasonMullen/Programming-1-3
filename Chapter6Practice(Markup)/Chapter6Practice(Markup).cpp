/*
    Name:Jason Mullen
    Date:8-10-2020
    Assignment:Write a program that asks the user to enter an item’s wholesale cost and its markup percentage. 
    It should then display the item’s retail price. For example:
    If an item’s wholesale cost is 5.00 and its markup percentage is 100 percent, then the item’s retail price is 10.00.
    If an item’s wholesale cost is 5.00 and its markup percentage is 50 percent, then the item’s retail price is 7.50.
    The program should have a function named calculateRetail 
    that receives the wholesale cost and the markup percentage as arguments and returns the retail price of the item.
    Input Validation: Do not accept negative values for either the wholesale cost of the item or the markup percentage.


*/

#include <iostream>
#include <iomanip>
using namespace std;

//function protype
double markUpPrice(double, double);

int main()
{
    double cost = 0.0;
    double markupPercentage = 0.0;
    cout << "Enter the an item's whole sale cost:";
    cin >> cost;
    cout << "Enter the item's markup percentage as a decimal (100 = 100 or 2.5 = 0.0025:";
    cin >> markupPercentage;
    markUpPrice(cost, markupPercentage);
    return 0;
}
double markUpPrice(double newCost, double newMarkupPercentage) {
    double markupPrice = newMarkupPercentage * newCost;
    double finalPrice = markupPrice + newCost;
    cout << finalPrice;
    return finalPrice;
}

