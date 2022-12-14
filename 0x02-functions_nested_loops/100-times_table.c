#include "main.h"

/**
 * print_times_table - Check main
 * @n: An integer n
 * Description: prints times table for number from 0 to 14
 * Return: Nothign
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
				putformat(i * j);
			_putchar('\n');
		}
	}
}

/**
 * putformat - Format characters to output
 * @n: An integer n
 * Return: Nothing
 */

void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(', ');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	esle if (n > 9 && n <= 99)
	{
		_putchar(', ');
		_putchar(' ');
		_putchar(' ');
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(', ');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
