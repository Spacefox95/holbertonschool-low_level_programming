#include "main.h"

/**
 * _strlen - function to count string
 * @s: strings to length
 * Return: result
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
