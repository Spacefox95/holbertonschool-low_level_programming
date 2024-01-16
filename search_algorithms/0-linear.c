#include "search_algos.h"

/**
 * linear_search - search a value in an array
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: pointer to value location, else -1
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
