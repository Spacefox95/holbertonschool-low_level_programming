#include <stdio.h>
/**
 * main - Destination
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;

	for (n = 97 ; n < 123 ; n++)
	{
		if (n != 113 && n != 101)
		{
			putchar(n);
		}
	}

	putchar('\n');
	return (0);
}
