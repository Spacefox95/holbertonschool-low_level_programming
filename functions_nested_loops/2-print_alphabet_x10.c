#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints Alphabet
 * @print_alphabet_x10 - the letter to be checked
 *
 */

void print_alphabet_x10(void)

{
	char n;
	int j;

	for (j = 0; j < 10; j++)
	{
		n = 'a';

		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
