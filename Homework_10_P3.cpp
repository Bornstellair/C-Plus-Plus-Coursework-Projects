/* FibonacciSequence.cpp - A program that can create a fibonacci sequence up to 25 sequences
Author : Hunter Madsen
Module : 10
Project : Homework 10 part 3
Problem Statement : Prompt the user to enter a sequence betwee n 1-25 to create a fibonacci sequence
Algorithm :
	1. Store the prototype function in the header
	2. Create a while loop to run through the program mutliple times
	3. Inside the while loop prompt the user to enter a number between 1-25 to be used for the sequence
	4. Using if statements only allow for numbers between 1-25 to be entered
		- store fibonacci(seq) in those that are true
	5. Use the prototype function to display the sequence to fibonacci(seq)
		- create int values and declare to 0 and 1 as well as an empty int to be used to combine the numbers
		- cout statements displaying the sequence 
*/
#include <iostream>
using namespace std;

// prototype function
void fibonacci(int seq);

int main()
{
    // While loop to run through the program multiple times
    while (true)
    {
        // Prompt the user to enter the length they want the sequence to be
        cout << "Please enter a number between 1-25 to be used for a fibonacci sequence: ";
        int seq;
        cin >> seq;

        // if statement if the user enters 0
        if (seq == 0)
        {
        	cout << "Nice try, but 0 doesn't work." << endl;
            return 0;
        }
        // if statement if the user enteres a number between 1-25
        else if (seq > 0 && seq <= 25)
        {
            fibonacci(seq);
        }
        // if the user enters a number that is not between 1-25
        else
        {
            cout << "Error, please enter a number between 1-25." << endl;
        }
    }

    return 0;
}

// Displaying the fibonacci sequence 
void fibonacci(int seq)
{
    // Initialize first two numbers in Fibonacci sequence and a temp
    int first_number_of_sequence = 0;
	int second_number_of_sequence = 1;
	int first_plus_second;
	
	// for loop to display the fibonacci sequence
    for (int i = 0; i < seq; i++)
    {
        // Displays the first number of the sequence
        cout << first_number_of_sequence << " ";
        
        // calculation of adding the first number to the second number and store it into first_plus_second value
       first_plus_second = first_number_of_sequence + second_number_of_sequence;
       
        // Next this moves the second number to the position the first number was in
        first_number_of_sequence = second_number_of_sequence;
        
        // Finally, move the first_plus_second int to the second position to repeate the process 
        second_number_of_sequence = first_plus_second;
    }
    // ends the line that the sequence was going through above
    cout << endl << endl;
}
