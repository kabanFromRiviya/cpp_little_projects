// Age function.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int ageFunction(int);

int main()
{
	int ageInYear, ageInMonths;
	cout << "Enter your age : ";
	cin >> ageInYear;
	cout << endl;
	ageInMonths = ageFunction(ageInYear);
	cout << "Your age in months : " << ageInMonths;
	
}

int ageFunction(int ageIn) 
{
	return ageIn * 12;
}

