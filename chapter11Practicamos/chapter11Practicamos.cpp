/*
    Jason Mullen
    10-25-20
*/

#include <iostream>
#include <iomanip>
using namespace std;

//student
class Student {
private:
    int id;
public:
    student();
    int getID();
    void setID(int);
};

//undergrad
class Undergrad: public Student {
private: 
    
public:
};

//grad
class Graduate: protected Student {
private:

public:
};
int main()
{
    Student stu;
    Undergrad ugObj;
    return 0;
}

