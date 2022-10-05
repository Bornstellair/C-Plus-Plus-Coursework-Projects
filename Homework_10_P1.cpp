/* TriangleHeight.cpp - A program that can build a triangle up to a height of 10
Author : Hunter Madsen
Module : 10
Project : Homework 10 part 1
Problem statement : Prompt the user to enter a number between 1-10 to create the max height for a triangle 
ALgorithm : 
	1. Store the prototype function in the header
	2. Create an int to be used in the loop
	3. Create a while loop that goes through the program multiple times
	4. In the while loop prompt the user to enter a number between 1-10 to be used 
	5. Using if statements allow for numbers between 1-10 to be entered
		- store triangle(height) in those that are true
	6. Use the prototype function to display the triangle through triangle(height)
		- using a for loop build the triangle up to the max heigh
		- using another for loop build the triangle down from the max height
*/
#include <iostream>
using namespace std;

// prototype function
void triangle(int height);

int main()
{
	// storing heigh outside the loop
    int height;

	// while loop to go through the program multiple times
    while (true)
    {
    	// prompting the user to enter a number between 1-10
        cout << "Please enter a heigh you want to use between 1-10 to create a triangle: ";
        cin >> height;

		// if statement if the user enters 0
        if (height == 0)
        {
        	cout << "Sorry, 0 isn't going to cut it." << endl ;
            return 0;
        }
        // if statement if the user enters a number between 1-10
        if (height > 0 && height <= 10)
        {
            triangle(height);
        }
    }

    return 0;
}

// displaying the triangle
void triangle(int height)
{
	// for loop which builds up to the max
    for (int i = 0; i < height; i++)
    {
    	// this prints the stars to be used to build the triangle
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // end the line the sequence was going through above
        cout << endl;
    }
    // for loop which builds down from max
    for (int l = height - 1; l > 0; l--)
    {
    	// this prints the stars to be used to build the triangle
        for (int k = l; k > 0; k--)
        {
            cout << "*";
        }
        // end the line the sequence was going through above
        cout << endl;
    }
    
}
