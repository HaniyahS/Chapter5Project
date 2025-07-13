// Chapter5Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double start, days, increase, population = 0, result, num, pop;
	cout << "Enter the starting number of organisms: ";
	cin >> start;

	while (start < 2) {
		cout << "The starting number cannot be less than 2.\nTry again: ";
		cin >> start;
	}

	cout << "\nEnter the average daily increase as a percentage%: ";
	cin >> increase;

	while (increase < 0) {
		cout << "\nThe average cannot be below 0.\nTry again: ";
		cin >> increase;
	}

	cout << "\nEnter the number of days: ";
	cin >> days;

	while (days < 1) {
		cout << "\nThe number of days cannot be less than 1.\nTry again: ";
		cin >> days;
	}

	cout << "\nSize of population for each day: ";
	cout << "\nDay\t\tPopulation\n";

	for (int i = 0; i <= days; i++) {
		result = increase / 100;
		pop = start * (1 + result * i);
		cout << i << "\t\t" << pop << "\n";
	}
}
