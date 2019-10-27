// Pa2q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int gcd(int m, int n)
{
	if (m <= 0 || n <= 0)
	{
		return 0;
	}
	if (m % n == 0) //recursively mod m by n  until there is no remainder then return n
	{
		return n;
	}
	return gcd(n, m%n); //adds the recursion by calling the function with a new mod each time
}

int main()
{
	int m; //initalize m
	int n; //initalize n
	cout << "Enter m and n where m is larger than n to find GCD" << endl;
	cin >> m >> n; //user input for n and m
	int GCD = gcd(m, n); //call function
	cout << GCD << endl; //print output
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
