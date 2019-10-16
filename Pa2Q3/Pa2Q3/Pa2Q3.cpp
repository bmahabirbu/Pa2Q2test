// Pa2Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int * ReverseMultiply(int *list, int size)
{
	int mult = 1;
	int *newarray;
	newarray = new int[2 * size+1];
	for (int i = 0; i < size; i++)
	{
		newarray[i] = list[i];
		mult *= newarray[i];
	}
	for (int j = size; j < 2 * size; j++)
	{
		newarray[j] = list[(2*size-1)-j];
		mult *= newarray[j];
	}
	newarray[2 * size] = mult;
	return newarray;
}


int main()
{
	cout << "Enter the number of entries: " << endl;
	int size;
	cin >> size;
	int *ogarray;
	ogarray = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Entry " << i << " is" << endl;
		int entry;
		cin >> entry;
		ogarray[i] = entry;
	}
	int *newarray = ReverseMultiply(ogarray, size);
	for (int i = 0; i < 2 * size + 1; i++)
	{
		cout << newarray[i] << endl;
	}
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
