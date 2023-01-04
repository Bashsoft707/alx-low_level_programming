#include "main.h"

/**
 * check_sqrt - dget if a number is square root of another
 * @x: input x
 * @y: input y
 * Return: sqrt of x or -1 if otherwise
 */

int check_sqrt(itn x, int y)
{
	if (y * y > x)
		return (-1);
	if (y * y == x)
		return (y);
	return (check_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: input number
 * Return: Number n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt(n, 0));
}
