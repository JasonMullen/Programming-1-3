/*
	Name:Jason Mullen
	Date: 7-25-2020
	Assignment:
	BMI=weight×703/height2BMI=weight × 703/height2
	where weight is measured in pounds and height is measured in inches. 
	The program should display a message indicating whether the person has optimal weight, is underweight, or is overweight. 
	A person’s weight is considered to be optimal if his or her BMI is between 18.5 and 25. 
	If the BMI is less than 18.5, the person is considered to be underweight. 
	If the BMI value is greater than 25, the person is considered to be overweight.
	5"=15
	*/
#include <iostream>
using namespace std;
int main()
{
	double weight = 0;
	double height = 0;
	cout << "Enter your weight in pounds:";
	cin >> weight;
	cout << "Enter your height in feet:";
	cin >> height;
	cout << "You weight: " << weight << endl;
	double heightConverter = height * 12;
	cout << "You're: " << height << "(ft) or " << heightConverter << " inches tall" << endl;
	double BMI = (weight * 703) / (heightConverter * heightConverter);
	if (BMI < 18.5) {
		cout << "You're BMI is:" << BMI <<  "and you are underweight.";
	}
	else if(BMI > 18.5 && BMI < 25){
		cout << "You're BMI is:" << BMI << "and you are at an optimal weight.";
	}
	else if(BMI > 25){
		cout << "You're BMI is:" << BMI << "and you are overweight.";
	}
	
	return 0;
}

