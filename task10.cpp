// task10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	int counter = 0;
	double sum = 0;
	double avg = 0;

	do
	{
		cin >> number;

		if (number >= 1 && number <= 200)
		{
			sum = sum + number;
			counter++;
			avg = sum / counter;
		}
		
	} 
	while (number >= 1);

	cout << counter << endl;
	cout << sum << endl;
	cout << avg << endl;



	return 0;
}


