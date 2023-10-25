#include"main.h"

/**
 * _strcpy - function to copy a string
 * @dest: the destination of the copy
 * @src: the string that have to be copied
 * Return: success
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != 0)
		len++;
	
	for (i = 0 ; i < len ; i++)
		dest[i] = src[i];
	return (dest);
}
