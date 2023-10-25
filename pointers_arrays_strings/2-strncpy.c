#include"main.h"

/**
 * _strncpy - copy a string of n char
 * @dest: ok
 * @src: ok
 * @n: number of bytes
 * Return: ok
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
