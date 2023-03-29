#include <iostream>
#include "Header.h"


int dateSpellingCorrect(int day, int month, int year)
{
	int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (leapYearCheck(year) == 1)//проверка на високосность
		monthDays[1] = 29;

	if (month <= 0 && month > 12)//правильность написания месяцев
		return 1;
	else if (day <= 0 || day > monthDays[month - 1])//правильность написания дней
		return 1;
	else return 0;
}