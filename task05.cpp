// task05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	int sum = 0;
	int counter = 0;
	bool flag = false;



	for (int i = n; i <= m; i++)//обикаля числата от дадения интервал
	{

		for (int j = 1; j < i; j++)//обикаля възможните делители на числата
		{
			if (i%j == 0) sum = sum + j;//ако е делител, се прибавя към сумата

			{
				if (sum < 2) flag = false;

				for (int q = 2; q*q <= sum; q++)
				{
					if (sum % q == 0) flag = false;

					else flag = true;
				}

			}

		}
		if (flag) counter++;	
	}
	
	cout << counter << endl;


	return 0;
}



