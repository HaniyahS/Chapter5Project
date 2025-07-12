// Chapter5Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <random>

using namespace std;
int main()
{
	//Constants
	const int min = 1, max = 500;
	int guess, number, i = 0;

	random_device engine;

	uniform_int_distribution<int> num(min, max);

	number = num(engine);
	cout << "Guess a number from 1 - 500: ";
	cin >> guess;
	
	while (guess != 0) {
		if (guess < number) {
			cout << "\nToo low. Press 0 to exit.\nGuess a number from 1 - 500: ";
			cin >> guess;
			i++;
		}

		else if (guess == number) {
		i++;
		cout << "\nCongrats!! You guessed the number " << number;
		cout << "\nAttempts: " << i;
		}

		else {
			cout << "\nToo high. Press 0 to exit.\nGuess a number from 1 - 500: ";
			cin >> guess;
			i++;
		}
		

	}
	if (guess == 0) {
		cout << "\nThe number was: " << number;
		exit;
	}
}
