#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: pointer to a 2 dimensional array of integers.
 */


int **alloc_grid(int width, int height)
{
	int **dd;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	dd = (int **) malloc(height * sizeof(int **));
	if (dd == NULL)
	{
		free(dd);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		dd[i] = (int *) malloc(width * sizeof(int));
		if (dd[i] == NULL)
		{
			for (i--; i >= 0 ; i--)
				free(dd[i]);
			free(dd);
				return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dd[i][j] = 0;
	}
return (dd);
}
