#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: input string to search in
 * @c: input character to locate into string s
 * Return: returns pointer
 */

char *_strchr(char *s, char c)
{
	while (*s != 0)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
