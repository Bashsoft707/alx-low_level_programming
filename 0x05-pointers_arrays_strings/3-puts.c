#include  "main.h"

/**
 * _puts -function that prints a string,
 * followed  by a new line
 * @str: An inout string
 * Return: Nothing
 */

void _puts(int *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
