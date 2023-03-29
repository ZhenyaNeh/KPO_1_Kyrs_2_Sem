#include <iostream>
#include "Header.h"

using namespace std;

int leapYearCheck(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))//проверка на високосность
		return 1;
	else
		return 0;
}