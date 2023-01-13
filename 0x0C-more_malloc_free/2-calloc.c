#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory in a multiple of some size
 * @nmemb: number of memory blocks
 * @size: size of blocks
 * Return: pointer to allocate dmemory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	ret = malloc(nmemb * size);

	if (ret == 0)
		return (0);

	for (i = nmemb * size, ptr = ret; i; i--)
		*ptr++ = 0;
	return (ret);
}
