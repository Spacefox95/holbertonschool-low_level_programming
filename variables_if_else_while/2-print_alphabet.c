#include <stdio.h>

/**
 * main - Test
 * Return: Always 0 (Success)
 */

int main(void)

{
	char n = 'a';
	char x = '\n';
	{
	for (n = 'a' ; n <= 'z'; n++)
		putchar(n);
	}
	putchar(x);

	return (0);
}
