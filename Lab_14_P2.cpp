/* ReverseArray.cpp - A program that can prompt the user to use a size and create random numbers for the size, reverse the order of the numbers,
and get the total of the numbers
Author : Hunter Madsen
Module : 14
Problem Statement : Using the given functions, prompt the user to enter a size to be used to determine the amount of numbers to be randomly 
created. Next, print that information witht the total. Using the reverseElements function, reverse all the numbers, and using the 
printArrayAndTotal function print the numbers in reverse order and display the total again.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// prototype functions 
void fillRandom(int array[], int size, int min, int max);
void reverseElements(int array[], int size);
void printArrayAndTotal(string heading, int array[], int size);

int main()
{
	// declaring variables to be used
	int size;
	int total;
	
	// while loop that runs through this multiple times
	while(true)
	{
		// prompting the user to enter a number between 10-20
		cout << "Please enter a number between 10-20 to display random numbers: ";
		cin >> size;
	
		// checking if the number the user is between the specified numbers
		if(size > 9 && size < 21)
		{
			break;
		}
		// else if the incorrect number was entered
		else
		{
			cout << "Error, the number you entered was not between the specified numbers." << endl;
		}
	}
	
	// creating the array
	int array[size];
	
	// fillRandom function being called
	fillRandom(array, size, 1, 10);
	
	// printing the fillRandom function
	printArrayAndTotal("Here are the the amount of random numbers you wanted:", array, size);
	
	cout << "\n";
	
	// reverseElement function being called
	reverseElements(array, size);
	
	// printing the printArrayAndTotal function 
	printArrayAndTotal("Here are the the amount of random numbers you wanted:", array, size);
	
	return 0;
}

// fillRandom function
void fillRandom(int array[], int size, int min, int max)
{
	// random number generator
	srand(time(0));
	
	// for loop which goes through the size of the array
	for(int i = 0; i < size; i++)
	{
		// looping through the array
		array[i] = (rand() % (max - min + 1)) + min;
	}
	return;
}

// reverseElements function
void reverseElements(int array[], int size)
{
	// creating temp to balance
	int temp;
	
	// for loop which goes through the 1/2 the size of the array
	for(int i = 0; i < size/2; i++)
	{
		// swapping
		temp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = temp;
	}
	return;
}

// printArrayAndTotal Function
void printArrayAndTotal(string heading, int array[], int size)
{
	int total = 0;
	
	// displaying the heading
	cout << heading << endl;
	
	// for loop that goes through and shows the inside of the array
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
		
		total+= array[i];
	}
	
	cout << "\n The total was: " << total;
	
	return;
}
