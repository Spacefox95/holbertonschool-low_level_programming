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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	
	
		s++;
	}
	return ('\0');
}
