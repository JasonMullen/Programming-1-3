// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iostream>
#include "time.h"
using namespace std;
void p_diff(clock_t start, int iter_len) {
	cout << iter_len << "\t\t" << float(clock() - start) / CLOCKS_PER_SEC << " seconds.\n";
}
// chrono library casting unnescessary
int search(int* arr, int begin, int end, int target) {
	if (begin > end) return -1;
	int mid = (begin + end) / 2;
	if (target == arr[mid]) return mid;
	return target < arr[mid] ? search(arr, begin, mid - 1, target) : search(arr, mid + 1, end, target);
}
void battery(int length, clock_t start = clock()) {
	int* arr = new int[length](); // initialize to 0
	for (int i = 0; i < 10000000; i++) { search(arr, 0, length - 1, length); }
	p_diff(start, length);
}
int main(int argc, char* argv[]) {
	int lengths[] = { 128, 512, 2048, 8192, 32768, 131072, 524288, 2097152 };
	for (const int length : lengths) {
		battery(length);
	}
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
