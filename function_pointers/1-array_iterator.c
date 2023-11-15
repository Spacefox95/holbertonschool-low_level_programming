#include"function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function given
 * @array: pointer to a the array
 * @size: size of the array
 * @action: pointer to a function that takes an int pointer as a parameter
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0 ; i < size ; i++)
			action(*(array + i));
}
