/* StringWords.cpp - A program that can lexicographically order 3 strings the user enters
Author : Hunter Madsen
Module : 10
Problem Statement : Write a program that can sort through the three strings the user enters and put the information in lexicographical order
*/
#include <iostream>
using namespace std;

// prototype function for getting the strings
void getStrings(string &, string &, string &);
// prototype functon for sorting the strings
void sortStrings(string &l, string &, string &);

int main()
{
	// while loop to run through the program multiple times
    while (true)
    {
    	// strings for first, second, and third word the user enters
        string first;
        string second;
        string third;

		// getting the strings 
        getStrings(first, second, third);

        if (first == "quit",  second == "quit",  third == "quit")
        {
            return 0;
        }
		// sorting the strings
        sortStrings(first, second, third);

		// cout statement to display the strings in lexicographical order
        cout << "Whatever you entered put into lexicographical order is: \n";
		cout << first << endl; 
		cout << second << endl;
		cout << third << endl << endl;
    }
    return 0;
}

// getting the first, second, and third word
void getStrings(string &first, string &second, string &third)
{
	// first word user enters
    cout << "The first word you want to use is: ";
    getline(cin, first);
	// if statement if the user had entered quit for the first word
    if (first == "quit")
    {
        return;
    }
	
	// second word user enters
    cout << "The second word you want to use is: ";
    getline(cin, second);
	// if statement if the user had entered quit for the second word
    if (second == "quit")
    {
        return;
    }
	
	// thrird word user enters
    cout << "The third word you want to use is: ";
    getline(cin, third);
	// if statement if the user had entered quit for the third word
    if (third == "quit")
    {
        return;
    }

    return;
}

// sorting the strings
void sortStrings(string &low, string &mid, string &high)
{
	// string used for balancing
    string temp;
    
    // if statement if the first sorting order
    if (low > mid)
    {
        temp = mid;
        mid = low;
        low = temp;
    }
    
    // if statement for the second sorting order
    if (mid > high)
    {
        temp = high;
        high = mid;
        mid = temp;
    }
    
    // if statement for the final sorting order after filtering through the first two
    if (low > mid)
    {
        temp = mid;
        mid = low;
        low = temp;
    }
}
