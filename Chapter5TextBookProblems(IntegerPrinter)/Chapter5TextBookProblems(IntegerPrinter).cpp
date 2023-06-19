/*
    Name:Jason Mullen
    Date: 8/2/2020
*/

#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    int counter = 0;
    cout << "Enter the numer of integers you want to print:";
    cin >> num;
    while (counter < num) {
        cout << counter << endl;
        counter++;
    }
    return 0;
}

