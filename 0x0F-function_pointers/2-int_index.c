#include <stdio.h>

/**
 * int_index - check an array for an integer that matches
 * the function defined by cmp
 * @array: array
 * @size: size of array
 * @cmp: comparison
 * Return index of match, otherwise -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);

	return (-1);
}
