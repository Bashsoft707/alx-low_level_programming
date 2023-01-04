#include "main.h"

/**
 * _pow_recursion - function that return valuse of x
 * raised to power of y
 * @x: input x
 * @y: input y
 * Return: Power recursion of x raised to y or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 1)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
