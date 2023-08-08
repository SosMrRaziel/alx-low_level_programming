#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: pointer to pointer of integer.
 * @height: height of grid.
 *
 * Return: Nothing.
 */


void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
