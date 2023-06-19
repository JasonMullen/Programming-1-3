/*
	Name:Jason Mullen
	Date:10-11-2020
	Assignment:
		Write a function that dynamically allocates an array of integers. 
		The function should accept an integer argument indicating the number of elements to allocate. 
		The function should return a pointer to the array.


*/

#include <iostream>
#include <iomanip>
using namespace std;

int* arrayAllocator(int);
int main()
{
	//1. VARIABLES
	int numElements;		//To hold the number of elements
	int* pointer = nullptr;	//A pointer for the array
	int counter;			//A loop counter
	
	//2.GETS THE ARRAY SIZE
	cout << "Please enter the array size: " << endl; //number of elements.
	
	//3.STORES THE NUMBER OF ELEMENTS
	cin >> numElements;

	//4. CALL THE ARRAY ALLOCATOR FUNCTION
	pointer = arrayAllocator(numElements); //The "pointer" variable is there to store the address from the arrayAllocator function.

	//5. FILLS THE ARRAY WITH VALUES
	for (int i = 0; i < numElements; i++) 
	{
		pointer[i] = i; //the pointer element is equal to the element in the array.
	}
	//6.OUTPUTTING THE ARRAY INFORMATION
	cout << "Here are the values in the array: \n" << endl;
	for (int j = 0; j < numElements; j++) 
	{
		cout << "Element " << j << " has the value " << pointer[j] << endl;

	}
	return 0;
}
//ARRAY ALLOCATOR FUNCTION
int* arrayAllocator(int num) //grabs however many elements the user wants.
{
	int* arrayPointer = nullptr; //creates a pointer(somewhere to save the address).

	arrayPointer = new int[num]; /* (Creating the array) Make an array with numElemnts(user input value). Then stores the address in "arrayPointer."*/

	return arrayPointer;		//Returns the address
}

