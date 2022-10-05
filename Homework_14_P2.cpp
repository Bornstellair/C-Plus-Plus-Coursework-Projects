/* GirlsSoccerTeam.cpp - A program that can display a list of soccer team stats throughout practice
Author : Hunter Madsen
Module : 14
Project : Homework 14 part 2
Problem statement : Create a program that can take the input file and using parallel arrays find the names of the players, the goals that they 
scored, the number of asssists, and then the performance
Algorithm: 
	1. Using the max, intialize the arrays
	2. Open the Players.txt file and check for any errors opening the file
	3. Create a while loop that will go through and set the value for the first name, last name, the number of goals, and the number of assists 
		-Close the file when this is complete.
	4. Using a for loop go through and find each of the largest values stored
	5. Display all the information
*/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std; 
 
int main() 
{
	// constant for the max
	const int MAXPEOPLE = 20;
	
	// initializing
    string names[MAXPEOPLE]; 
    int goals[MAXPEOPLE] = {0}; 
    int assists[MAXPEOPLE] = {0}; 
   
	// declaring the players to be 0
    int numberOfPlayers = 0; 

    // opening the  file
    ifstream players; 
    players.open("Players.txt"); 

	// if statement to check if there was an error opening the file
    if(!players) 
    {
        cout << "Error, file did not open correctly."; 
        return 0; 
    }

    // declaring and initializing the variables
    string firstName;
	string lastName; 
    int numberOfGoals = 0;
	int numberOfAssists = 0; 

    // while loop that will set the value for the variables
    while(players >> firstName)
    {
        players >> lastName >> numberOfGoals >> numberOfAssists; 
        names[numberOfPlayers] = firstName + " " + lastName; 
        goals[numberOfPlayers] = numberOfGoals; 
        assists[numberOfPlayers] = numberOfAssists; 
        numberOfPlayers++; 
    }

	// closing the file
    players.close();

    // initializing variables to 0
    int totalGoals = 0;
	int totalAssists = 0;
	int totalPerformance = 0;
	int largestGoal = 0;
	int largestAssist = 0;
	int largestPerformance = 0;

    // for loop which goes through and finds the largest value in the array
    for (int i = 0; i < numberOfPlayers; i++)
    {
        totalGoals += goals[i]; 
        totalAssists += assists[i];
        totalPerformance += (goals[i] * 3 + assists[i]);

		// if statement for the largest goal
        if(largestGoal < goals[i])
        {
            largestGoal = goals[i]; 
        }

		// if statement for the largest assist
        if(largestAssist < assists[i])
        {
            largestAssist = assists[i]; 
        }
        
        // if statement for the largest performance 
        if(largestPerformance < (goals[i] * 3 + assists[i]))
        {
        	largestPerformance = (goals[i] * 3 + assists[i]);
		}
    }

    // displaying the heading
    cout << right << fixed << setw(15) << "Player Name" << setw(13) << "Goals" << setw(12) << "Assists" << setw(15) << "Performance" << endl; 
    string dashes = "-";
	dashes.assign(60, '-');
    cout << dashes << endl; 

    // displaying the name, goals, assists, and peformance for each player
    for (int i = 0; i < numberOfPlayers; i++)
    {
        cout << left << fixed << setw(25) << names[i] << right << setw(3) << goals[i] << setw(8) << assists[i] << setw(15) << (goals[i] * 3 + assists[i]) << endl; 
    }

    // displaying the total for the goals, assists, and the performance
    cout << dashes << endl;
    cout << "Total:" << right << fixed << setw(22) << totalGoals << " " << setw(7) << totalAssists << " " << setw(14) << totalPerformance;

    // final cout statement that displays the largest goal, assist, and performance
    cout << endl << endl;
    cout << "The largest goal was: " << largestGoal << endl; 
    cout << "The largest assist was: " << largestAssist << endl; 
    cout << "The largest performance was: " << largestPerformance << endl;
}
