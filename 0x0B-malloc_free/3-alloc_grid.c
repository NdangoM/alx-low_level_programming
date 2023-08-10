#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid -  pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Returns: 0
 */

int **alloc_grid(int width, int height)
{
	int row, col;
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
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			for (row = 0; row < height; row++)
			{
				free(grid);
				return (NULL);
			}
		}

		for (col = 0; col < width; col++)
		{
			grid[row][col] = 0;
		}
	}
		return (grid);
}
