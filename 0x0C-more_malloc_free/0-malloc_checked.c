#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - malloc memory free and exit 98 on failure
 * @b: size to allocate
 * Return: pointer to allocated data
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
