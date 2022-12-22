#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters of a
 * string to uppercase
 * @c: c string
 * Return: Always 0
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (0);
}
