#include"main.h"

/**
 * _strncat - add two strings, n byte max
 * @dest: ok
 * @src: ok
 * @n: number of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int i;

	while (dest[len1] != '\0')
		len1++;
	for (i = 0 ; i < n && src[i] != '\0'; i++)
		dest[i + len1] = src[i];
	return (dest);
}
