// count_numbers.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 1;
	int num;
	cin >> num;
	while (num != 0)
	{
		cout << "Count of the eentered numbers: " << count << endl;
		count++;
		cin >> num;

	}
}