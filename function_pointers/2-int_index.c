#include"function_pointers.h"
#include<stdio.h>

/**
 * int_index - function to search for an integer
 * @array: the pointer of the array we are checking in
 * @size: number of elements in the array
 * @cmp: pointer of the function that compares values
 * Return: index where int is found, -1 if not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0 ; i < size ; i++)
		if (cmp(*(array + i)))
			return (i);
	return (-1);
}
