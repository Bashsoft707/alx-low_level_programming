#include "main.h"

/**
 * *_strcat - concatenate two string
 * @dest: The destination char to concatenat to
 * @src: The src character
 * Return: Pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
