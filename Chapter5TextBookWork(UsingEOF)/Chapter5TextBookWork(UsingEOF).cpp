/*
    Name:Jason Mullen
    Date:8-2-2020
*/
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num = 0;
    cout << "Enter the first Integer(EOF to stop):";
        while(cin >> num){
            sum = sum + num;
            cout << "Enter the next integer:";//update
        }
    cout << "The sum is: " << sum;
    return 0;
}

