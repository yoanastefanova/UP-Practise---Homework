// task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int year;
	int month;
	bool flag = false;
	cin >> month;
	cin >> year;

	
	if ((year % 4 == 0 && year % 100 == 1 )|| year % 400 == 0 || (year % 400 == 0 && year % 100 == 0)) flag = true;
	switch (month)
	{
	case 1 : cout << "January has 31 days" << endl;
		break;
	case 2 : 
	if (flag)
	{
		cout << "February has 29 days" << endl;
	}
		
    else  

	{
		cout << "February has 28 days" << endl;
	}
	break;

	case 3: cout<< "March has 31 days" << endl; 
		break;
	case 4: cout << "April has 30 days" << endl;
		break;
	case 5: cout << "May has 31 days" << endl;
		break;

	case 6: cout << "June has 30 days" << endl;
		break;

	case 7: cout << "July has 31 days" << endl;
		break;

	case 8: cout << "August has 31 days" << endl;
		break;

	case 9: cout << "September has 30 days" << endl;
		break;

	case 10: cout << "October has 31 days" << endl;
		break;

	case 11: cout << "November has 30 days" << endl;
		break;

	case 12: cout << "December has 31 days" << endl;
		break;

	default: cout << "Incorrect input!" << endl;
		break;

	}



	return 0;
}

