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
	char *tmp = dest;

	while (*src)
		*dest++ = *src++;
	return (tmp);
}
