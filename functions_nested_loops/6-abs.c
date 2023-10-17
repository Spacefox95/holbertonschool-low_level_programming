#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _abs - computes the absolute value of integer
 * @r: character to check
 * Return: 0 (Success)
 *
 */

int _abs(int r)

{
	if (r > 0)
		return (r);
	else if (r < 0)
		return (-r);

	return (0);
}
