#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - return pointer to a 2d array
 * @width: presents columns
 * @height: presents rows
 *
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			if (grid[j] == NULL)
			{
				return (NULL);
			}
			grid[i][j] = 0;
		}
	}
	return (grid);
}

