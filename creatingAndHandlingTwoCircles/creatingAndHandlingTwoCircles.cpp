/*
    Name:Jason Mullen
    Date:8-14-2020
    creating two circle and calculating their stats
*/

#include <iostream>
using namespace std;
/*Class definition: The declaration of data members and member
functions of the class*/
class Circle {
private:
    double radius;
public: 
    double getRadius()const;
    double getArea()const;
    double getPerimeter()const;
    void setRadius(double value);
};
/*Members function definition. Each function declared in the 
class definition section is definied in this section.*/
double Circle :: getRadius()const {
    return radius;
}
double Circle :: getArea()const{
    const double PI = 3.14;
    return(PI * radius * radius);
}
double Circle :: getPerimeter()const {
    const double PI = 3.14;
    return(2 * PI * radius);
}
void Circle::setRadius(double value) {
    radius = value;
}
int main()
{
    //Creating first circle and applying member functions.
    cout << "Circle 1:" << endl;
    Circle circle1;
    circle1.setRadius(22.5);
    cout << "Radius: " << circle1.getRadius() << endl;
    cout << "Area:" << circle1.getArea() << endl;
    cout << "Perimeter:" << circle1.getPerimeter() << endl << endl;

    //Creating second circle and applying member functions.
    cout << "Circle 2: " << endl;
    Circle circle2;
    circle2.setRadius(41.12);
    cout << "Radius: " << circle2.getRadius() << endl;
    cout << "Area:" << circle2.getArea() << endl;
    cout << "Perimeter:" << circle2.getPerimeter() << endl << endl;
    return 0;
}

