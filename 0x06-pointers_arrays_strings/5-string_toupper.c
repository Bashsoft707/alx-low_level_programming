#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters of a
 * string to uppercase
 * @c: c string
 * Return: Always 0
 */

char *string_toupper(char *c)
{
	char *start = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		c++;
	}
	return (start);
}
