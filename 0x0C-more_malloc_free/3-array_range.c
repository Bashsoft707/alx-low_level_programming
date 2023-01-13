#include <stdio.h>
#include "main.h"

/**
 * array_range - function that creates an array of integer
 * @min: minimum number
 * @max: maximum number
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *new_array;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;
	new_array = malloc((diff + 1) * sizeof(int));

	if (new_array == Null)
		return (NULL);

	for (i = 0; i <= diff; i++)
		new_array[i] = min++;

	return (new_array);
}
