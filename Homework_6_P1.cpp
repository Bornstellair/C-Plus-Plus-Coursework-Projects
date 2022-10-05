/* HeightPrediction.cpp - A program that can guess the height of a child based on the parents height
Author : Hunter Madsen
Module : 6
Project : Homework 6 part 1
Problem statement : Create a program that can guess the height of a child male or female based on the parents height.
Algorithm :
	1. Create a cout statement to get the height of the father. For the height of the father break it into two parts to make life easier. 
	Store feet as an int variable and then store inches as an int variable. Then from there do a small calculation to get the height of the father. 
	2. Create another cout statement to get the height of the mother. For the height of the mother also break it into two parts. 
	Again store the feet as an int varibale and the inches as a variable. Finally, do the calcualtion to get the height of the mother.
	3. Create a cout statement to get the user to enter 1 or 2 to get the gender of the child. From there create a few variables to store if 
	the number given is a 1 or 2, feet, inches, and then finally a string to identify the gender.
	4. Using if statements do the necessary calulations from the formula provided to calulate the height if the child was either male or female
	as well as converting back to feet. If the user enters 1, it is a boy. If the user enters 2, it is a girl. If it anything else its an error.
	5. Finally with a cout statement show which gender the child is as well as showing the height of the mother and the father to show what
	potentially the height of their child could be.
*/
#include <iostream>
#include <cmath>
using namespace std ;

int main()
 {
 	// Height of father
 	cout << "What is the height of your father? Enter the amount of feet first and press enter." << endl ;
 	int feet_of_father ;
 	cin >> feet_of_father ;
 	cout << "Now enter the amount of inches and press enter." << endl ;
 	int inches_of_father ;
 	cin >> inches_of_father ;
 	double fathers_height = feet_of_father * 12 + inches_of_father ;
 	
 	// Height of mother
 	cout << "What is the height of your mother? Enter the amount of feet first and press enter." << endl ;
 	int feet_of_mother ;
 	cin >> feet_of_mother ;
 	cout << "Now enter the amount of inches and press enter." << endl ;
 	int inches_of_mother ;
 	cin >> inches_of_mother ;
 	double mothers_height = feet_of_mother * 12 + inches_of_mother ;
 	
 	// cout statement if the child is male or female and the variables used
 	cout << "Is the child male or female? If male, press 1. If female, press 2." << endl ;
 	int gender_of_child ;
 	cin >> gender_of_child ;
 	int feet_of_child ;
 	int inches_of_child ;
 	string childs_gender;
 	
 	// if statements for male or female
 	if (gender_of_child == 1)      
	{          
	// calculations for male
	  double childs_height = round(((mothers_height * 13.0 / 12.0 ) + fathers_height) / 2);
	  feet_of_child = childs_height / 12 ;
	  inches_of_child = (int) childs_height % 12 ;
	  childs_gender = "Male" ;
	}      
	else if (gender_of_child == 2)     
	 {
	// calculations for female
	double childs_height = round(((fathers_height * 12.0 / 13.0 ) + mothers_height) / 2);
	  feet_of_child = childs_height / 12 ;
	  inches_of_child = (int) childs_height % 12 ;
	  childs_gender = "Female" ;
	 }     
	else 
	{          
	 cout << "Error in amount entered, please try again." << endl ;            
	 return 1 ;
	}
	
	cout << "A " << childs_gender << " whose father is " << feet_of_father << "'" << inches_of_father ;
	cout << " and whose mother is " << feet_of_mother << "'" << inches_of_mother << " will be " << feet_of_child ;
	cout << "'" << inches_of_child << "." << endl ;
	
 	
	return 0;
}
