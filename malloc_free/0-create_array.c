#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array of char and initialize it with specific char
 * @size: size of the array
 * @c: the character to initialize the array
 * Return: ok
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == '0')
	{
		return (NULL);
	}

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0 ; i < size ; i++)
	{
		a[i] = c;
	}

	return (a);
}
