#include"main.h"

/**
 * cap_string - transform first letter of words in uppercase
 * @str: ok
 * Return: ok
 *
 */

char *cap_string(char *str)
{
	char *x = str;
	int FirstChar = 1;

	while (*x != '\0')
	{
		if ('a' <= *x && *x <= 'z')
		{
			if (FirstChar ||
			*(x - 1) == ',' ||
			*(x - 1) == ';' ||
			*(x - 1) == '.' ||
			*(x - 1) == '!' ||
			*(x - 1) == '?' ||
			*(x - 1) == '"' ||
			*(x - 1) == '(' ||
			*(x - 1) == ')' ||
			*(x - 1) == '{' ||
			*(x - 1) == '}' ||
			*(x - 1) == ' ' ||
			*(x - 1) == '\t' ||
			*(x - 1) == '\n' ||
			*(x - 1) == x[0])
				*x = *x + 'A' - 'a';
		}
		if (FirstChar)
			FirstChar = 0;
	x++;
	}
	return (str);
}
