#include "main.h"

/**
 * *_strncat - function that concatenate two strings
 * @dest: Destination character
 * @src: Source character
 * @n: Number of bytes from src
 * Return: Pointer to the resulting destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}

	return (dest);
}
