#include "main.h"

/**
 * clear_bit - function to set the value of a bit at 0
 * @n: pointer to value to modifiy
 * @index: position of the bit to clear
 * Return: 1 if it worked, -1 if it failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
