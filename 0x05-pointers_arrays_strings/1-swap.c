#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: Integer a
 * @b: Integer b
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
