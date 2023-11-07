#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements of the array
 * @size: bytes size
 * Return: pointeur to the allocated memory, else NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p = 0;

	if (nmemb == '0' && size == '0')
		return (NULL);

	p = malloc((nmemb * size) * sizeof(*p));

	if (p == NULL)
		return (NULL);
	return (p);
}
