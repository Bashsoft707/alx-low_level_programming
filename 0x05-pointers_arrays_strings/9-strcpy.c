#include "main.h"

/**
 * _strcpy - function thst copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed by the dest
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
