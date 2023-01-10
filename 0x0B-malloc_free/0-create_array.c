#include "main.h"

/**
 * create_array - function that creates an array
 * of characters and intialize with a specific char
 * @size: size of array
 * @c: character to be initialized
 * Return: pointer to array of null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (size == NULL)
		return (NULL);

	if (size == 0)
		return (0);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
