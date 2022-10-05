/* PizzaSlices.cpp - A program that can find the amount of slices you will get after the user enters how many cuts they want
Author : Hunter Madsen
Module : 10
Problem Statement : Prompt the user to enter the amount of cuts they want and then using a prototype function solve for the amount of
cuts to give the user slices of pizza.
*/
#include <iostream>
using namespace std;

// prototype function
long long lazy(int cuts);

int main() 
{
	while(true)
	{
		// vairable used 
		int cuts;
		
		// cout to prompt for the user to enter the amount of cuts they want
		cout << "Please enter a number between 1-20 for the amount of cuts you want: ";
		cin >> cuts;
		
		// if statemetn for when the user enters 0
		if (cuts == -1)
		{
			cout << "You want negative slices? Just get out!" << endl;
			return 0;
		}
		// if statement if the user enters a correct amount 
		else if (cuts >= 0 && cuts <= 20 )
		{
			cout << "With " << cuts << " cuts you can have " << lazy(cuts) << " slices of pizza." << endl;
		}
		// else if the user does not enter a valid number
		else 
		{
			cout << "Please enter a number between 1-20." << endl ;
		}
	}
	return 0;
}

// Displaying how we got the amount of pieces for pizza 
long long lazy(int cuts)
{
    // Initialize so our sequence works
    long long slices = 1;

    // For loop which gets the amount of slices
    for (int i = 0; i < cuts; i++)
    {
        // Add incrementing values to pieces
        slices += i + 1;
    }

   	// Return value
   	return slices;
}	
