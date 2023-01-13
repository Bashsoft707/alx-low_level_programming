#include <stdlib.h>
#include "main.h"

/**
 * calloc - allocate memory in a multiple of some size
 * @nmeb: number of memory blocks
 * @size: size of blocks
 * Retuen: pointer to allocate dmemory block
 */

void *calloc(unsigned int nmeb, unsigned int size)
{
	void *ret;
	char *ptr;
	unsigned int i;

	if (nmeb == 0 || size == 0)
		return (0);

	ret = malloc(nmeb * size);

	if (ret == 0)
		return (0);

	for (i = nmeb * size, ptr = ret; i; i--)
		*ptr++ = 0;
	return (ret);
}
