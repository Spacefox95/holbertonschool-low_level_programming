#include"main.h"

/**
 * _memset - fills memery with constant byte
 * @s: place where the memory has to be filled
 * @b: the constant byte
 * @n: number of byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
