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
	unsigned int *a;

	a = malloc(sizeof(*a) * b);

	if (a == NULL)
	{
		return ("98");
	}
	return (a);
}
