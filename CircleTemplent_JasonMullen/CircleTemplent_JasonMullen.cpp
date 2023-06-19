/*
	*Name:Jason Mullen
	* Date:11-8-2020
	* Course: COSC-1437 2803 1 Programming Fundementals 2
	*Assignment:
		Write a Template for the functions in the Circle class assignment given previously.
		The class should implement the following exception class:
		InvalidRadius	Throw when an invalid radius is input (< 1 or > 1000) is passed to the class.
		Design a simple driver program that demonstrates the templates with various data types and demonstrates how the exception condition works.
		Use the RECTANGLE CLASS to guide you.
*/

#include <iostream>
#include <iomanip>
using namespace std;
template <class T>	//Template
class Circle { //Class
private:
	T radius;	//Radius variable 
	const T PI = 3.14159; //initalilized constant variable.
public:
	class InvalidRadius {
		//Empty class for invalid radius.
	};
	Circle() { //default constructor
		radius = 0.0;
	}
	Circle(T r) {//constructor
		radius = r
	}

	void setRadius(T r){//mutator
		if (r < 1 || r > 1000) {
			throw InvalidRadius(); //if the radius(r) is out of bounds then an class is thrown, which shows that an error has occured.
		}
		else {
			radius = r;
		}
	}
	T getRadius()const {//accessor
		return radius;
	}
	//templete functions needed to do calculations.
	T calcArea() const;
	T calcPerimeter() const;
	T calcDiameter() const;
	T calcCircumference() const;
	~Circle() {};
};
template <class T>
T Circle<T>::calcArea()const {//Templete function that calculates the area of a circle.
	T area;
	area = (PI * radius * radius);
	return area;
}
template <class T>
T Circle<T>::calcPerimeter()const {//Templete function that calculates the perimeter of a circle.
	T perimeter;
	perimeter = (2 * PI * radius);
	return perimeter;
}
template <class T>
T Circle<T>::calcDiameter()const {//Templete function that calculates the diameter of a circle.
	T diameter;
	diameter = (radius * 2);
	return diameter;
}
template <class T>
T Circle<T>::calcCircumference()const {//Templete function that calculates the circumference of a circle.
	T circumference;
	circumference = (2 * PI * radius);
	return circumference;
}
int main()//Driver program
{
	Circle <double> aCircle;	//making of a circle object
	double radius;	//variable.
	
	cout << "Enter the radius of the circle(between 1 and 1000):";
	cin >> radius;   //storing the user input into a variable
	cout << "---------------------------------------" << endl; //seperation the printed information for organizational and asthetic purposes.
	try {//allows for a segment of code to run and if it runs without an error then the code will execute normally.
		aCircle.setRadius(radius);  //setting the circle object's radius.
		cout << "The radius of the circle is:" << aCircle.getRadius() << endl;
	}
	catch (Circle<double>::InvalidRadius) {//Catches an error and lets the user know they caused an error.
		cout << "Error: Invalid Radius." << endl;
	}
	 //printing information to the screen and getting the cl1 object's Radius.
	cout << "The area of the circle is:" << aCircle.calcArea() << endl; //printing information to the screen and getting the cl1 object's Area.
	cout << "The diameter of the cirlce is:" << aCircle.calcDiameter() << endl; //printing information to the screen and getting the cl1 object's Diameter.
	cout << "The perimeter of the circle is:" << aCircle.calcPerimeter() << endl;   //printing information to the screen and getting the cl1 object's Perimeter.
	cout << "The circumference of the circle is:" << aCircle.calcCircumference() << endl;   //printing information to the screen and getting the cl1 object's Circumference.
	cout << "---------------------------------------" << endl;//seperation the printed information for organizational and asthetic purposes.
}
