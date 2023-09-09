#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid array that was previously
 * created by your alloc_grid function.
 * @grid: location of the 2D array
 * @height: height of 2D array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}

	free(grid);
}
