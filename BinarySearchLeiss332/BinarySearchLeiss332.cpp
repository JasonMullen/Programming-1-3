#include <iostream>
#include "time.h"
using namespace std;
void timer(clock_t start, int iter_len) {
	cout << iter_len << "\t\t" << float(clock() - start) / CLOCKS_PER_SEC << " seconds.\n";
}
// chrono library casting unnescessary
int search(int* arr, int begin, int end, int target) {
	if (begin > end) return -1;
	int mid = (begin + end) / 2;
	if (target == arr[mid]) return mid;
	return target < arr[mid] ? search(arr, begin, mid - 1, target) : search(arr, mid + 1, end, target);
}
void timeKeeper(int length, clock_t start = clock()) {
	int* arr = new int[length](); // initialize to 0
	for (int i = 0; i < 20000000; i++) { search(arr, 0, length - 1, length); }
	timer(start, length);
}
int main(int argc, char* argv[]) {
	int lengths[] = { 100, 400, 1600, 6400, 256000, 102400, 409600,1368400};
	for (const int length : lengths) {
		timeKeeper(length);
	}
	return 0;
}


