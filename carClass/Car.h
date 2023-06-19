/*
    Name:Jason Mullen
    Date:9-17-2020
    Course:Programming Fundementals 2 - 016902-02-1208-1-2803
    Assignment:
*/

/*The file that creates all the charateristics/dimensions of a car.*/

#pragma once
#ifndef Car_h
#define Car_h

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Car {
private:
    //variables
    int yearModel = 0;
    string model = "";
    string make = "";
    int speed = 0;
public:
    //Accessors
    //Getters
    int getYearModel();
    string getModel();
    string getMake();
    int getSpeed();
    void accelerate();
    void brake();
    //Setter
    void setYearModel(int newYearModel);
    void setModel(string newModel);
    void setMake(string newMake);
    void setSpeed(int newSpeed);
    //the classes "main method."
    void carDimensions();
    int velocity(int newSpeed);
    ~Car() {} //destructor
};
#endif // !Rectangle_pch
