// task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	if (number % 2 != 0)
	{
		for (int i = 1; i <= number; i++)//редове
		{
			for (int k = 1; k <= number; k++)
			{
				if (i == 1 || i == number|| i == k || k == number - i + 1)
				{
					cout << "*";
				}
				 else cout << " ";
			}

			cout << endl;
		}
	}
	else cout << "Error! You should enter an odd number.";
}
	//else cout << "Error! Enter an odd number!";
	
		
	
	



	  

