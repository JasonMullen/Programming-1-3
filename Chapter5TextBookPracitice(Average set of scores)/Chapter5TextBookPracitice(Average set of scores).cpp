/*
    Name: Jason Mullen
    Date: 8/2/2020
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double score = 0.0;
    double sum = 0.0;
    double average = 0.0;
    int counter = 1;
    while (counter < 5) {
        cout << "Enter the " << counter << " test score(between 0-100):";
        cin >> score;
        while (score < 0 || score > 100) {
            cout << "Please enter an appropriate score(between 0 -100):";
            cin >> score;
        }
        sum = sum + score;
        counter++;
    }
    average = (sum / 4);
    cout << fixed << setprecision(2) << showpoint;
    cout << "The average score is: " << average << "%";
    return 0;
}