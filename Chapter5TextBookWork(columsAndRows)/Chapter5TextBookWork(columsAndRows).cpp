/*
    Name: Jason Mullen
    Date: 8-2-2020
    Assignement: 
*/
#include <iostream>
using namespace std;

int main()
{
    int rows = 0;
    int cols = 0;
    int iterations = 0;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of cols: ";
    cin >> cols;
    for (int i = 1; i <= rows; i++) {
        for (int x = 1; x <= cols; x++) {
            iterations = iterations + 1;
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

