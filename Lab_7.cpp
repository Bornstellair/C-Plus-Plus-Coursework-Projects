/* CarRental.cpp -  A program that can provide a quote depending on the type of car, color of car, and length of the rental
Author : Hunter Madsen
Module : 7
Problem Statement : Using the given values for the economy and full daily/ weekly rates create a program which does the following. 
1: Prompt the user to pick a car. 2: Prompt the user to pick a color of that car. 3: Prompt the user to enter the length they plan to 
rent the car. 4: In a display statement show the car, car color, length of rental, and the total price.
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

int main()
 {
 	// Constants 
 	const double economy_daily = 25.50 ;
 	const double economy_weekly = 120.50 ;
 	const double full_daily = 39.40 ;
 	const double full_weekly = 216.25 ;
 	
 	// cout statement for the type of car the user wants 
 	cout << "What type of car would you like? Enter 1 for Economy or enter 2 for Full." << endl ;
 	string car_type ;
 	double daily_rate ;
 	double weekly_rate ;
 	int car_type_user_input ;
 	cin >> car_type_user_input ;
 	
 	// if statement to determine which type of car was chose
 	if (car_type_user_input == 1) 
 	{ 
 		car_type = "Economy" ;
 		daily_rate = economy_daily ;
 		weekly_rate = economy_weekly ;
	 }
	else if (car_type_user_input == 2)
	{
		car_type = "Full" ;
		daily_rate = full_daily ;
		weekly_rate = full_weekly ;
	}
 	else 
 	{
 		cout << "Error, please try again." << endl ;
	 }
	
	// cout statement to decide which color the user wants their car in
	cout << "What color would you like your car in? Enter 1 for black, 2 for white, or 3 for red." << endl ;
	string car_color ;
	int car_color_user_input ;
	cin >> car_color_user_input ;
	
	// switch case
	switch(car_color_user_input)
	{
		case 1: car_color = "Black" ;
			break ;
		case 2: car_color = "White" ;
			break ;
		case 3: car_color = "Red" ;
			break ;
		default: cout << "Error, please try again." ;
	}
	
	// if statement if the car is "Red"
	if (car_color == "Red")
	{
		daily_rate *= 1.15 ;
		weekly_rate *= 1.15 ;
		cout << "This color option has a special surcharge of 15%, if you want another color option please redo the ticket. \n" << endl ;
	}
	
	// cout statement for the amount of days the user wants this car for
	cout << "How many days would you be renting this vehicle?" << endl ;
	int days_user_input ;
	cin >> days_user_input ;
	int weeks = days_user_input / 7 ;
	int days = days_user_input % 7 ;
	
	// calculations for the price
	double week_price = weeks * weekly_rate ;
	double daily_price = days * daily_rate ;
	double week_plus_extra = week_price + weekly_rate ;
	double total_price = week_price + daily_price ;
	
	if (week_plus_extra < total_price)
	{
		total_price = week_plus_extra ;
	}
	
	// cout statement to display the car type, color, and the amount of days
	cout << "The quote for your " << car_type << " in the color of " << car_color << " for " << days_user_input << " days:" << endl ;
	
	// if statement to display which information depending on the color
	if (car_color == "Red") 
	{
		cout << fixed << setprecision(2) ;
		cout << "For " << ((week_plus_extra == total_price) ? weeks + 1 : weeks) << " week/weeks at " << weekly_rate << "/week and " ;
		cout << ((week_plus_extra == total_price) ? 0 : days) << " days at " << daily_rate << "/day" << " the total will come out to: $" << total_price ;
	} 
	else 
	{
		cout << fixed << setprecision(2) ;
		cout << "For " << ((week_plus_extra == total_price) ? weeks + 1 : weeks) << " week/weeks at " << weekly_rate << "/week and " ;
		cout << ((week_plus_extra == total_price) ? 0 : days) << " days at " << daily_rate << "/day" << " the total will come out to: $" << total_price ;
	}
	
	return 0;
}
