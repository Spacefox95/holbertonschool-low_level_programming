#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints Alphabet
 * @print_alphabet - the letter to be checked
 *
 */

void print_alphabet(void)
{
	int n;
	{
		for (n = 97 ; n < 123 ; n++)
			_putchar(n);
	}
	_putchar('\n');
}
