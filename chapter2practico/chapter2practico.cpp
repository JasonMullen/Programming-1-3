

#include <iostream>
#include <string>
using namespace std;
class ironMan {
private:
	//don't let user or programmer change the integratity of your program.
	//Attributes aka data members
	int suit = 0;
	string color = "Red";
	string shooterType = "pulse";

public:
	//behaviors aka member functions
	void changeSuits();
	void fly();
	void shoot();
};
void ironMan::changeSuits() {
		cout << "Color is Red." << endl;
		suit = 1;
		cout << "This color is Blue." << endl;
}
void ironMan::fly() {
	cout << "I am flying!!" << endl;
}
class captinAmerica {
private:
	//Attributes aka data members
	int shield = 2; //0:Original, 1:second movie, 2:endGame movie;
	int suit = 0;
public:
	//behaviors aka member functions
	void throwShield();
	void run();
	void punch();
};
int main() {
	//where i interact with the user
	//1.Variables
	ironMan go1; //Instance named "go1" made of the object ironMan.
	ironMan go2;
	captinAmerica cal1;
	captinAmerica cal2;
	go1.changeSuits();
	go1.fly();
	go2.shoot();
	cal1.run();
	cal2.punch();
	cout << "Please chooese your avenger " << endl;
}

