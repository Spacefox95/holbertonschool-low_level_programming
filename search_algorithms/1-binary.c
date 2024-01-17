#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @i: counter of the array
 * @j: the array size
 */
void print_array(int *array, size_t i, size_t j)
{

	printf("Searching in array: ");
	while (i <= j)
	{
		printf("%d", array[i]);
		++i;
		if (i <= j)
			printf(", ");
	}
	printf("\n");
}


/**
 * binary_search - search for a value using binary search
 * @array: the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index of value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t range, i = 0;
	int middle;

	if (!array)
		return (-1);

	range = size - 1;

	if (array)
	{
		while (i <= range)
		{
			print_array(array, i, range);
			middle = (i + range) / 2;

			if (array[middle] < value)
				i = middle + 1;
			else if (array[middle] > value)
				range = middle - 1;
			else
				return (middle);
		}
	}
	return (-1);
}
