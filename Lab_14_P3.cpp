/* UniqueElements.cpp - A program that can check the previous numbers to see if it has been already entered or if it is negative
Author : Hunter Madsen
Module : 14
Problem Statement : Create a program that can allow the user to enter up to 10 unique positive numbers and then print them back on the screen. 
check for errors such that a number hasn't been entered already or that the user entered a negative number
*/
#include <iostream>
using namespace std;
 
//prototype function
bool exist(int array[], int size, int find);
 
int main() 
{
   // initialize the array and other variables
   int userArray[10] = {};
   int count = 1;
   int find = 1;
   
   // prompting the user for the 10 numbers
   cout << "Please enter no more than 10 positive numbers. Please seperate each number by a space, and when you are done enter 0." << endl;
 
 	// do while loop that checks when there are no more than 10 numbers
    do
    {
    	// cin statement for the number that the user enters
        cin >> find;
 
 		// if statement for checking
        if(!(exist(userArray, count, find)))
        {
           count++;
        }
    } while (find != 0 && count < 11);
 
 	// cout statement which displays the numbers
    cout << "Here are the " << count - 1 << " unique numbers you entered: ";
 
 	// for loop which displays the numbers
    for(int i = 0; i < count - 1; i++)
    {
        cout << userArray[i] << " " ;
    }  
}

// exist function
bool exist (int userArray[], int size, int find)
{   
    if (find == 0)
    {
        return true;
    }
  
  	// if statement which checks that the number is positive
    if (find < 0) 
    {
        cout << "*** " <<  find << " does not appear to be a positive number." << endl;
        return true; 
    }
 
 	// for loop which checks if the number has been entered already
    for(int i = 0; i < size; i++)
    {
    	// if statement if the number has already been entered
        if (userArray[i] == find)
        {
            cout << "*** " << find << " has already been entered." << endl; 
            return true;
        }
      
	}
	
    // moving on to the next number
    userArray[size - 1] = find;
    return false;
}
