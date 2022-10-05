/* ActionFunctions.cpp - A program that demonstrates that helps explain parameters for variables
Author : Hunter Madsen
Module : 11
Problem Statement : Using the given prototype functions go through and create a program that can print messages off of the different prototype 
functions and show different parameters as well as reusability
*/
#include <iostream>
using namespace std;

// all prototype functions
void action();
void action(int one);
void action(double one);
void action(int one, int two);

int main() 
{
	// No parameter function
    action();
    
    // Initializing the first variable to be stored as an int
    int one = 3;
    
    // Call on the first int function
    action(one);
    
    // Initialize the second variable to be stored as a double
    double two = 12.345;
    
    // Call on the double 
    action(two);
    
    // Changing the first variable
    one = 8;
    
    // Initialize the third variable to be stored as an int
    int three = 47;
    
    // Call on the first int and the third int
    action(8, 47);

	
	return 0;
}

// No param function
void action()
{
    cout << "No parameter version called" << endl;
}

// One int function
void action(int one)
{
    cout << "One int version called, received " << one << " as parameter" << endl;
}

// One double function
void action(double two)
{
    cout << "One double version called, received " << two << " as parameter" << endl;
}

// Two int function
void action(int one, int two)
{
    cout << "Two int version called, received " << one << " and " << two << " as parameters" << endl;
}
