#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int h, w, i;
	int **grid;

	if (width  <= 0 || height  <= 0)
	{
		return (NULL);
	}
	grid = malloc((sizeof(int)) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int));
		if (grid[h] == NULL)
		{
			for (i = 0; i < h; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}

