// Ch 4 - Exer - 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using std::cout;
using std::cin;
using std::vector;
using std::string;

int main()
{
	// Read a sequence of double values into a vector

	vector <double> distance;					// declaring the vector named "distance"
	double sum = 0;
	double smallest;
	double greatest;

	for (double x; cin >> x;) {					// read into distance, to terminate putting values in vector use anything that is not of variable type of vector
		distance.push_back(x);					// put distance into vector
		cout << '\n';
		for (int i = 0; i < distance.size(); i = i + 1) {			// keeping track of elements in vector by displaying them
			cout << distance[i] << '\n';
		}
	}

	for (int i : distance) {					// adding up all values of vector by iterating through all elements
		sum = sum + distance[i];				
	}

	cout << "The total sum of all the elements in the vecotr is: " << sum << '\n';	

	 

	for (int i = 0; i < distance.size(); i = i + 1) {			// determining the smallest value in the vector
		if (smallest <= distance[i]) {
			smallest = distance[i];
		}

	}

	cout << "The smallest value in the vector is: " << smallest << '\n';

	for (int i : distance) {									// determining the greatest value in the vector
		if (greatest >= distance[i]) {
			greatest = distance[i];
		}
	}

	cout << "The smallest value in the vector is: " << smallest << '\n';

	cout << "The mean distance between two neigbouring cities is: " << sum / distance.size() << '\n'; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
