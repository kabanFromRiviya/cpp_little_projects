// chiken_struck_mass_uka.cpp : создание структуры с помощью динамической фукции new 

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

	Chiken *company_ch = new Chiken[2];
	cout << "Enter the name of company: ";
	getline(cin, company_ch[0].nameOfCompany);
	cout << "Enter weight of the chiken: ";
	cin >> company_ch[0].weight;
	cout << "Enter diametr of the chiken: ";
	cin >> company_ch[0].diam;
	cout << endl;
	cin.get();
	cout << "Enter the name of company: ";
	getline(cin, company_ch[1].nameOfCompany);
	cout << "Enter weight of the chiken: ";
	cin >> company_ch[1].weight;
	cout << "Enter diametr of the chiken: ";
	cin >> company_ch[1].diam;
	cout << "----------------------------------------------" << endl;
	cout << "Name of the company: " << company_ch[0].nameOfCompany << endl;
	cout << "Weight: " << company_ch[0].weight << endl;
	cout << "Diametr: " << company_ch[0].diam << endl;
	cout << "----------------------------------------------" << endl;
	cout << "Name of the company: " << company_ch[1].nameOfCompany << endl;
	cout << "Weight: " << company_ch[1].weight << endl;
	cout << "Diametr: " << company_ch[1].diam << endl;
}

