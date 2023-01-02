#include "main.h"

/**
 * _strpbrk - function that locates the first occurence in
 * a string s of an of the bytes in the string accept
 * @s: string to search
 * @accept: characters to look for
 * Return: pointer to first occurence of accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s != 0)
	{
		if (*s == *ptr && *ptr != 0)
			return (s);
		ptr++;
		if (*ptr == 0)
		{
			ptr = accept;
			s++;
		}
	}

	return (0);
}
