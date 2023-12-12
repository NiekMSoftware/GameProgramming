// 3 Exercises
// Chapter 1's Exercises

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void Exercise1()
{
	// Create a list of six legal variable names--three good choices
		// and three bad choices. Explain why each name falls
		// into the good or bad category

	// all 3 of these names are full proper names within a singular string
	string gName1 = "Bob the Great";
	string gName2 = "Gerald of Odinson";
	string gName3 = "Joseph Haroldson";

	// This way of making full names is inefficient
	string bFirstName1 = "Jeff";
	string bSecondName1 = "McDonaldson";
}

void Exercise2()
{
	// What's displayed by each line if the following code snippet? Explain each result
	cout << "Seven divided by three is " << 7 / 3 << endl; // Results in 2, as integer values divided by one another becomes an integer again
	cout << "Seven divided by three is " << 7.0 / 3 << endl; // Results in a double value, the number 7 exists out of a double
	cout << "Seven divided by three is " << 7.0 / 3.0 << endl; // Results in a double, both values are doubles
}

void Exercise3()
{
	// Write a program that gets three game scores from the user and displays the average
	double score1, score2, score3, average;

	cout << "Please enter a value from 1.0 - 10.0: ";
	cin >> score1;

	cout << "Please enter another value from 1.0 - 10.0: ";
	cin >> score2;

	cout << "Please enter another value from 1.0 - 10.0: ";
	cin >> score3;

	average = (score1 + score2 + score3) / 3;
	cout << "The average score value is: " << average;
}

int main()
{
	Exercise3();
}