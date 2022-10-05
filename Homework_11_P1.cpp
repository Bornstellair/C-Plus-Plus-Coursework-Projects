/* GeometricFigures.cpp - A program that allows a user to pick a geometric figure to enter values and find the area and volume for each
Author : Hunter Madsen
Module : 11 
Project : Homework 11 part 1
Problem Statement : Prompt the user to pick a specific figure. From there ask for the given information needed to calculate the volume and
area of the specific figure they chose. Finally, display the area and volume for the figure using the information the user entered.
Algorithm :
	1. Create the needed prototype functions
	2. Invoke the menu() functon in main 
	3. Display the options for geometric figures and prompt the user to pick one of the choices
		- Factor in if the user does not put in a uppercase letter and return it
	4. When returned to main using if statements go through and invoke the function that cooresponds to the geometric shape the user entered
	5. When invoked, prompt the user for the necessary information for the specific geometric shape they chose
		- Don't allow the user to enter values less than 0
		- Perform the calculations to get the area and volume of the geometric shape
	6. Display the area and volume of the geometric shape the user chose
*/ 
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

// Prototype functions
char menu();
void sphere();
void cube();
void pyramid();

int main()
{
    // While loop to run through the program multiple times
    while (true)
    {
        // Value returned from calling menu function goes into char
        char choiceUserEnters = menu();

        // if statement if the user choses the sphere 
        if (choiceUserEnters == 'S')
        {
            sphere();
        }
        // if statement if the user choses the cube 
        else if (choiceUserEnters == 'C')
        {
            cube();
        }
        // if statement if the user choses the pyramid 
        else if (choiceUserEnters == 'P')
        {
            pyramid();
        }
        // if statement if the user choses to quit 
        else if (choiceUserEnters == 'Q')
        {
            exit(EXIT_SUCCESS);
        }
        // if statement if the user does not enter a correct choice 
       	else 
       	{
       		cout << "Error, please enter a choice from above only." << endl;
		}
    }

    return 0;
}

// Function to display menu
char menu()
{
	// char to be used later
	char choiceUserEnters;
	
	// used for displaying
    string dashes = "-";
    dashes.assign(10, '-');

	// cout display statement displaying the figures to pick 
    cout << dashes << " Geometric Area and Volume Calculator " << dashes << endl << endl;
    cout << "S - Calculate the area of a Sphere" << endl ;
    cout << "C - Calculate the area of a Cube" << endl ;
    cout << "P - Calculate the area of a Pyramid" << endl ;
    cout << "Q - Quit" << endl ;
    
    // prompting the user to enter a choice
    cout << "Please enter your choice: ";
    cin >> choiceUserEnters;
    
    // changing the letter the user entered to an uppercase
    char choiceUserEntersUpper = toupper(choiceUserEnters);

	// returning the choice
    return choiceUserEntersUpper;
}
// Sphere function
void sphere()
{
    // variable to be used in loop
    double radiusUserEnters;

    // While loop to ensure the user doesn't enter a negative radius 
    while (true)
    {
        // prompting the user to enter the radius they want to use
        cout << "Please enter what radius you would like to use: ";
        cin >> radiusUserEnters;

        // if statement if the radius the user enters is greater than 0
        if (radiusUserEnters > 0)
        {
            break;
        }
        // if statement if the user enters a number less than 0
        else if (radiusUserEnters < 0)
        {
            cout << "Error, please enter a value larger than 0 for the radius." << endl;
        }
    }
	// PI value
	const double M_PI = 3.141592653589793238466;
	
	// calculations
	double area = 4 * M_PI * pow(radiusUserEnters, 2);
	double volume = 4.0 / 3 * M_PI * pow(radiusUserEnters, 3);

    // Displaying the area and volume
    cout << "A sphere that has a radius of " << radiusUserEnters << " would have:" << endl;
    cout << "An Area of " << area << " and a Volume of " << volume << "\n" <<  endl;

    return;
}

// Pyramid function
void pyramid()
{
	// variables to be used in the loops
	double heightUserEnters;
	double baseUserEnters;
	
	// while loop for the height
	while(true)
	{
		// prompting the user to enter the height
		cout << "Please enter a height you would like to use: ";
		cin >> heightUserEnters;
		
		// if statement if the height the user enters is greater than 0
        if (heightUserEnters > 0)
        {
            break;
        }
        // if statement if the user enters a number less than 0
        else if (heightUserEnters < 0)
        {
            cout << "Error, please enter a value larger than 0 for the height." << endl;
        }
	}
	
	// while loop for the base
	while(true)
	{
		// prompting the user to enter a base
        cout << "PLease enter a base you would like to use: ";
        cin >> baseUserEnters;
        
        // if statement if the base the user enters is greater than 0
        if (baseUserEnters > 0)
        {
            break;
        }
        // if statement if the user enters a number less than 0
        else if (baseUserEnters < 0)
        {
            cout << "Error, please enter a value larger than 0 for the base." << endl;
        }
	}
	
	// calculations
	double area = pow(baseUserEnters, 2) + 2 * baseUserEnters *  (sqrt(pow(baseUserEnters, 4)/ 4) + pow(heightUserEnters, 2));
	double volume = pow(baseUserEnters, 2) * heightUserEnters/ 3;
	
	// displaying the area and volume
    cout << "A pyramid that has a height of " << heightUserEnters << " and a base of " << baseUserEnters << " would have:" << endl;
    cout << "An Area of " << area << " and a Volume of " << volume << "\n" << endl;
    
    return;
}

// Cube function
void cube()
{
	// variable to be used in loop
	double sideUserEnters;
	
	// while loop for the side
	while(true)
	{
		cout << "Please enter what value you would like to use for a side of a cube: ";
		cin >> sideUserEnters;
		
		// if statement if the side the user enters is greater than 0
        if (sideUserEnters > 0)
        {
            break;
        }
        // if statement if the user enters a number less than 0
        else if (sideUserEnters < 0)
        {
            cout << "Error, please enter a value larger than 0 for the side." << endl;
        }
	}
	
	// calculations
	double area = 6 * pow(sideUserEnters, 2);
	double volume = pow(sideUserEnters, 3);
	
	// displaying the area and volume
    cout << "A cube that has a side length of " << sideUserEnters << " would have:" << endl;
    cout << "An Area of " << area << " and a Volume of " << volume << "\n" << endl;
    
    return;
}
