// seconds in days.cpp : переводит секунды в дни часы минуты и остатки секунд
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	long long seconds;
	cout << "Enter the number of seconds : ";
	cin >> seconds;
	cout << seconds / 86400 << " days " << (seconds % 86400) / 3600 << " hours " 
		<< (seconds % 3600) / 60 << " minutes " << seconds % 60 << " seconds ";
}

