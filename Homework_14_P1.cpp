/* removingElements - A program that can remove, increase, decrease, and display elements of an array
Author : Hunter Madsen
Module : 14
Project : Homework 14 part 1
Problem Statement : Create a function that can remove elements from an array, a function that can increase or decrease specific elements of 
an array by any amount, and then a function that prints the message on the inside of the array.
Algorithm :
	1. Create the prototype functions above main
	2. In main initialize the variables
	3. Display the original contents of the array using the show function
	4. Following the instructions given, update, remove, and display when needed using the functions prototyped
	5. Finally, run the program and check for the final message, which should be something we all love
*/

#include <iostream>
using namespace std; 

// prototype functions
int remove(char array[], int count, int removeIndex); 
void update(char array[], char amount, int index); 
void showArray(string heading, char array[], int count); 

int main() {

    // initializing 
    string heading = "\n Here is what is on the inside of the array:"; 
    char message[] = {'t', 'Q', 'b', ')', 'f', '+', '5'}; 
    int count = sizeof(message) / sizeof(char); 

    // displaying the contents of the original array
    showArray(heading, message, count); 

	// removing the character at position 3
    int removeIndex = 3; 
    count = remove(message, count, removeIndex); 
	
	// displaying the array 
    showArray(heading, message, count); 

	// subtracting 14 from position 1
    int amount = -14;
    int index = 1;
    
    // updating and displaying the array
    update(message, -14, index); 
    showArray(heading, message, count); 

	// removing the character at position 0
    removeIndex = 0; 
    count = remove(message, count, removeIndex); 
    
    // displaying the changes made
    showArray(heading, message, count); 

	// removing character at positon 2
    removeIndex = 2; 
    count = remove(message, count, removeIndex); 
  	
	// displaying the changes made 
    showArray(heading, message, count); 

	// subtracting 55 from the character at position 1
    amount = -55; 
    index = 1; 
    
    // updating and displaying the array
    update(message, amount, index); 
    showArray(heading, message, count); 

	// removing the last character 
    removeIndex = 3; 
    count = remove(message, count, removeIndex); 

	// final display of the changes made
    showArray(heading, message, count); 


}

// showArray function
void showArray(string heading, char message[], int count)
{
    cout << heading << endl; 

    //use for loop to show every character in array
    for (int i = 0; i < count; i++)
    {
        cout << message[i] << " " ; 
    }
}

// remove function
int remove(char message[], int count, int removeIndex)
{
	// if statement which checks
    if(count == 0 || removeIndex >= count) 
    {
        return 0; 
    }

	// initializing a variable to be used in the for loop
    int j = 0; 
    
    // for loop which removes the index
    for (int i = 0; i < count -1 ; i++)
    {
        if(i != removeIndex)
        {
            message[j] = message[i]; 
            j++;
        }

    }

    return count - 1; 
}

// update function
void update (char message[], char amount, int index)
{   
	// the given amount
    message[index] +=  amount; 
}
