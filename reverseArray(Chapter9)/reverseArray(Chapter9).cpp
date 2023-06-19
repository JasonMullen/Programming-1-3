/*
    Name: Jason Mullen
    Date: 10-11-20
    Assignment:
        Write a function that accepts an int array and the array’s size as arguments. 
        The function should create a copy of the array, except that the element values should be reversed in the copy.
        The function should return a pointer to the new array. Demonstrate the function in a complete program.


*/

#include <iostream>
#include <iomanip>
using namespace std;
int* reverseArray(int[], int);
void showArray(int arr[], int);
int main()
{
    //1.)VARIABLES
    const int SIZE = 5;
    int values[SIZE] = { 1,2,3,4,5 }; //the array to reverse
    int* arrayCopy = 0;

    //2.)GET THE ARRAY SIZE
    cout << "The contents of the original array are: " << endl;
    showArray(values, SIZE); //displays the array contents                        
    //4.) CALL THE REVERSE COPY OF THE ARRAY FUNCTION.
    arrayCopy = reverseArray(values, SIZE);
    //5.)
    cout << " " << endl;
    cout << "The contets of the copy are :\n";
    showArray(arrayCopy,SIZE); //displays the array contents                        
    return 0;
}
//FUNCTIONS:
int* reverseArray(int arr[],int size) 
{
    //1.VARIABLES
    int sourceIndex; //Index into the original source array(Ordered array).
    int targetIndex;      //Index into the target array(reversed array)
    
    //2.MAKE SURE THE SIZE IS POSITIVE
    if (size <= 0) {
        return NULL;
    }
    //3.ALLOCATE AN ARRAY LARGE ENOUGHT TO HOLD A COPY OF THE ARRAY GIVEN.
    int* copy = new int[size];  //This is an array to hold the reverse numbers

    //SourceIndex is pointing to the last element(#5)
    //TargetIndex is pointing to the first element in the new Array
    //This algorithm will reverse the array.
    for (sourceIndex = size - 1, targetIndex = 0; sourceIndex >= 0; sourceIndex--, targetIndex++)
    {
        copy[targetIndex] = arr[sourceIndex];
    }
    return copy;
}
void showArray(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
