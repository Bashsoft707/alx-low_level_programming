#include "main.h"

/**
 * _atoi - function to convert a string to an integer
 * @s: Character array string
 * Description: Number in the string can be presided by an infinite
 * number of characters
 * You need to take account all -/+ signs before the number
 * If there are no numbers in the string, retrun 0
 * No need to check for overflow
 * Not allowed to hardcode special values
 * Return: First integer found in string
 */

int _atoi(char *s)
{
	int i, h = 0, p = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (h < 0)
				h = (h * 10) - (s[i] - '0');
			else
				h = (s[i] - '0') * -1;

			if (s[i + 1] < 48 && s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		h *= -1;

	return (h);
}
