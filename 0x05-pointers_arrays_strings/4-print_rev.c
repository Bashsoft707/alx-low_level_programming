#include "main.h"

/**
 * print_rev - function that print a string in reverse,
 * followed by a new line
 * @s: An input character s
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
