// uzortockazvezdochka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int row = 0;
	cout << "Enter the rows : ";
	cin >> row;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row - i - 1; j++)
			cout << '.';
		for (int j = row - i - 1; j < row; j++)
			cout << '*';
		cout << endl;
	}
}

