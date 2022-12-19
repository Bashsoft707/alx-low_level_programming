#include "main.h"

/**
 * _strlen -function that return the lenght of a string
 * @c: Character c
 * Return: Nothing
 */

void _strlen(char *c)
{
	int len = 0;

	while (c[len] != '\0')
		len++;
	return (len);
}
