/* FibonacciSequence.cpp - A program that can print the fibonacci sequence in reverse order
Author : Hunter Madsen
Module : 14
Problem Statement : Using the first heading create an array that is filled with the first 15 numbers in the fibonacci sequence and then
using the second heading print the numbers in reverse order.
*/ 
#include <iostream>
using namespace std; 

//prototype functions
void fillFibonacciArray(int array[], int size);
void showReverseArray(string heading, int array[], int size);

int main() 
{
	// filling the array with necessary info 
	int size = 15;
	int array[size];
	fillFibonacciArray(array, size);
	
	// displaying the headings
	string heading = "The Fibonacci sequence in reverse ";
	showReverseArray(heading, array, size);
	
	return 0;
}

// filling the array
void fillFibonacciArray(int array[], int size)
{
	// declaring three variables
	int first = 0;
	int second = 1;
	int temp;
	
	// for loop to run through the size
	for(int i = 0; i < size; i++)
	{
		// declaring i to be first
		array[i] = first;
		// setting temp to be first + second
		temp = first + second;
		// turning first into second
		first = second;
		// turning temp imto second
		second = temp;
	}
}

// displaying the heading
void showReverseArray(string heading, int array[], int size)
{
	// dislaying the info
	cout << heading << " with a size of " << size << " in reverse order would be: ";
	for(int i = size -1; i>= 0; i--)
	{
		// displaying the array
		cout << array[i] << " ";
	}
}
