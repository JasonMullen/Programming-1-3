/*This file manipulates the charateristics of the class 
For example: the header file would create eyes while this file would deterimine their color,diminsions,vision etc.*/
#include "Car.h"

int Car :: getYearModel() {
    return yearModel;
}
string Car::getModel() {
    return model;
}
string Car:: getMake() {
    return make;
}
int Car:: getSpeed() {
    return speed;
}
void Car:: accelerate() {
    speed = speed + 5;
}
void Car:: brake() {
    speed = speed - 5;
}
//Setter
void Car:: setYearModel(int newYearModel) {
    yearModel = newYearModel;
}
void Car:: setModel(string newModel) {
    model = newModel;
}
void Car:: setMake(string newMake) {
    make = newMake;
}
void Car:: setSpeed(int newSpeed) {
    speed = newSpeed;
}
//the classes "main method."
void Car:: carDimensions() {
    Car cr1; //Instnce named cr1 made of the object "Car."
    int newSpeed = 0;
    int speedIncrease = 0;
    cr1.setYearModel(2020);
    cr1.setMake("Mercades-Benz");
    cr1.setModel("AMG GLC 43 4MATIC SUV");
    cout << "The car make is: " << cr1.getMake() << endl;
    cout << "The car model is a: " << cr1.getModel() << endl;
    cout << "The year is a: " << cr1.getYearModel() << endl;
    cout << "What is your current speed?:";
    cin >> newSpeed;
    cr1.setSpeed(newSpeed);
    cr1.accelerate();
    cout << "Speed(acceleration):" << cr1.getSpeed() << endl;
    cr1.accelerate();
    cout << "Speed(acceleration):" << cr1.getSpeed() << endl;
    cr1.accelerate();
    cout << "Speed(acceleration):" << cr1.getSpeed() << endl;
    cr1.brake();
    cout << "Speed(decelearation):" << cr1.getSpeed() << endl;



}
int Car::velocity(int newSpeed) {
    //variables
    Car cr1;
    int options = 0;
    int incremeant = 0;
    int speedIncrement = 0;
    int finalSpeed = 0;
    //the car object is accessing instances
    cr1.setSpeed(20);
    cr1.accelerate();
    cr1.brake();
    cout << "The current speed is: " << cr1.getSpeed() << "mph" << endl;
    cout << "Do you want to increase or decrease your speed(type 1 to increase or type 2 to decrease):";
    cin >> options;
    //makes sure the options aren't bigger than 2 or smaller than 1.
    while (options < 1 || options > 3) {
        cout << "Either type number 1 or 2:";
        cin >> options;
    }
    if (options == 1) {
        cout << "You've chosen to speed up." << endl;
        cout << "How much do you want to increase your speed by?:";
        cin >> speedIncrement;
        finalSpeed = newSpeed + speedIncrement;
        cout << "The final speed is:" << finalSpeed << "mph" << endl;
    }
    else if (options == 2) {
        cout << "How much do you want to decelerate(slow down)?:";
        cin >> speedIncrement;
        finalSpeed = newSpeed - speedIncrement;
        cout << "The final speed is:" << finalSpeed << "mph" << endl;
    }
    return newSpeed;
    Car :: ~Car(); {} //destructor

}