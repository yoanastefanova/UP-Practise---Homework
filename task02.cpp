// task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int months;
	double loan, interestRate;
	double monthPay, monthRate, interestPercent, totalPay;
	double sum = 1;
	cout << "Value for loan = ";
	cin >> loan;
	cout << "Number of months = ";
	cin >> months;
	cout << "Interest rate = ";
	cin >> interestRate;

	monthRate = interestRate / 12;
	interestPercent = 1 + monthRate / 100;	


	for (int i = 1; i <= months; i++)
	{
		sum = sum * interestPercent;
	}

	totalPay = loan * sum;
	monthPay = totalPay / months;

	cout << "Monthly interest rate= " << monthRate << endl;
	cout << "Interest percent = " << interestPercent << endl;
	cout << "Monthly payment = " << monthPay << endl;
	cout << "The total amount to be returned= " << totalPay << endl;
	


	return 0;
}

