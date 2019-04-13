

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
//
struct NOTE {
	string name, secondName;
	int tele;
	int dateYear;
	int dateMongth, date;
};

int main()
{

	NOTE obj[10];
	cout << " Enter name, second name , telephone number, born year , month , date" << endl;
	for (int i = 0; i < 3; i++) {
		cout << " Note( " << i << ") " << endl;
		cin >> obj[i].name >> obj[i].secondName >> obj[i].tele >> obj[i].dateYear >> obj[i].dateMongth >> obj[i].date;
		cout << endl;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (obj[i].dateYear > obj[j].dateYear)
				swap(obj[i], obj[j]);

			else if (obj[i].dateYear == obj[j].dateYear && obj[i].dateMongth > obj[j].dateMongth)
				swap(obj[i], obj[j]);

			else if (obj[i].dateYear == obj[j].dateYear && obj[i].dateMongth == obj[j].dateMongth && obj[i].date > obj[j].date)
				swap(obj[i], obj[j]);
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << obj[i].name << " " << obj[i].secondName << " " << obj[i].tele << " " << obj[i].dateYear << " " << obj[i].dateMongth << " " << obj[i].date;
		cout << endl;
	}

	return 0;
}////