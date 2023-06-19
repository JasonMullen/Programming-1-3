/*
    Name:Jason Mullen
    Date:8-2-2020
*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int sum = 0;
    int num = 0;
    ifstream infile;
    //opening file
    infile.open("numbers.dat");
    while (infile >> num) {
        sum = sum + num;
    }
    cout << "The sum is:" << sum;
    infile.close();
    return 0;
}

