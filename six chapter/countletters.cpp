// countletters.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char ch;
	cout << "Enter the letter orr number <@ to exit>" << endl;
	cin >> ch;
	int stop;
	while (ch != '@') {
		
		if (isdigit(ch)) {
			stop = int(ch);
		}
		if (isupper(ch)) {
			ch = tolower(ch);
			cout << endl;
			cout << ch;
		}
		if (islower(ch)) {
			ch = toupper(ch);
			cout << endl;
			cout << ch;
		}
		cin.get(ch);
	}
}