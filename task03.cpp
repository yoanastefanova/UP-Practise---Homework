// task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int digits = 0;//броят на цифрите
	int sum = 0;
	int dig;//цифрите
	int helper;
	helper = number;//на помощната присвояваме стойността на числото, за да я запазим

	
	while (number)
	{
		number = number / 10;
		digits++;//намира броя на цифрите
	}

	number = helper;//след като намерим броя на цифрите, на числото присвояваме стойността на помощната, която е приела първоначалната
	// стойност на въведеното число
	
	for (int i = 1; i <= digits; i++)
	{
		dig = number % 10;//последната цифра
		number = number / 10;//маха се последната цифра
		sum = sum + pow(dig, digits);//последната цифра на степен броя на цифрите в числото
	}
	if (sum == helper)
	{
		cout << "This number is narcissistic." << endl;

	}

	else cout << "This number isn't narcissistic." << endl;



	return 0;
}

