// chiken_struck.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	struct Chiken
	{
		string nameOfCompany;
		double weight;
		double diam;
	};
	
	Chiken *first_company = new Chiken;
	cout << "Enter the name of company: ";
	getline(cin, (*first_company).nameOfCompany);
	cout << "Enter weight of the chiken: ";
	cin >> (*first_company).weight;
	cout << "Enter diametr of the chiken: ";
	cin >> (*first_company).diam;
	cout << "----------------------------------------------" << endl;
	cout << "Name of the company: " << (*first_company).nameOfCompany << endl;
	cout << "Weight: " << (*first_company).weight << endl;
	cout << "Diametr: " << (*first_company).diam << endl;
	
	

}

