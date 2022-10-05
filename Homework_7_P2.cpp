/* TakeTheTrain.cpp - A program that show the most efficient way to purchase tickets to save money
Author : Hunter Madsen
Module : 7
Project : Homework 7 part 2
Problem Statement : Using the given values create a program which determines the best option to save money when taking a certain amount of trips
Algorithm : 
	1. Create the constant values
	2. Create a few cout statements to be the header
	3. Create a loop for values between 1-20
	4. Create an if statement to break up when to buy single tickets vs more than single tickets
	5. Using else if for more than single ticket purchses break it up yet again
		- Create an if statement for ten ticket bundle
		- Create an else if statement for ten ticket bundle + single at a discount
		- Create an else for monthly bundle since at this point you should only be buying the monthly bundle
*/
#include <iostream>
#include <iomanip>
using namespace std ;

int main() 
{
	// constant values
	const double single_ticket_price = 5.40 ;
	const double bundle_of_ten_ticket_price = 36.50 ;
	const double thirty_days_single_ticket_price = 4.25 ;
	const double monthly_pass_price = 61.85 ;
	
	// cout statement to show the header 
	cout << setw(10) << " # of " << setw(10) << "Single" << setw(10) << " Ten" << setw(10) << "Monthly" << setw(10) << "Total" << endl ;
	cout << setw(10) << "Trips"<< setw(10) << "Tickets" << setw(10) << "Pack?" << setw(10) << "Pass?" << setw(10) << "Price" << endl ;
	cout << setw(10) << "-----"<< setw(10) << "-------" << setw(10) << "-----" << setw(10) << "-------" << setw(10) << "-----" << endl ;
	
	// loop for values between 1-20
	for (int i = 1 ; i<21; i++) 
	{
		// if statements to break up when to buy certain tickets
		
		// if statement for buying single tickets
		if (i * single_ticket_price < bundle_of_ten_ticket_price)
		{
			// cout statement showing the number of trips, number of single tickets, whether or not they want a ten pack,
			// whether they want a monthly pass, and finally the total price
			cout << fixed << setprecision(2) ;
			cout << setw(10) << i << setw(10) << i << setw(10) << "No" << setw(10) << "No" << setw(10) << i * single_ticket_price << endl ;
 		}
 		// if statements for more than single ticket purchases
 		else if (i * single_ticket_price > bundle_of_ten_ticket_price)
 		{
 			// if statement to see when the user should buy a ten pack
 			if (i < 11) 
 			{
 				// cout statement showing the number of trips, number of single tickets, whether or not they want a ten pack,
				// whether they want a monthly pass, and finally the total price
 				cout << fixed << setprecision(2) ;
 				cout << setw(10) << i << setw(10) << "0" << setw(10) << "Yes" << setw(10) << "No" << setw(10) << bundle_of_ten_ticket_price << endl ;
			 }
			// if statement to see when the user should buy a ten pack with the single tickets included
			else if (bundle_of_ten_ticket_price + thirty_days_single_ticket_price * (i-10) < monthly_pass_price)
			 {
			 	// cout statement showing the number of trips, number of single tickets, whether or not they want a ten pack,
				// whether they want a monthly pass, and finally the total price
			 	cout << fixed << setprecision(2) ;
			 	cout << setw(10) << i << setw(10) << i - 10 << setw(10) << "Yes" << setw(10) << "No" << setw(10) ;
				cout << bundle_of_ten_ticket_price + thirty_days_single_ticket_price * (i-10) << setw(5) << endl ;
			 }
			 // else statement since at this point you would only be buying month passes
			else 
			{
				// cout statement showing the number of trips, number of single tickets, whether or not they want a ten pack,
				// whether they want a monthly pass, and finally the total price
				cout << fixed << setprecision(2) ;
				cout << setw(10) << i << setw(10) << "0" << setw(10) << "No" << setw(10) << "Yes" << setw(10) << monthly_pass_price << endl ;
			}
		 }
	}

	return 0;
}
