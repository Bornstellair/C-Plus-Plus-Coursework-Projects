/* WeatherPatterns - A program that can display 4 cities temperatures for 12 months and calculate the average temperature for each month and then
the entire year
Author : Hunter Madsen
Module : 15
Project : Homework 15 part 1
Problem Statement : Create a 4 x 12 array of ints that represents the average temperature for 4 seperate cities over the course of a year. Next,
create a functon which shows the temperature for each month as well as the average for each month between all 4 cities and then the average 
temperature for the year in the specified city.
Algorithm :
	1. Prototype function
	2. Create the array which is hard coded to 12 for the 4 different cities that holds the 12 monthly temperatures
	3. Call the prototype function
		- In the prototype function below main it should have the following:
		- A header display statement which displays the city, each month, and then the average
		- A for loop which will print each city and then the temperatures (as well as the average) that were stored in the array created in main
		- A for loop which will display the monthly average between each city 
*/

#include <iostream>
#include <iomanip>
using namespace std; 

// prototype function
void showWeather(int temperature[][12], int row); 

int main() 
{
    // initialize the temperature for each of the cities
    int temperature[4][12] ={ {68,69,70,73,75,79,83,84,83,79,73,68}, {39,42,50,62,72,80,85,84,76,65,54,44}, {73,74,75,78,81,84,85,86,85,82,78,76}, {47,51,55,59,65,70,75,75,69,60,51,46} };
    
    // weatherReport
    showWeather(temperature, 12); 
}

// weatherReport function
void showWeather(int temperature[][12], int row)
{

    // display statement for each city, month, and the yearly average
    cout << fixed << left << setw(15) << "City" << setw(5) << "Jan" << setw(5) << "Feb" << setw (5) << "Mar" << setw(5) << "Apr";
	cout << setw(5) << "May" <<setw(5) << "Jun" << setw(5) << "Jul" << setw(5) << "Aug" << setw(5) << "Sep" << setw(5) << "Oct";
	cout << setw(5) << "Nov" << setw(5) << "Dec" << setw(5) << "Average" << endl; 
	string dashes = "-";
	dashes.assign(82, '-');
    cout << dashes << endl; 


	// declaring a variable
    int columns = sizeof temperature[0] / row;

    // initializing the 4 cities
    string city[4] = {"Las Angeles", "New York", "Miami", "Seattle"}; 
	
	// initializing the temperatures
    int cityTemperature = 0; 
    int monthlyTemperature = 0; 

    // for loop which prints the city
    for(int i = 0; i < columns; i++)
    {
    	// displaying the city
        cout << setw(15) << city[i]; 

        cityTemperature = 0;
        
        // nested for loop which displays the temperature
        for(int j = 0; j < row; j++)
        { 
        	// displaying the temperature
            cityTemperature += temperature[i][j];
            cout << setw(4) << temperature[i][j] << " " ;

        }
        
        // finally displaying the cities temperature average
        cout << cityTemperature/12 << endl; 
    }

    // display statement for the average
	cout << dashes << endl;
	cout << setw(10) << "The monthly" << endl; 
    cout << setw(10) << "Average:       "; 

    // for loop which prints the average monthly temperature
    for (int k = 0; k < row; k++)
    {
        monthlyTemperature = 0; 
		
		// calculating the temperature
        for (int l = 0; l < columns; l++)
        {
            monthlyTemperature += temperature[l][k]; 
        }

		// cout statement which displays the monthly temperature between the cities
        cout << setw(4) << monthlyTemperature/4 << " "; 
    }
}
