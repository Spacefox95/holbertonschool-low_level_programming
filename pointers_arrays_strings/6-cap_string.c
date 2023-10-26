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

	while (*x != '\0')
	{
		if ('a' <= *x && *x <= 'z')
		{
			if (*(x - 1) == ',' ||
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
			*(x - 1) == '\n')
				*x = *x + 'A' - 'a';
		}
	x++;
	}
	return (str);
}
