#include <iostream>
#include "Header.h"

using namespace std;

int serialNumber(int day, int month, int year) //количество дней
{
	int amountOfDays = 0;
	int mDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (leapYearCheck(year) == 1)
		mDays[1] = 29;

	for (int i = 0; i < month - 1; i++)
		amountOfDays += mDays[i];

	amountOfDays += day;
	return amountOfDays;
}