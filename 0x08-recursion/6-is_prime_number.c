#include "main.h"

/**
 * prime_finder - find out if number is a prime recursively
 * @x: input x
 * @y: input y
 * Return: 1 if prime, otherwise 0
 */

int prime_finder(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (prime_finder(x, y + 1));
}

/**
 * is_prime_number - function that returns 1 if the input
 * is a prime number otherwise return 0
 * @n: input number
 * Return: return 1 if prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}
