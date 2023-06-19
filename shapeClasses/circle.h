#pragma once
#ifndef circle_h
#define circle_h
using namespace std;
class Circle {
private:
    double radius = 0.0;
    const double PI = 3.14159;
public:
    //Getters fetch the information in the database.
    double getRadius() const { //access the radius 
        return radius;
    }
    //Actions
    double calcArea() { //access the area of the circle
        return(PI * radius * radius);
    }
    double calcPerimeter() {//access the perimeter
        return(2 * PI * radius);
    }
    double calcDiameter() {//access the diameter
        return(radius * 2);
    }
    double calcCircumference() {//access the circumference
        return 2 * PI * radius;
    }

    //Setter(Mutators) overide the defaults or make a change in the attribute.
    void setRadius(double newRadius) {//value comes from the user. Change value to 10.
        //specalized function
        radius = newRadius; //overriding the current radius and changing it to the user number.
    }
    void circleDimensions() {
        double newRadius = 1.0;
        Circle cl1;   //Instance named circle1 made of the object Circle
        cout << "Enter the radius of the circle:";
        cin >> newRadius;   //storing the user input into a variable
        cout << "---------------------------------------" << endl; //seperation the printed information for organizational and asthetic purposes.
        cl1.setRadius(newRadius);  //setting the circle object's radius.
        cout << "The radius of the circle is:" << cl1.getRadius() << endl; //printing information to the screen and getting the cl1 object's Radius.
        cout << "The area of the circle is:" << cl1.calcArea() << endl; //printing information to the screen and getting the cl1 object's Area.
        cout << "The diameter of the cirlce is:" << cl1.calcDiameter() << endl; //printing information to the screen and getting the cl1 object's Diameter.
        cout << "The perimeter of the circle is:" << cl1.calcPerimeter() << endl;   //printing information to the screen and getting the cl1 object's Perimeter.
        cout << "The circumference of the circle is:" << cl1.calcCircumference() << endl;   //printing information to the screen and getting the cl1 object's Circumference.
        cout << "---------------------------------------" << endl;//seperation the printed information for organizational and asthetic purposes.
    }
    ~Circle() {} //destructor
};
#endif // !1


