#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given position
 * @n: value to set
 * @index: position of the bit
 * Return: 1 of it worked, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | (1UL << index);
	return (1);
}
