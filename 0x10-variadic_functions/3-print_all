#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * printf_char - prints a char from var args
 * @list: list to print from
 * Return: Void
 */

void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - print an int fro var args
 * @list: list yo print from
 * Return: Void
 */

void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - print a float from va args
 * @list: list to print from
 * Return: void
 */

void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * print_string - print string from va args
 * @list: list to print from
 * Return: void
 */

void printf_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - function that prints everything
 * @format: list of types of argument passed to the functions
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{'c', printf_char},
		{'i', printf_int},
		{'f', printf_float},
		{'s', printf_string},
		{NULL, NULL}
	};
	va_list list;
	char *separator = "";

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
