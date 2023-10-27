#include"main.h"
#include<stdio.h>

/**
 * print_diagsums - print
 * @a: ok
 * @size: ok
 *
 */

void print_diagsums(int *a, int size)
{
	int main = 0;
	int second = 0;
	int i;

	for (i = 0 ; i < size ; i++)
	{
		main += a[i * size + i];
		second += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", main, second);
}
