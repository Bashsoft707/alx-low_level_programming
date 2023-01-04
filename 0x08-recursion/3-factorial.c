#include "main.h"

/**
 * factorial - function that return the factorial
 * of a given number
 * @n: input number
 * Return: Factorial of number or 1 or -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
