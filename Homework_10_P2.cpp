/* DegreeConverting.cpp - A program that can convert any degree to either celsius or fahrenheit 
Author : Hunter Madsen
Module : 10
Project : Homework 10 part 2
Problem Statement : Create a program which can convert any temperature from fahrenheit to celsius or celsius to fahrenheit
Algorithm :
	1. store the protype function above main()
	2. creat a loop that runs through 4 times
		- in the loop prompt the user to enter the degree they want to use and store as a double
		- in the loop prompt the user to enter the scale they want to use
	3. convert function for the degree and scale
	4. creat an if statement
		- have one if statement for fahrenheit 
			- do calculations inside the statement and display the conversion
		- have one if statement for celsius
			- do calculations inside the statement and display the conversion
		- else if they dont enter an F or C 
*/
#include <iostream>
#include <iomanip>
using namespace std;

// prototype function 
void convert(double degrees, char scale);

int main()
{
    // For loop to go through this 4 times
    for (int i = 0; i < 4; i++)
    {
        // Ask for degrees
        cout << "What degree would you like to convert? Enter the number and press enter: ";
        double degrees;
        cin >> degrees;

        // Ask for scale and uppercase it
        cout << "What scale would you like to use? Press F for Fahrenheit, or press C for Celsius:";
        char scale_user_entered;
        cin >> scale_user_entered;
        
        // toupper to account for if the user inputs upper or lowercase letters
        char scale = toupper(scale_user_entered);

        // Call convert function
        convert(degrees, scale);
    }

    return 0;
}

// Function that converts the degrees the user entered
void convert(double degrees, char scale)
{
    // if statement to convert to celsius 
    if (scale == 'F')
    {
        // calculation for converting to celsius
        double celsius_degree = 5 * (degrees - 32) / 9.0 ;
        
        //cout statement for celsius
        cout << fixed << setprecision(1) << endl ;
		cout << degrees << " Fahrenheit is " << celsius_degree << " Celsius." << endl ;
        return ;
    }
    // if statement to convert to fahrenheit
    else if (scale == 'C')
    {
        // calculations for converitng to fahrenheit
        double fahrenheit_degree = 9.0 / 5 * degrees + 32 ;
        
        // cout statement for fahrenheit
        cout << fixed << setprecision(1) << endl ;
		cout << degrees << " Celsius is " << fahrenheit_degree << " Fahrenheit" << endl ;
        return ;
    }
    // If statement if the sclae the user entered isn't F or C
    else
    {
        cout << "Error entering scale, please enter only F or C." << endl ;
    }
}
