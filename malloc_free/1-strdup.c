#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _strdup - copy a string and returns a pointer
 * @str: the string to duplicate
 * Return: Copy of the string, else NULL
 */

char *_strdup(char *str)
{
	char *tmp;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	tmp = malloc((len + 1) * sizeof(*tmp));

	if (tmp == NULL)
		return (NULL);

	for (i = 0 ; i < len ; i++)
	{
		tmp[i] = str[i];
	}
	tmp[len] = '\0';
	return (tmp);
}
