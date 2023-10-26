#include"main.h"

/**
 * _memcpy - copies memory area
 * @dest: where the memory is copied
 * @src: where the memrory is copied from
 * @n: number of copied bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int b;

	while (src[b] <= src[n])
		b++;

	for (i = 0 ; i < b ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
