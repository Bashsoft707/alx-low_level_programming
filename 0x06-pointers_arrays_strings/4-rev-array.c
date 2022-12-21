#include "nmain.h"

/**
 * reverse_array - function that reverse the contents of an array
 * @a: An array of integers
 * @n: Number of elements of the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
