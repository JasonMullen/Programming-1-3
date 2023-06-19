/*
	Name: Jason Mullen
	Date:11-29-20
	Course:COSC-1437 2803 1 Programming Fundementals 2
	Assignment:
		Instructions
		A palindrome is any word, phrase, or sentence that reads the same forward and backward. Here are some well-known palindromes:
		Able was I, ere I saw Elba
		A man, a plan, a canal, Panama
		Desserts, I stressed
		Kayak
		Write a bool function that uses recursion to determine if a string argument is a palindrome. 
		The function should return true if the argument reads the same forward and backward. Demonstrate the function in a program.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
void strReverse(string, int);
bool palindromeChecker(string);
int main()
{
	//1.)variables
	string wordPhrase;

	//2.)ask the user for their specific word or phrase.
	cout << "What is the word or phrase?" << endl;
	//3.)store the word or phrase.
	getline(cin, wordPhrase); //Allows the user to input more than one word, i.e. a phrase.
	
	//5.)Display
	cout << "Your phrase backward is: ";
	//.4)Algorithm
	strReverse(wordPhrase, wordPhrase.length() - 1);
	cout << endl;
	cout << "(O = false, 1 = true)" << endl;
	cout << "Is " << wordPhrase << " a palindrome:" << palindromeChecker(wordPhrase) << endl;
	return 0;
	//very end of a string is length-1
}
//A method used to reverse the order of a word or phrase.
void strReverse(string wp, int length){
	/*Example:
		1.)0123456
		2.)bubbles = 7
		3.)selbbub*/
	if (length < 0) {//base case
		return;
	}
	else {//recursive case
		cout << wp[length]; //starts out with the last letter in the word or phrase.
		strReverse(wp, length - 1);/*Then recursivly goes through the word or phrase and reorders the word/ phrase form the last letter to the first and so on..*/

	}
}
//A function used to check if the word or phrase is a palindrome
bool palindromeChecker(string wp){
		if (wp.size()<=1) {//base case
			return true; //returns true if the number of elements in wp is less than or equal to 1.
		}
		else if(wp[0] != wp[wp.size()-1]) {//recursive case
			return false; //returns false if the element(a letter in this case) in position zero of the original wordphrase string is not eqaul to that of the reordered wordphase string.
		}
		return palindromeChecker(wp.substr(1, wp.size() - 2)); //returns the result of the function.
}



