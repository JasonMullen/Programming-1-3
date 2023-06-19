#pragma once
#ifndef Rectangle_h
#define Rectangle_h
using namespace std;
class Rectangle {
private:
    double length = 0.0; //length variable 
    double width = 0.0; //width variable
public:
    //Getters fetch the information in the database.
    double getLength() const {//access the length
        return length;
    }
    double getWidth() const {//access the width
        return width;
    }
    double calcArea() {//access the area of a rectangle
        return(length * width);
    }
    double calcPerimeter(double newLength, double newWidth) {
        return 2 * (length + width);
    }
    //Setter overide the defaults or make a change in the attribute
    void setLength(double newLength) {
        length = newLength; //setting the newLength variable equal to that of the length variable.
    }
    void setWidth(double newWidth) {
        width = newWidth;   //setting the newWidth variable equal to the that of the width variable.
    }
    void rectangleDimensions() {
        double newLength = 0.0; //intializing a variable
        double newWidth = 0.0;//intializing a variable
        Rectangle rect1;  //Instance named rect1 made of the object rectangle
        cout << "Enter the length of the rectangle:";   //asks for user input
        cin >> newLength;   //storing the user input into a variable
        cout << "Enter the width of the rectangle:";//asks for user input
        cin >> newWidth;    //storing the user input into a variable
        cout << "---------------------------------------" << endl;  //seperation the printed information for organizational and asthetic purposes.
        rect1.setLength(newLength); //setting the rect1 object's length.
        rect1.setWidth(newWidth); //setting the rect1 object's width.
        cout << "The length of the rectangle is: " << rect1.getLength() << endl;    //printing information to the screen and getting the rect1 object's length.
        cout << "The width of the rectangle is: " << rect1.getWidth() << endl;   //printing information to the screen and getting the rect1 object's width.
        cout << "The area of the rectangle is: " << rect1.calcArea() << endl; //printing information to the screen and getting the rect1 object's area.
        cout << "The perimeter of the rectangle is: " << rect1.calcPerimeter(newLength, newWidth) << endl; //printing information to the screen and getting the rect1 object's perimeter.
    }

    ~Rectangle() {} //destructor
};
#endif // !Rectangle_pch
