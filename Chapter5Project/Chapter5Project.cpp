// Chapter5Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	string filename, town;
	

	cout << "File name: ";
	cin >> filename;
	cin.ignore();
	cout << "\nName of town: ";
	getline(cin, town);

	fstream Inputfile;

	Inputfile.open("People.txt");

	if (!Inputfile) 

	{

		cout << "Error opening file.";

			return 0;

	}

	int pop;
	int startYear = 1900;
	int yearInterval = 20;
	cout << "\n" << town << " population data\n";
		for (int Year = 1; Year <= 6; Year++)

		{ 
			cout << "Year " << startYear + (yearInterval * (Year - 1)) << ": ";
			Inputfile >> pop;
			while (pop > 0)

			{ 

				cout << "*";

				pop -= 1000;

			}

			cout << endl;

		}

	Inputfile.close(); 

	return 0;




}
