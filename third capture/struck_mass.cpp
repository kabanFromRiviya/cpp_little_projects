// strruct_of_ candy.cpp : созддаем стрктуру CandyBar и заполняем ее данными о названии, колориях и весе
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct CandyBar
	{
		string name;
		double weight;
		int kalor;
	};

	CandyBar snack[3]
	{
	{ "Mocha Moch",1.31,300},
	{"Rafaello", 2.3, 240},
	{"Barborys", 0.8, 500}
	};

	cout << "Candy name: " << snack[0].name << endl;
	cout << snack[0].name << " weight: " << snack[0].weight << endl;
	cout << snack[0].name << " calory: " << snack[0].kalor << endl;
	cout << endl;
	cout << "Candy name: " << snack[1].name << endl;
	cout << snack[1].name << " weight: " << snack[1].weight << endl;
	cout << snack[1].name << " calory: " << snack[1].kalor << endl;
	cout << endl;
	cout << "Candy name: " << snack[2].name << endl;
	cout << snack[2].name << " weight: " << snack[2].weight << endl;
	cout << snack[2].name << " calory: " << snack[2].kalor << endl;
}

