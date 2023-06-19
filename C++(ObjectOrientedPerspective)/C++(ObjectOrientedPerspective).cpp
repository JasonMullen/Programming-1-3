//Jason Mullen
//Date 7-10-20
//Course:COSC-1336 2801 6W2 Programming Fundamentals I - 016901-02-1206-6W2-2801
/*Program discription:
	1.)This program takes the sales rate and multiplies it by the sales percentage to get the sales amount.
	2.)Next, it takes the sales amount and adds it to the sales rate to get the total amount.
	3.)Then it finally displays the figures of each variable as well as the desired result.
*/
/*The Problem:The East Coast sales division of a company generates 58 percent of total sales.
Based on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year.

*/
#include<iostream>
using namespace std;
int Arsenal() {
	double salesRate = 8600000;
	double salesPerentage = 0.58;
	double salesAmount = salesRate * salesPerentage;
	double totalSales = salesRate + salesAmount;
	cout << "The sales rate was: " << salesRate << "\n";
	cout << "The sales percentage was: " << salesPerentage << "\n";
	cout << "The sales amount was: " << salesAmount << "\n";
	cout << "The total sales amount was: " << totalSales;
	return 0;
}