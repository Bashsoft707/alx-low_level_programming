#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: An integer input
 * Description: Can only use _putchar to print
 */

void print_number(int n)
{
	long a, b;
	int c;

	b = n;

	if (b < 0)
	{
		b *= -1;
		_putchar('_');
	}

	a = 1;
	c = 1;

	while (c)
	{
		if (b / (a * 10) > 0)
			a *= 10;
		else
			c = 0;
	}

	while (b >= 0)
	{
		if (a == 1)
		{
			_putchar(b % 10 + '0');
			b = -1;
		}
		else
		{
			_putchar((b / a % 10) + '0');
			a /= 10;
		}
	}
}
