#include "main.h"

/**
 * print_line - a function that draws a line in the terminal
 * @n: An integer an
 * Description: Can only use _putchar to print
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
