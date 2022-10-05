/*	TrainTripCalculations.cpp - A program that can calculate the price of tickets to 3 different cities for 3 different types of people
Author : Hunter Madsen, and Daniel J
Module : 6
Problem Statement : Ask the user where they want to go to from San Diego via train tickets. From here the user will be presented with the option
	to pick what kind of ticket they want to buy, and then finally the user is asked how many tickets they would like to buy of that type. Display 
	the final price. 
*/
#include <iostream>
using namespace std ;

int main()
 {
 	// Constant strings for locations
 	const string los_angeles = "Los Angeles" ;
 	const string santa_maria = "Santa Maria" ;
 	const string san_francisco = "San Francisco" ;
 	
 	// Constant strings for fairs
 	const string child_fair = "Child" ;
 	const string adult_fair = "Adult" ;
 	const string senior_fair = "Senior" ;
 	
 	// Double for each fair value place holder
 	double child_fair_price = 0.0 ;
 	double adult_fair_price = 0.0 ;
 	double senior_fair_price = 0.0 ;
 	
 	// Cout statement for where the user wants to go
 	cout << "Chose a destination" << endl ;
 	cout << "-------------------" << endl ;
 	cout << "1 - " << los_angeles << endl ;
 	cout << "2 - " << santa_maria << endl ;
 	cout << "3 - " << san_francisco << endl ;
 	cout << "Enter a value between 1-3 and press enter." << endl ;
 	
 	// Location where user is going
 	string destination ;
 	int city_number_user_input ;
 	cin >> city_number_user_input ;
 	
 	// if statements
 	if (city_number_user_input == 1) 
 	{ 
 		destination = los_angeles ;
 		child_fair_price = 25.00 ;
 		adult_fair_price = 41.00 ;
 		senior_fair_price = 28.00 ;
	 }
	 
 	else if (city_number_user_input == 2) 
 	{
 		destination = santa_maria ;
 		child_fair_price = 36.00 ;
 		adult_fair_price = 58.00 ;
 		senior_fair_price = 42.00 ;
	 }
 	else if (city_number_user_input == 3)
 	{
 		destination  = san_francisco ;
 		child_fair_price = 45.00 ;
 		adult_fair_price = 73.00 ;
 		senior_fair_price = 51.00 ;
	 }
	 else 
	 {
	 	cout << "No valid destination was entered, please try again." << endl ;
	 	return 1 ;
	 }
	 
	 // cout for what type of ticket the user wants to buy
	 cout << "\n" << endl ;
	 cout << "Fares to " << destination << " are: " << endl ;
	 cout << "------------------------- " << endl ;
	 cout << "1 - Child  ($" << child_fair_price << ")" << endl ;
	 cout << "2 - Adult  ($" << adult_fair_price << ")" << endl ;
	 cout << "3 - Senior ($" << senior_fair_price << ")" << endl ;
	 cout << "Enter a value between 1-3 and press enter." << endl ;
	 int ticket_user_input ;
	 cin >> ticket_user_input ;
	 string ticket_type ;
	 double fair_price ;
	 
	 // if statements for the amount of tickets user wants to buy
	 if (ticket_user_input == 1) 
 	{ 
 		ticket_type = child_fair ;
 		fair_price = child_fair_price ;
	 }
	 
 	else if (ticket_user_input == 2) 
 	{
 		ticket_type = adult_fair ;
 		fair_price = adult_fair_price ;
	 }
 	else if (ticket_user_input == 3)
 	{
 		ticket_type = senior_fair ;
 		fair_price = senior_fair_price ;
	 }
	 else 
	 {
	 	cout << "No valid fare was entered, please try again." << endl ;
	 	return 2 ;
	 }
	 
	 // cout for the amount of tickets the user wants
	 cout << "\n" << endl ;
	 cout << "How many " << ticket_type << " tickets did you want to purchase?" << endl ;
	 cout << "Enter a value between 1-10 and press enter." << endl ;
	 int number_of_tickets_user_wants ;
	 cin >> number_of_tickets_user_wants ;
	 
	 
	 // if statements for the amount of the tickets the user wants
	 if (number_of_tickets_user_wants < 0 || number_of_tickets_user_wants > 10 ) 
 	{ 
 		cout << "Error in amount entered, please try again." << endl ;
 		return 3 ;
	 }
	 
 	else if (number_of_tickets_user_wants == 0) 
 	{
 		return 0 ;
	 }
	 // if statement that is the only outcome that should work 
 	else if (number_of_tickets_user_wants > 0 && number_of_tickets_user_wants < 10)
 	{
 	double total_price_for_tickets = number_of_tickets_user_wants * fair_price ;
	cout << " \n Thank you for your purchase, your total is: $" << total_price_for_tickets << endl ;
	 }
	 

	return 0;
}
