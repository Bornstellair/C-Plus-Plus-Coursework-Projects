/* LotsOfNines.cpp - A program that can identify if any number can be evenly divided by zero
Author : Hunter Madsen
Module : 8
Project Statement : Prompt the user to enter a number and store it as a string. From there calculate the sum of the digits to then be converted 
to an actual number. If the sum = 0 the return 0. Finally, explain if it can be divisable by 9 or not.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

int main() 
{
	// while statement for the entire program
	while (true)
	{
		// cout statement to get the user to enter a number
		cout << "Please enter a whole number and press enter." << endl ;
		string whole_number_user_input ;
		cin >> whole_number_user_input ;
		
		// declaring the int to be initialized to 0
		int sum = 0 ;
		
		// for loop for number the user input to be further broken down
		for (int i = 0; i < whole_number_user_input.length(); i++)
		{
			// Convert from ASCII value to numeric value
			sum += (int) whole_number_user_input[i] - 48 ;
			
		}
		
		// if statement for when the number is 0, return 
		if (sum == 0)
		{
			cout << "Error, please try again." << endl ;
			return 0;
		}
		// if statement for when the number can be divided evenly by 9
		else if (sum % 9 == 0)
		{
			cout << "The number you have chosen can be divided evenly by 9." << endl ;
		}
		// if statement for when the number can't be divided evenly by 9 
		else 
		{
			cout << "The number you have chosen can't be divided evenly by 9." << endl ;
		}
		
		
	}
	
	
	
	return 0;
}
