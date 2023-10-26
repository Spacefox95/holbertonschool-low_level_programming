#include"main.h"

/**
 * *string_toupper - changes lower lowercase into uppercase
 * @str: the varable to change
 * Return: return the variable changed
 *
 */

char *string_toupper(char *str)
{
	char *x = str;

	while (*x != '\0')
	{
		if ('a' <= *x && *x <= 'z')
		{
			*x = *x + 'A' - 'a';
		}
	x++;
	}

	return (str);
}
