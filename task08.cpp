// task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	
	int number;
	int helper;
	int digit;
	int helper1=0;
	
		cin >> number;
		if (number > 10 && number < 30000)
		{
			helper = number;//присвояваме на помощната променлива стойността, за да я запазим

			do
			{
				digit = number % 10;
				helper1 = (helper1 * 10) + digit;
				number = number / 10;
			} while (number);

			number = helper;//връщаме въведената стойност на числото, след като сме намерили броя на цифрите му

			if (number == helper1) cout << "The number is palindrome." << endl;
			else cout << "The number isn't palindrome." << endl;


		}

		else cout << "Incorrect input!" << endl;


	return 0;
}

