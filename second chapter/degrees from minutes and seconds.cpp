// degrees from minutes and seconds.cpp : программа переводит из широты в градусы//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	const double angleMintes = 60; // в одной минуте 60 угловых секунд
	const double sec = 3600; //в одном градусе 60 угловых минут
	double degrees, minutes, seconds,degree;

	cout << "Enter a latitudein degrees, minutes, and seconds : " << endl;
	cout << "First, enter the degrees : ";
	cin >> degree;
	cout << endl;
	cout << "Next, enter the minutes of arc : ";
	cin >> minutes;
	cout << endl;
	cout << "Finally, enter the second of arc : ";
	cin >> seconds;
	degrees = degree + (minutes / 60) + (seconds / 3600);
	cout << degree << " degrees," << minutes << " minutes," << seconds << " seconds"
		<< " = " << degrees << "degrees";
}
