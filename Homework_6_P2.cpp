/* CaloriesCalulatorTwoPointZero.cpp -  A program that can caculate the amount of calories produced by a weight 
entered by the user as well as the factoring in the life style they live to give a total amount of calories burned
Author : Hunter Madsen
Module : 6
Problem Statement : Figure out how to calculate the calories using a weight and lifestyle input by the user
 using set values and then display the amount all the information that was calculated.
Algorithm : 
	1. Create a variable for weight in pounds, then make another variable to convert pounds to kilograms.
	2. Use given MET values and create a variable.
	3. Using if statements incorperate the percent difference depending on the lifestyle the user chooses
	4. Perform the calculations 
	5. Display message of weight, calories burned while running, sleeping, and playing basketball. Then finally the total calories burned. 
*/
#include <iostream>
#include <iomanip>
using namespace std ;

int main() 
{
	cout << "How much do you weigh in pounds?" << endl ;
	int weight_in_LB ;
	cin >> weight_in_LB ;
	
	// Input weight here
	double weight_in_KG = weight_in_LB / 2.2 ;
	
	// Values given to me by Professor
	int const running_six_MPH_MET = 10 ;
	int const playing_basketball_MET = 8 ;
	int const sleeping_MET = 1 ;
	
	// Calculations done using the formula CaloriesPerMinute = 0.0175 * MET * weight in kilograms
	double calories_per_minute_for_basketball = 0.0175 * playing_basketball_MET * weight_in_KG ;
	double calories_per_minute_for_running_at_six_MPH = 0.0175 * running_six_MPH_MET * weight_in_KG ;
	double calories_per_minute_for_sleeping = 0.0175 * sleeping_MET * weight_in_KG ;
	
	// cout statement for chosing a life style
	cout << "What kind of life style do you have? Chose a number between 1-4." << endl ;
	cout << "1 - Sedetary" << endl ;
	cout << "2 - Somewhat Active" << endl ;
	cout << "3 - Active" << endl ;
	cout << "4 - Highly Active" << endl ;
	
	// variable and cin information used for if statements
	int life_style ;
	cin >> life_style ;
	string life_style_outcome ;
	
	// if statements
	if (life_style == 1) 
    {
		calories_per_minute_for_running_at_six_MPH *= .8 ;
		calories_per_minute_for_basketball *= .8 ;
		calories_per_minute_for_sleeping *= .8 ;
		life_style_outcome = "Sedetary" ;
		
    }
    else if (life_style == 2)
     {
		life_style_outcome = "Somewhat Active" ;
     }
    else if (life_style == 3)
    {
    	calories_per_minute_for_running_at_six_MPH *= 1.2 ;
    	calories_per_minute_for_basketball *= 1.2 ;
    	calories_per_minute_for_sleeping *= 1.2 ;
    	life_style_outcome = "Active" ;
	}
	
	else if (life_style == 4)
	{
		calories_per_minute_for_running_at_six_MPH *= 1.5 ;
		calories_per_minute_for_basketball *= 1.5 ;
		calories_per_minute_for_sleeping *= 1.5 ;
		life_style_outcome = "Highly Active" ;
	}
    else
    {
     cout << "Error in amount entered, please try again." << endl ;
     return 1 ;
    }
    
    	// Calculations the amount of calories
	double calories_for_30_minutes_of_basketball = calories_per_minute_for_basketball * 30 ;
	double calories_for_30_minutes_of_running = calories_per_minute_for_running_at_six_MPH * 30 ; 
	double calories_for_6_hours_of_sleeping = calories_per_minute_for_sleeping * 360 ;
	double total_calories_burned = calories_for_6_hours_of_sleeping + calories_for_30_minutes_of_running + calories_for_30_minutes_of_basketball ;
	
	// Display message of calculations
	cout << "If you weighed " << weight_in_LB << " pounds and have a " << life_style_outcome <<  " life style you could: " << endl ;
	cout << "Run for 30 minutes at 6 MPH and burn " << calories_for_30_minutes_of_running << " calories. " << endl ; 
	cout << "Play basketball for 30 minutes and burn " << calories_for_30_minutes_of_basketball << " calories. " << endl ;
	cout << "Sleep for 6 hours and burn " << calories_for_6_hours_of_sleeping << " calories. "<< endl ;
	cout << "This burns a total of " << total_calories_burned << " calories! " << endl ;
	
	return 0;
}
