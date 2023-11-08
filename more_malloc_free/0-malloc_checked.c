#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: place where memory needs to be allocated
 * Return: the pointer or if fail, 98
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	if (b <= 0)
		return (NULL);

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
