// mass two sell  book C++.cpp : считает проданные книги за все время и так же по годам 

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

const int months = 12;
const int years = 3;

int main()
{
	int sum_1 = 0;
	int sum_2 = 0;
	int sum_3 = 0;
	int sum = 0;
	string month[months] =
		{
		"January","Febrary","March","Aprel","May",
		"June","July","August","September","October",
		"November","December"
		};
	int sell_books[3][12];
	for (int i = 0; i < years; i++) //вводим данные в массив целочисленный используя 
	{								//строковый массив для подстановки данные из строкового массива
		for (int j = 0; j < months; j++)
		{
			cout << "Year " << i << " month " << month[j] << ":  ";
			cin >> sell_books[i][j];
		}
	}
	for (int i = 0; i < 3; i++) //цикл считат сумму всех проданнных книг по годам и всех книш за три года 
	{
		for (int j = 0; j < 12; j++)
		{
			if (i == 0) {		
				sum_1 += sell_books[i][j];
			}
			if (i == 1) {
				sum_2 += sell_books[i][j];
			}
			if (i == 2) {
				sum_3 += sell_books[i][j];
			}
			sum += sell_books[i][j];
		}
	}
	cout << sum_1 << " Sum one year" << endl;
	cout << sum_2 << " Sum second year" << endl;
	cout << sum_3 << " Sum third year" << endl;
	cout << sum << " All years sum" << endl;
}