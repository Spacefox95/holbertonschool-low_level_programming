#include"main.h"

/**
 * _strcat - add src to dest
 * @dest: ok
 * @src: la source
 * Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0')
		len2++;

	for (i = 0 ; i < len2 ; i++)
		dest[i + len1] = src[i];
	dest = dest + '\0';
	return (dest);
}

