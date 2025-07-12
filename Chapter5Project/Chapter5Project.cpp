// Chapter5Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{

    cout << "Pattern A:" << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int p = 0; p <= i; p++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPattern B:" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int p = 10; p > i; p--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

}
