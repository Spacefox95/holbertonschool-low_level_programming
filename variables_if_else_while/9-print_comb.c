#include <stdio.h>
/**
 * main - Destination
 * Return: Always 0 (Success)
 */

int main(void)

{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
		if (n <= 56)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');
	return (0);
}
