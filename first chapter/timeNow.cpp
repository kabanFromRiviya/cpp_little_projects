// ConsoleApplication1.cpp : программа показывает врмя которое вы в нее введется
//

#include "pch.h"
#include <iostream>

using namespace std;

void timeNow(int, int);

int main()
{
	int hours, minutes;
	cout << "Enter the numbers of hours and minutes\n";
	cout << "Hours : ";
	cin >> hours;
	cout << endl;
	cout << "Minutes : ";
	cin >> minutes;
	timeNow(hours, minutes);
}

void timeNow(int a, int b) 
{
	cout << a << ":" << b;
}
