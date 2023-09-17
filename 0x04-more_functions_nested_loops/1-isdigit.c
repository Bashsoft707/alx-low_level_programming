#include "main.h"

/**
 * _isdigit - Check for digits, 0 to 9
 * @c: int type
 * Return: 1 if digit, 0 else
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
