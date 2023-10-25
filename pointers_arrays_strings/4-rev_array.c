#include"main.h"

/**
 * reverse_array - function to print content of an array in reverse
 * @a: name of the array
 * @n: number of element of the array
 */

void reverse_array(int *a, int n)
{
	int len = 0;
	int start = 0;
	int end = n - 1;
	int tmp = 0;

	while (len < n)
		len++;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
