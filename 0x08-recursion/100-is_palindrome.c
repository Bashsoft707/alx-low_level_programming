#include "main.h"

/**
 * _strlen_recursion - printslength of a string
 * @s: string to print lenght
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palidrome_finder - find palidrome
 * @s: string s
 * @l: input l
 * Return: return 1 if palidrom, otherwise 0
 */

int palidrome_finder(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + 1))
		return (palidrome_finder(s + 1, l - 2));
	return (0);
}

/**
 * is_palidrome - return if string is palidrome or not
 * @s: input string
 * Return: 1 or 0
 */

int is_palidrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palidrome_finder(s, len - 1));
}
