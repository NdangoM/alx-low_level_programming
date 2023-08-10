#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid != NULL || height != 0)
	{
		for (row = 0; row < height; row++)
		{
			free(grid[row]);
		}
		free(grid);
	}
}
