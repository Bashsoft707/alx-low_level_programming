#include "main.h"

/**
 * _strlen -function that return the lenght of a string
 * @s: Character s
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
