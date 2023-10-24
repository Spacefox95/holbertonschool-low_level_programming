#include"main.h"
#include<stdio.h>

/**
 * print_array - print an array
 * @a: element of the array
 * @n: number of element in the array
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
