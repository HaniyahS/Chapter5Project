// Chapter5Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{

	fstream Inputfile;

	Inputfile.open("People.txt");

	if (!Inputfile) 

	{

		cout << "Error opening file.";

			return 0;

	}

	int pop;

	
		for (int Year = 1; Year <= 6; Year++)

		{ 

			switch (Year)

			{

			case 1: cout << "1900 ";

				break;

			case 2: cout << "1920 ";

				break;

			case 3: cout << "1940 ";

				break;

			case 4: cout << "1960 ";

				break;

			case 5: cout << "1980 ";

				break;

			case 6: cout << "2000 ";

				break;

			}

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
