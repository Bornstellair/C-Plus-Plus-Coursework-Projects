/* GradeCalculator.cpp - A program that can determine the amount of grades the user input and seperate into categories and give the % of each grade
Author : Hunter Madsen
Module : 8
Project : Homework 8 part 1
Problem Statement : Prompt the user to enter grades as many times as they want. From there display the amount of grades the user entered
as well as the total number of the A's, B's, C's, D's, and F's as well as the percent.
Algorithm :
	1. Create a cout statement to create the to prompt the user to enter a number 
	2. Create a bunch int of variables to be used later
	3. Use a do while loop to get the user to enter the amount of grades they want to use before entering a negative to end it
	- use an if statement for each letter grade to use logic to store the amount per letter
	4. When a negative number is entered move onto the next part
	5. If there was no numbers entered before the negative, give an error message
	6. Cout statement showing the total number of grades and the total amount of the A's, B's, C's, D's, and F's as well as the percent.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

int main() 
{
	// dashes used for display
	string dashes = "-" ;
	dashes.assign(10, '-') ;
	
	// cout display for top of program 
	cout << dashes << "Grade Counter" << dashes << endl ;
	cout << "Enter each grade on a seperate line" << endl ;
	cout << "(A negative grade will end entry)\n" << endl ;
	
	// variables used 
	int grade = 0 ;
	int total = 0 ;
	int a = 0 ;
	int b = 0 ;
	int c = 0 ;
	int d = 0 ;
	int f = 0 ;
	int i = 1 ;
	
	// do while loop
	do
		{
			// cout statement to get the user to enter the grade 
			cout << setw(10) << "Enter grade #" << i << ": " ;
			i++ ;
			cin >> grade ;
			
			// if statements to decide which grade they get
			// if grade is an A
			if (grade > 89)
				{
					a++ ;
					total++ ;
				}
			// if grade is a B
			else if (grade > 79)
				{
					b++ ;
					total++ ;
				}
			// if grade is a C
			else if (grade > 69)
				{
					c++ ;
					total++ ;
				}
			// if grade is a D
			else if (grade > 59)
				{
					d++ ;
					total++ ;
				}
			// if grade is an F
			else if (grade >= 0)
				{
					f++ ;
					total++ ;
				}
		}
	// if input is not negative
	while (grade >= 0) ;
	cout << endl ;
	
	// if statement for when there is no entries
	if (total == 0)
		{
			cout << "No entries were entered, please try again." << endl ;
		}
	else 
		{
		// cout statement to display the total amount of grades and the percentage
		cout << fixed << setprecision(1) ;
		cout << "Total amount of grades = " << total << endl;
        cout << "Number of A's = " << a << " which is " << (a * 100.0 / total) << "%" << endl ;
        cout << "Number of B's = " << b << " which is " << (b * 100.0 / total) << "%" << endl ;
        cout << "Number of C's = " << c << " which is " << (c * 100.0 / total) << "%" << endl ;
        cout << "Number of D's = " << d << " which is " << (d * 100.0 / total) << "%" << endl ;
        cout << "Number of F's = " << f << " which is " << (f * 100.0 / total) << "%" << endl ;
		}
	
	return 0;
}
