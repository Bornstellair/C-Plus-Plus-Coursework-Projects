/*TopTwoThousandNames.cpp - A program that can search through 2000 names to find the ranking and assigned amount of births for a name
Author : Hunter Madsen
Module : 9
Project : Homework 9 part 1
Problem Statement : Create a program which can search the two given files (GirlsNames2019.txt and BoysNames2019.txt) and show the ranking
of the name as well as how many people registerd with it
Algorithm :
	1. Create a while loop to run through the program multple times until the user enters quit
	2. Create all needed file information and then open both files
		- give an error if the files don't open
	3. Prompt the user to enter a name and store into a string
	4. Create several variables to be used in the next few loops
	5. Create a while loop to go through for the girls information
		- Display the name the user entered as well as their ranking and amount of registered births
		- If name is not found move onto boys names
	6. Create a while loop to go through for the boys information
		- Display the name the user entered as well as their ranking and amount of registered births
	7. If the name entered did not match then at this point it shold display it wasn't a match for boys or girls
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	// while loop to run through the program multiple times
	while(true)
	{
		// file information 
		const string input_file_name_1 = "GirlNames2019.txt";
		const string input_file_name_2 = "BoyNames2019.txt";
	
		ifstream input_file_boys;
		ifstream input_file_girls;
	
		input_file_girls.open(input_file_name_1.c_str());
		input_file_boys.open(input_file_name_2.c_str());
	
		// if statement to see if there was anything in the file and if there was an error opening it 
		if(!input_file_boys)
		{
			cout << "Error opening " << input_file_name_1 << ". Please try again.";
			return 0;
		}
		if(!input_file_girls)
		{
			cout << "Error opening " << input_file_name_2 << ". Please try again.";
			return 0; 
		}
	
		string name_user_entered;
	
		cout << "Please enter a name, and press enter when you are done. Enter \"quit\" to end the program." << endl ;
		cin >> name_user_entered;
	
		// if statement if the user enters "quit" to end the program
    	if (name_user_entered == "quit")
    	{
        	return 0;
    	}
    	
   		// varibales to be used
        string name_of_child;
		string childs_birth_ranking;
        bool bool_for_girls = false;
		bool bool_for_boys = false;
        int ranking_boys = 0;
		int ranking_girls = 0;


    	// While loop to get the name of the children line by line for girls
    	while (input_file_girls >> name_of_child)
   		{
        	// Input the line into our string
        	input_file_girls >> childs_birth_ranking;
        	ranking_girls++;

       		// if statement if the name the user entered is a match
        	if (name_user_entered == name_of_child)
       		 {
          		bool_for_girls = true;
            
            	// cout statement showing the name of the child and the ranking
           		cout << name_user_entered << " is ranked " << ranking_girls << " among girls with ";
				cout << childs_birth_ranking << " registered births." << endl;
    		 }
     	}
		// if statement if the name does not correspond with a girls name
        if (bool_for_girls == false)
   	    {
            cout << name_user_entered << " is not ranked among the top 1,000 girl names." << endl;
         }

        // While loop to get the name of the children line by line for boys
        while (input_file_boys >> name_of_child)
        {
            // Input the line into our string
            input_file_boys >> childs_birth_ranking;
            ranking_boys++;

            // if statement if the name the user entered is a match
            if (name_user_entered == name_of_child)
            {
                bool_for_boys = true;
                
                // cout statement showing the name of the child and the ranking
                cout << name_user_entered << " is ranked " << ranking_boys << " among boys with ";
				cout << childs_birth_ranking << " registered births." << endl;
            }
        }

        // If statement if there is no name found
        if (bool_for_boys == false)
        {
            cout << name_user_entered << " is not ranked among the top 1,000 boy names." << endl;
        }
        
    }

    return 0;
}
