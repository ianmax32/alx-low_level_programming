#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function frees a 2 dimensional grid
 * created by alloc_grid function
 * @grid:argument parameter for pointer to pointer of the grid
 * @height:argument paramater for height of the array
 * Return:0
 */

void free_grid(int **grid, int height)
{
	int a = 0;

	while (a < height)
		free(grid[a]);

	free(grid);
}
