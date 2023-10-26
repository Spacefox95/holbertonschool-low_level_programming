#include"main.h"

/**
 * _strchr - locate a character in a string
 * @s: the string
 * @c: the character to find
 * Return: the character
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return ('\0');
}
