/*
    Name:Jason Mullen
    Date:8-2-2020
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    int num = 0;
    bool flag;
    //open file
    infile.open("numbers.dat");
    //Loop to find a number greater than 150
    flag = false;
    while (infile >> num && !flag) {
        if (num >= 150) {
            cout << "The number is: " << num;
            flag = true;
        }
    }
    //check flag
    if (!flag) {
        cout << "The number was not found!";
    }
    infile.close();
    return 0;

}

