#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum values included
 * @max : max values
 * Return: the pointer to the new array, else NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
		return (NULL);

	a = malloc((max - min - 1) * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (i = 0 ; i <= max - min ; i++)
		a[i] = min + i;

	return (a);
}
