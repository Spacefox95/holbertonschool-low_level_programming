#include"main.h"

/**
 * swap_int - inverse the variable value
 * @a: first value
 * @b: second value
 *
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;

}
