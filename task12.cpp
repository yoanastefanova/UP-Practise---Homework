// task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int length;
	int current = 0;
	int days = 0;
	cin >> length;

	if (length >= 10 && length <= 101)
	{
		while (current < length)
		{
			days++;
			current = current + 2;

			if (current >= length) break;
			current -= 1;
		}

		cout << days << endl;
	} 
	else cout << "Incorrect input!" << endl;

	

	
	



	return 0;
}



