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
	newarray = new int[2 * size+1]; //make a new array with a size to hold all the values
	for (int i = 0; i < size; i++) //first step is to put all the old array into the new one while computing a multiply sum
	{
		newarray[i] = list[i];
		mult *= newarray[i];
	}
	for (int j = size; j < 2 * size; j++) // reverse the order of the old array to the second half of the new while continuing to multiply sum
	{
		newarray[j] = list[(2*size-1)-j];
		mult *= newarray[j];
	}
	newarray[2 * size] = mult; //add the multiply sum to the last index
	return newarray;
}

int * ReverseAdd(int *list, int size)
{

	int add = 0;
	int *newarray;
	int newsize = 2 * size - 1; //create a new array with the size needed
	newarray = new int[newsize];
	for (int i = 0; i < size; i++) //first get the values from the old array into the new one
	{
		newarray[i] = list[i];
	}
	for (int j = size; j < newsize; j++) //then reverse add the values and put that into the index of the new array
	{
		newarray[j] = list[newsize-1-j] + list[newsize-j];
	}
	return newarray;
}

int main()
{
	cout << "Enter the number of entries: " << endl;
	int size;
	cin >> size;
	int *ogarray;
	ogarray = new int[size];
	for (int i = 0; i < size; i++) //create user defined array
	{
		cout << "Entry " << i << " is" << endl;
		int entry;
		cin >> entry;
		ogarray[i] = entry;
	}
	cout << " " << endl; //space
	int *newarray = ReverseMultiply(ogarray, size); //call ReverseMultiply and print new array
	for (int i = 0; i < 2 * size + 1; i++)
	{
		cout << newarray[i] << endl;
	}
	cout << " " << endl; //space
	int *newarray2 = ReverseAdd(ogarray, size); //call ReverseAdd and print array
	for (int i = 0; i < 2 * size - 1; i++)
	{
		cout << newarray2[i] << endl;
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
