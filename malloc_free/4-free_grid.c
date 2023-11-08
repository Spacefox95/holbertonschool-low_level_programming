#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * free_grid - function to free a 2 dimensional grid
 * @grid: pointer to the grid
 * @height: the eight of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)

	for (i = 0 ; i < height ; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}
	free(grid);
}
