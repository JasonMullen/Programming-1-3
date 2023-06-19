/*
    Name:Jason Mullen
    Date:8-14-2020
    Chapter 7:Defining and creating three random numbers
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class RandomInteger {
private:
    int low = 0;
    int high = 0;
    int value = 0;
public:
    RandomInteger(int low, int high); //Constructor
    ~RandomInteger(); //Destructor
        //preventing a synthesized copy constructor
    RandomInteger(const RandomInteger& random) = delete;
    void print()const; // Accessor member function
};
//constructor
RandomInteger::RandomInteger(int lw, int hh) : low(lw),high(hh) {
    srand(time(0));
    int temp = rand();
    value = temp % (high - low + 1) + low;
}
//Destructor
RandomInteger::~RandomInteger() {

}
//Accessor member function
void RandomInteger ::print()const {
    cout << value << endl;
}

int main()
{
    RandomInteger r1(10, 200);
    cout << "Random number between 100 and 200:";
    r1.print();

    RandomInteger r2(400, 600);
    cout << "Random number between 400 and 600:";
    r2.print();

    RandomInteger r3(1500, 2000);
    cout << "Random number between 1500 and 2000:";
    r3.print();
    return 0;
}

