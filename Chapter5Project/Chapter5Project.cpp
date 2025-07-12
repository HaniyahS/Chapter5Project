// Chapter5Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{

	int year, pop, stars;
	string word;
	ifstream file("People.txt");

	if (!file) {
		cout << "Error: File could not be opened!" << std::endl;
		return 1;
	}

	while (file >> pop) {
		int stars = pop / 1000;
		int p = 0;
		p++;

		

		for(int i = 0; i < 6; i++) {
			year = 1900 + (20 * i);
			cout << year;
			
			
			
			continue;
			

		}

		for (int s = 0; s < stars; s++) {
			cout << "*";
			

			
			}

			cout << endl;
		

	}


}
