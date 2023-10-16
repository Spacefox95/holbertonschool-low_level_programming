#include <stdio.h>
/**
 * main - Destination
 * Return: Always 0 (Success)
 */

int main(void)

{
	char n = 'a';
	char t = 'A';
	char x = '\n';
	{
		for (n = 'a' ; n <= 'z'; n++)
			putchar(n);
		for (t = 'A' ; t <= 'Z'; t++)
			putchar(t);
	}
	putchar(x);
	return (0);
}
