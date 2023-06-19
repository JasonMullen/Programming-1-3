#include <iostream>

#include "time.h"

using namespace std;
bool bSearch(int* array, int key, int begin, int end);
int main()
{
	clock_t begin, end; //intializing clock
	int size = 100; //array size
	int* array = new int[size];


	for (int i = 0; i < size; i++) {//looping threw the array
		array[i] = 0;
	}
	begin = clock(); //starting the clock

	for (int i  = 0; i < 20000000; i++) {//20M unsuccesful searches
		bSearch(array, 1, 0, size);
	}
	end = clock(); //ending the clock
	
	
	double elapsedTime = double(end - begin) / CLOCKS_PER_SEC; //elasped time is end time - beginning time
	std::cout << "Search time is: " << elapsedTime << std::endl;
}
bool bSearch(int* array, int dest, int beginning, int end) {
	bool go = false;
	while (beginning <= end && !go) {
		int middle = (beginning + end) / 2;
		if (array[middle] == dest) {
			go = true;
		}
		else if (array[middle] < dest) {
			beginning = middle + 1;
		}
		else {
			end = middle - 1;
		}
	}
	return go;