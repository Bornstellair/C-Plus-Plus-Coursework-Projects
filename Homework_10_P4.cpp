/* RandomNumbers.cpp - A program that can display a random sequence of numbers between 2 values the user enters
Author : Hunter Madsen
Module : 10
Project : Homework 10 part 4
Problem Statement : Have a user enter a max and min value as well as an amount they want and generate a random numbers between the min and max
Algorithm :
	1. Store the prototype function in the header
	2. Create a while loop to run through the program mutliple times
	3. In the while loop prompt the user to enter the smallest, largest, and amount to be use
		- random function at the bottom of the loop to display the random sequence of numbers
	4. Using the prototype function use if statements to not allow for incorrect entries
	5. Use the random number generater for the amount that the user entered
	6. For loop to display the random number in the cout statement
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// prototype function 
void printRandom(int min, int max, int amount);

int main()
{
	// while loop to run through this multiple times
    while (true)
    {
    	int min;
    	int max;
    	int amount;
    	
    	// promts user for min
        cout << "Please enter the smallest whole number you want to use: ";
        cin >> min;
		
		// prompts user for max
        cout << "Please enter the largest whole number you want to use: ";
        cin >> max;

		// prompts user for amount
        cout << "Please enter how many numbers you want between those two values: ";
        cin >> amount;

		// function that is being prototyped
        printRandom(min, max, amount);

		// if the user enters 0 for amount
        if (amount == 0)
        {
            break;
        }
    }
    return 0;
}

// Displaying the random numbers
void printRandom(int min, int max, int amount)
{
	// if statement in case the user enters values that can't work
    if (min >= max)
    {
        cout << "Error, the smallest value can't be greater than the largest value." << endl;
        return;
    }
    // if statement if the user enters an amount that can't work.
    else if (amount < 0)
    {
        cout << "Error, the amount can't be smaller than 0." << endl;
        return;
    }

	// cout statement to display the info
    cout << "Below is a display of " << amount << " number(s). They are between " << min << " and " << max << ": \n" << endl;

	// random number generator
    srand(time(0));

	// for loop which displays the random numbers of the amount the user entered
    for (int i = 0; i < amount; i++)
    {
    	// calculation for random
        int random_number = min + (rand() % (max - min + 1));
        
        // cout statement breaking up the numbers randomly
        cout << random_number << " ";
    }
	// ends the line that the sequence was going through above
    cout << endl << endl;
}
