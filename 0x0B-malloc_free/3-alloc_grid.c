#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width
 * @height: height
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (j = 0; j < height; j++)
	{
		grid[j] = malloc(sizeof(int) * width);
		if (grid[j] == NULL)
		{
			while (j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			grid[j][k] = 0;
	}
	return (grid);
}
