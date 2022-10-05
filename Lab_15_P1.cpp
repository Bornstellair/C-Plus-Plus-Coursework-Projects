/* studentVector.cpp - A program that can print the name, major, gpa, and year of students at MiraCosta College
Author : Hunter Madsen
Module : 15
Problem Statement : Using a vector go through and create 5 students which contains a name, major, gpa, and year. Then update and insert into the 
vector. Finally, display all the information
*/
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std; 

// Student struct  
struct Student
{
    string name; 
    string major; 
    double gpa; 
    int years; 
}; 

// vector
vector<Student> students(5); 

int main() 
{     
    // storing the data(name, major, gpa, and year) in the vector
    students [0] = {"Isaac Newton", "Physics", 4.0, 1};
    students [1] = {"Jane Goodall", "Anthropology", 3.9, 2};
    students [2] = {"Fluffy", "Comedy / Drama", 3.5, 2};
    students [3] = {"Monty Python", "French", 0.5, 1};
    students [4] = {"Jim Thorpe", "Athletics / Acting", 3.7, 2};

    // pop_back which deletes Jim Thorpe in the vector
    students.pop_back(); 

    // add a new student to the last position
    students.push_back({"Grace Hopper", "Mathematics", 3.8, 1}); 

    // insert function to add a student between Fluffy and Monty Python
    students.insert(students.begin() + 3, {"Katherine Johnson", "Mathematics", 4.0, 3}); 

    // displaying the heading 
    cout << setw(8) << "Name" << setw(20) << "Major" << setw(13) << "GPA" << setw(9) << "Year" << endl; 
	string dashes = "-";
	dashes.assign(50, '-');
    cout << dashes << endl; 

    // for loop which goes through and prints all the information for each student
    for(int i = 0; i < students.size(); i++)
    {
        cout << fixed << left << setw(20) << students[i].name << setw(18) << students[i].major << setw(9) << setprecision(1) << students[i].gpa << setw(5) << students[i].years << endl; 
    }
	
    cout << dashes << endl; 
}
