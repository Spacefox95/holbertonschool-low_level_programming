#include <stdio.h>

char *_strstr(char *, char *);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "First, solve the problem. Then, write the code.";
	char *f = "solve";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", (t == NULL ? "nil" : t));
	return (0);
}
