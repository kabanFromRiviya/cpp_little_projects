// car struct new.cpp : программа будет запрашивать пользователя сколько машин он хотел бы включить в каталог и затем будет вссеэто выводить 

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int howManyCar;
	struct car
	{
		string nameOfCar;
		int year;
	};
	cout << "Enter how many you need include to catalog: ";
	cin >> howManyCar;
	cout << endl;
	car * catalog = new car[howManyCar];

	for (int i = 0; i < howManyCar; i++) {
		cout << "Enter the name of the car: ";
		cin.get();
		getline(cin,catalog[i].nameOfCar);
		cout << "Enter the of the car: ";
		cin >> catalog[i].year;
		cout << "-------------------------------------" << endl;
	}
	cout << endl;
	for (int i = 0; i < howManyCar; i++) {
		cout << catalog[i].year << " " << catalog[i].nameOfCar << endl;
	}
}
