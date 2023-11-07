#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - return a pointer to a 2d array
 * @width: the width of the array
 * @height: the height of the array
 * Return: the pointer of the array
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * width);

	if (matrix == NULL)
		return (NULL);

	for (i = 0 ; i < width ; i++)
	{
		matrix[i] = malloc(sizeof(int) * height);

		if (matrix[i] == NULL)
		{
			for (j = 0 ; j < i ; j++)
				free(matrix[j]);
		free(matrix);
		return (NULL);
		}

		for (j = 0 ; j < height ; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
