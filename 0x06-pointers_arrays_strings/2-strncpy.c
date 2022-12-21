#include "main.h"

/**
 * *_strncpy - function that copy a string starting from index
 * 0 of dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to copy over
 * Return: dest edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
