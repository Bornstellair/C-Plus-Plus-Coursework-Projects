/* MultiplesOfNine.cpp - A program that loops to multiply numbers by 9 that the user inputs
Author : Hunter Madsen
Module : 8
Problem Statement : Using logic create a program that can calculate the first 9 multiple of 9
*/
#include <iostream>
#include <iomanip>
using namespace std ;

int main() 
{
    while (true)
    {
        int number_user_input;
        while (true)
        {
            // cout statement to get the user to enter a whole number
            cout << "9 *" << endl ;
            cout << "Please enter a whole number between you want to multiply by (up to 9) and press enter when you are done." << endl ;
            cin >> number_user_input ;

               // if statement when the number the user input is less than -1
            if (number_user_input < -1)
            {
                cout << "Error, number entered is too small." << endl ;
            }
            // if statement when the number the user input is greater than 9
            else if (number_user_input > 9)
            {
                cout << "Error, number entered is too big." << endl ;
            }
            // if statement when the number is in the parameter 
            else if (number_user_input > -2 && number_user_input < 10)
            {
                break ;
            }
        }

           // if statement when the number the user input is the sentinel 
           if (number_user_input == -1)
           {
               cout << "Error, please try again." << endl ;
               return 0;
           }
           // if statement when the number the user input is 0 since anything multiplied by 0 is 0. That is why it is hard coded in
           else if (number_user_input == 0)
           {
               cout  << "9 * 0 = 0" << endl ;
           }
           else 
           {
               // calculations
               int first_digit = number_user_input - 1 ;
               int second_digit = 9 - first_digit ;
            int product = (first_digit * 10) + second_digit ;

             // cout statement showing all the answer
                 cout << "9 * " << number_user_input << " = " << product << endl ;
           }
       }
}
