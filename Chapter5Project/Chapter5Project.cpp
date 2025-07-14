// Chapter5Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	string student, first, last, word;
	int i = 0;

    vector<std::string> words;
    ifstream file("LineUp.txt");
    if (!file) {
        cout << "Error: File could not be opened!" << std::endl;
        return 1;
    }

    

    string line;
    cout << "Names from file:\n";
    first = last = line;
    i = 0;
    while (getline(file,line)) {
        
        cout  << line << "\n";
        
       
        if (line < last) {
            last = line;
        }
        if (line > first) {
            first = line;
        }
        i++;
    }
    cout << "\nNumber of students: " << i;

  
    cout << "\nfirst student: " << first << "\nlast student: " << last;
    file.close();
    return 0;
}
