#include "main.h"

/**
 * get_bit - give the value of the bit at a given index
 * @index: position of the bit you want to get
 * @n: the value of the bit you want to get
 * Return: n, or -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
