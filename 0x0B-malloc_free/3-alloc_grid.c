#include "main.h"



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
			for (i--; i >= 0; i --)
				free(dd[i]);
			free(dd);
				return(NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dd[i][j] = 0;
	}
return (dd);
}
