// task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	int sum = 0;
	int counter = 0;

	do
	{
		cin >> number;

		if (number >= 10 && number <= 99)
		{
			counter++;
			sum = sum + number;
		
			if (counter == 5 || sum >= 234) break;
		}

	} 
	while (counter <= 5 || sum < 234);

	cout << counter << endl;
	cout << sum << endl;
	
	
	return 0;
}
