#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up grid allocates by alloc_grid
 * @grid: grid to free
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (!grid)
		return (0);
	if (!grid[0])
		return (0);
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}
