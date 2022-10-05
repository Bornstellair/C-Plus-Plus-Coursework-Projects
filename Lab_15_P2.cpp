/* LinearSearch.cpp - A program that can display 100 numbers between 1-20 and asks the user to perform a linear search of an array
Author : Hunter Madsen
Module " 15
Problem Statement : Display 100 numbers between 1-20. Next, prompt the user to pick any number between 1-20 to see how many times it appeared.
After the user enters up to all 20 numbers or enters 0 display the total.
*/
#include <iostream>
#include <cstdlib>
using namespace std; 

//prototype functions
int count(int array[], int arraySize, int targetNumber); 

int main() 
{
    // initalizing 
    int arrayRandom[100]; 
    int arraySize = sizeof(arrayRandom) / sizeof(arrayRandom[0]); 

	// displaying the heading
    cout << "Below this are 100 numbers between 1-20 created with a random array." << endl;

    // filling the array with random numbers between 1-20
    for(int i = 0; i < arraySize; i++)
    {
        arrayRandom[i] = rand()%20 + 1; 
        cout << arrayRandom[i] << " "; 
    } 
	
	// spacing between the pile of numbers and what the user enters
	cout << "\n\nWhen you are done, you can enter 0 to find the total, otherwise enter all the numbers." << endl;
	
	
    // initializing and declaring two variables
    int targetNumber; 
    int total = 0; 

    // do while loop that asks the user to enter a number to search for
    do 
    {
    	// initializing inside the loop
        targetNumber = 0; 
    
		// prompting the user for the number they want to use 
        cout << "What number do you want to look for in this mess? Please only enter numbers between 1-20 and enter it here: ";
        cin >> targetNumber; 
		
		// if statement which checks that the user enters a number between 1-20
        if (targetNumber > 20 || targetNumber < 0)
        {
            cout << "Error, the number you entered is not between 1-20." << endl; 
            continue; 
        } 
        // else if statement if the user enters 0
        else if (targetNumber == 0)
        { 
			break; 
		}

		// calculations
        total += count(arrayRandom, arraySize, targetNumber);
    } while (targetNumber !=0 ); 
 
 	// final cout statement displaying the total amount of numbers
    cout << "The total for the amount of numbers that were found is: " << total;
}

// count function
int count(int arrayRandom[], int arraySize, int targetNumber)
{
    // initialize and declaring variables
    int *pointer = arrayRandom;
    int counter = 0; 

    //pointer is used for linear search
    for (int i = 0; i < arraySize; i++)
    {	
    	// if statement to increase counter if it finds the targetNumber
        if(*(pointer + i) == targetNumber)
        {
            counter++;
        }
    }
    //print data
    cout << "The number " << targetNumber << " appeared in this mess " << counter << " times." << endl; 
    return counter; 
}
