#include "main.h"

/**
 * flip_bits - return number of bit needed to
 * flip from one number to another
 * @n: first number
 * @m: second number
 * Return: number of flipping bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
