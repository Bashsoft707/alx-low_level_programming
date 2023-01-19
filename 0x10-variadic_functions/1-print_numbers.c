#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: string to be printed bewtween numbers
 * @n: number of parameters
 * @...: other parameters
 * Return: All paramters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int nums;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		nums = va_arg(ap, int);
		printf("%d", nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
