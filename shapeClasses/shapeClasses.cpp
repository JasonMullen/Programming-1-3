/*
    Name:Jason Mullen
    
    Date:9-13-20
    
    Course:Programming Fundementals 2 - 016902-02-1208-1-2803
    
    Assignment:Instructions
    Write a Circle class that has the following member variables:
    *radius—a double
    *pi—a double initialized with the value 3.14159
    The class should have the following member functions:
    *Default Constructor—a default constructor that sets radius to 0.0
    *Constructor—accepts the radius of the circle as an argument
    *setRadius—a mutator function for the radius variable
        getRadius—an accessor function for the radius variable
    *getArea—returns the area of the circle, which is calculated as
        area = pi * radius * radius
    *getDiameter—returns the diameter of the circle, which is calculated as
        diameter = radius * 2
    *getCircumference—returns the circumference of the circle, which is calculated as
        circumference = 2 * pi * radius


    Write a Rectangle class that has the following member variables:
    *length—a double
    *width - a double
    The class should have the following member functions:
    *Default Constructor—a default constructor that sets length and width to 0.0
    *Constructor—accepts the length of the rectangle as an argument
    *setLength—a mutator function for the length variable
    *getLength—an accessor function for the length variable
    *setWidth—a mutator function for the width variable
    *getWidth—an accessor function for the width variable
    *getArea—returns the area of the rectangle, which is calculated as
    *area = length * width
    *getPerimeter—returns the perimeter of the rectangle, which is calculated as
    *perimeter = 2 * (length + width)
        Write a program that demonstrates both the Circle and the Rectangle class.
        Ask the user for the circle’s radius, creating a Circle object, then reporting the circle’s area, diameter, and circumference. 
        Ask the user for the length and width of a rectangle and creating a Rectangle object, then reporting the rectangle's area, and perimeter. 
*/
//========================================================================================================================================================================================================
#include <iostream>
#include <string>
#include "circle.h"
#include "rectangle.h"
using namespace std;
//========================================================================================================================================================================================================
//========================================================================================================================================================================================================
int main(){//main method
    Rectangle rect1; //The creation of an object 
    Circle cl1; //The creation of an object
    cl1.circleDimensions(); //The object is calling a method
    rect1.rectangleDimensions();//The object is calling a method
}
//========================================================================================================================================================================================================


