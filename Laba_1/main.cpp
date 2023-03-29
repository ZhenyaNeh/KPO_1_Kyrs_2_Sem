#include <iostream>
#include "Header.h"
#include<windows.h>
using namespace std;

void main()
{
	while (true)
	{
		HANDLE hColor = GetStdHandle(STD_OUTPUT_HANDLE);
		int date, amounthOfDays;
		SetConsoleTextAttribute(hColor, 7);
		cout << "Write date according to the template (DDMMYYYY)\n";
		cin >> date;

		int year = date % 10000;
		int month = date / 10000 % 100;
		int day = date / 1000000;

		
		if (cin.get() != (int)'\n') //ѕроверка введенных данных на наличие символов
		{
			cout << "!!!Error!!! \n!!!You make a mistake!!!\n";
			cout << "Please, try again  to write the date according to the tamplate (DDMMYYYY, exemple 01010001)\n\n";
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
	
		else if (dateSpellingCorrect(day, month, year) == 1) //проверка на соблюдени€ шаблона DDMMYYYY
		{
			cout << "!!!Error!!! \n!!!You make a mistake!!!\n";
			cout << "Please, try again  to write the date according to the tamplate (DDMMYYYY, exemple 01010001)\n\n";
			cin.clear();
			continue;
		}
		else
		{
			SetConsoleTextAttribute(hColor, 14);
			cout << "\n\nLEAP YEAR CHECK....\n";	//проверка на високосеость
			SetConsoleTextAttribute(hColor, 7);
			if (leapYearCheck(year) == 1)
				cout << year << " - Tt's a leap year!!!\n";
			else 
				cout << year << " - Tt's not a leap year!!!\n";

			SetConsoleTextAttribute(hColor, 11);
			cout << "\n\nWHAT DAY OF THE YEAR....\n"; //какой день в году
			SetConsoleTextAttribute(hColor, 7);
			cout << "It's the " << serialNumber(day, month, year) << "th day of the year\n";

			SetConsoleTextAttribute(hColor, 12);
			cout << "\n\nHOW MANY DAYS IS MY BIRTHDAY....\n";//когда мой день нарадженн€
			SetConsoleTextAttribute(hColor, 7);
			if (serialNumber(day, month, year) <= serialNumber(28, 1, year))
			{			
				amounthOfDays = serialNumber(28, 1, year) - serialNumber(day, month, year);
				cout << amounthOfDays << " - days left until my birthday!!!\n\n";
			}
			else
			{
				amounthOfDays = 365 + leapYearCheck(year) - serialNumber(day, month, year) + serialNumber(28, 1, year + 1);
				cout << amounthOfDays << " - days left until my birthday!!!\n\n";
			}
			break;
		}
	}
}