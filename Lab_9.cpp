/* InputGroceries.cpp - A program that can read and interpret the information from a grocery list
Author : Hunter Madsen
Module : 9
Problem Statement : Declare the const for the text file at the top. Next, input your file and include an error in case it doesn't work.
Declare a few variables to be used. Next, create a loop to go through to read each line and store into respective variables. Finally,
display all the information.
*/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std ;

 

int main()
 {
 	// file information
 	const string input_file_name = "grocery.txt";
 	const string output_file_name = "grocery.rpt";
 	ifstream input_file;
 	ofstream output_file;
 	
 	input_file.open(input_file_name);
 	output_file.open(output_file_name);

	// If statement to determine if there is anything in the file or not
 	if(!input_file)
 	{
		cout << "There was an error opening " << input_file_name << ". Please try again.";
		return 0;
	}
	if(!output_file)
	{
		cout << "There was an error opening " << output_file_name << ". Please try again.";
	}
 	
 	// variables to be used
 	string dummy_string;
 	string grocery_name;
 	int item_quantity;
 	double grocery_prices;
 	string unit_measurement;
 	
 	// while there is text in the file
 	while(getline(input_file, grocery_name)) 
 	{
 		input_file >> item_quantity >> grocery_prices;
 		
 		// Dummy getline function followed by the actual getline function
 		getline(input_file, dummy_string);
 		getline(input_file, unit_measurement);
 		
		// Name of item, quantity, price, and the unit measurement
		cout << fixed << setprecision(2) << endl;
		cout << grocery_name << endl;
		cout << item_quantity << endl;
		cout << grocery_prices << endl;
		cout << unit_measurement << endl;
		 
	 }
	 
	// closing the file
 	input_file.close();
 	input_file.clear();
 	
	return 0;
}
