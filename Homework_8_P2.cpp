/* InterestLoan.cpp - A program that can tell you the amount of months it takes to pay off a $1000 loan 
Author : Hunter Madsen
Module : 8
Project : Homework 8 part 2
Problem Statement : Write a program that determines how long it will take to pay off a $1000 loan with no downpayment for $50 a month with
an interest rate of 18% yearly. 
Algorithm :
	1. Declare the constants
	2. Create a few variables to be used in the while loop and to be manipulated
	3. Create a while loop 
	- in the loop allow for the months to grow as the loop cycles as well as evaluating the amount of money due for interest and total
	4. Display statement which displays how many months it will take and the information for the monthly payment, loan price, and the 
	interest that included.
*/
#include <iostream>
#include <iomanip>
using namespace std ;

int main() 
{
	// constant values
	const double STEREO_PRICE = 1000.00 ;
	const double INTEREST_RATE_YEARLY = 0.18 ;
	const double INTEREST_RATE_MONTHLY = INTEREST_RATE_YEARLY / 12.0 ;
	const double MONTHLY_PAYMENT = 50.00 ;
	
	// variables to be used in the while loop
	double loan = STEREO_PRICE ;
	int month;
	
	// while loop
	while (loan > 0)
		{
			// calculations 
			month++ ; 
			double interest_amount = loan * INTEREST_RATE_MONTHLY ;
			double amount_due = MONTHLY_PAYMENT - interest_amount ;
			loan -= amount_due ;
		}
	
	// cout statement displaying all the necessary information
	cout << "A $" << STEREO_PRICE << " loan that costs $" << MONTHLY_PAYMENT << " a month with a yearly interest rate of " << INTEREST_RATE_YEARLY ;
	cout << "%  will take " << month << " months to pay off it fully." << endl ;
	
	return 0;
}
