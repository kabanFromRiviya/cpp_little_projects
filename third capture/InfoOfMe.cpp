// InfoOfMe.cpp : данная программа запрашивает ваши данные и выводит их  и вашу оценку
//
#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string first_name, last_name;
	int age;
	char grade;
	cout << "What is your first name : ";
	getline(cin, first_name);
	cout << "What is your last name : ";
	getline(cin,last_name);
	cout << "What letter grade do you deverve : ";
	cin >> grade;
	grade += 1;
	if (int(grade) == 91) {
		int(grade) = 89;
	}
	cout << "What is your age : ";
	cin >> age;
	cout << "Name : " << last_name << " , " << first_name << endl;
	cout << "Grade : " << grade << endl;
	cout << "Age : " << age << endl;
}
