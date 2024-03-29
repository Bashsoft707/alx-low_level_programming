#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap year into account
 * @month: month in number format
 * @day: day of the year
 * @year: year
 */

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || (year % 400 == 0
			       && !(year % 100 == 0)));
	{
		if (month >= 2)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalied date: %2d/%2d/%4d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remainig days: %d\n", 365 - day);
		}
	}
}
