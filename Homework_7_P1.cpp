/* GeometricFigures.cpp - A program that can solve for the area of the 3 specific figures shown
Author : Hunter Madsen
Module : 7
Project : Homework 7 part 1
Problem Statement : Display some figures and allow the user to pick what figure they want to work with. From there prompt the user to enter 
the necessary information to find the area of the figure they picked. Finally, display the area of that figure.
Algorithm : 
	1. Create a few char values and store them as their respective characters
	2. Create a cout statement and display the char values to their coresponding lines to be associated with the calculations
	3. Prompt the user to pick which figure they want to solve for
	4. Use the toupper function to allow for the use of lowercase letters
	5. Using if statements break the figures into seperate statements and solve for the area respective to the figure chosen
	6. In the if statements prompt the user to enter more information to solve for the area
	7. cout statement displaying the area
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

int main()
 {
 	// constant for pi and char values 
 	const double value_of_pi = 3.141592653589793238466 ;
 	char c = 'C' ;
 	char r = 'R' ;
 	char t = 'T' ;
 	char q = 'Q' ;
 	
 	// cout statement displaying the figures to pick from
 	cout << "***** Geometric Figure Calculator *****" << endl ;
 	cout << c << " - Calculate the area of a Cirlce" << endl ;
 	cout << r << " - Calculate the area of a Rectangle" << endl ;
 	cout << t << " - Calculate the area of a Triangle" << endl ;
 	cout << q << " - Quit" << endl ;
 	
 	// cout statement prompting the user to pick which letter they want
 	cout << "Please enter which figure you would like to calculate." << endl ;
 	char figure_user_entered ;
 	cin >> figure_user_entered ;
 	char case_user_entered = toupper(figure_user_entered) ;
 	
 	// if statements
 	if (case_user_entered == c)
 	{
 		// display statement to prompt user to enter a radius
 		cout << "Please enter what value you want the radius of the circle to be." << endl ;
 		double radius_of_circle ;
 		cin >> radius_of_circle ;
 		
 		// calculations to find the area with a cout statment displaying the information
 		double area_of_circle = value_of_pi * pow(radius_of_circle, 2) ;
 		cout << "If the radius of a circle was " << radius_of_circle << " the area of the circle would be " << area_of_circle ;
 		
	 }
 	else if (case_user_entered == r)
 	{
 		// cout statement to prompt the user to enter both length and width and store as doubles
 		cout << "Please enter what value you want the width of the rectangle to be." << endl ;
 		double width_of_rectangle ;
 		cin >> width_of_rectangle ;
 		cout << "Please enter what value you want the length of the rectangle to be." << endl ;
 		double length_of_rectangle ;
 		cin >> length_of_rectangle ;
 		
 		// calculations to find the area with a cout statment displaying the information
 		double area_of_rectangle = width_of_rectangle * length_of_rectangle ;
 		cout << "If the length of the rectangle was " << length_of_rectangle << " and the width of the rectangle was " ;
 		cout << width_of_rectangle << " the area would be " << area_of_rectangle << endl ;
	 }
 	else if (case_user_entered == t)
 	{
 		// cout statement to prompt the user to enter both the base and height and store as doubles
 		cout << "Please enter what value you want the base of the triangle to be." << endl ;
 		double base_of_triangle ;
 		cin >> base_of_triangle ;
 		cout << "Please enter what value you want the height of the triangle to be." << endl ;
 		double height_of_triangle ;
 		cin >> height_of_triangle ;
 		
 		// calculations to find the area with a cout statment displaying the information
 		double area_of_triangle = (base_of_triangle * height_of_triangle) / 2 ;
 		cout << "If the base of the triangle was " << base_of_triangle << " and the height of the triangle was " ;
 		cout << height_of_triangle << " the area would be " << area_of_triangle << endl ;
	 } 
	 // other else statements
 	else if (case_user_entered == q)
 	{
 		cout << "Quitting" << endl ;
 		return 0;
	 }
 	else 
 	{
 		cout << "Error, this shouldn't have happened." << endl ;
	 }
 	
 	
	return 0;
}
