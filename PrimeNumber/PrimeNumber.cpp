/*
This code shows prime number from 1 to enter number by user

Developer = Barış Someroğlu
Date = 28.04.2024 - 06:10 pm
*/


#include <iostream>

using namespace std;

// Function prototype
void PrimeNumberList(int*);
bool IsItPrimeNumber(int);

int main()
{
	int Number;

	cout << "Please enter a number = ";
	cin >> Number;

	cout << endl;

	int* ptrNumber = &Number;

	// Call function
	PrimeNumberList(&Number);

	return 0;
}

// Function definition
void PrimeNumberList(int* ptrNumber)
{
	for (int i = 1; i <= *ptrNumber; i++)
	{
		if (IsItPrimeNumber(i) == true) // Call function in a function
			cout << i << endl;
	}
}

// Function definition
bool IsItPrimeNumber(int Control)
{
	for (int j = 2; j < Control; j++)
	{
		if (Control % j == 0)
			return false;
	}

	return true;
}
