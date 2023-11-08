#include"main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * string_nconcat - Concatenate two string until some point
 * @s1: first string to concatenate
 * @s2: second string to concatenate until n
 * @n: number of byte(s) to concatenant in string s2
 * Return: the pointer of the newly allocated space memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len_1 = 0;
	unsigned int len_2 = 0;
	char *d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[len_1] != '\0')
		len_1++;
	while (s2[len_2] != '\0')
		len_2++;

	d = malloc((len_1 + len_2 + 1) * sizeof(*d));

	if (d == NULL)
		return (NULL);

	for (i = 0 ; i < len_1 ; i++)
		d[i] = s1[i];

	if (n >= len_2)
	{
		for (i = 0 ; i < len_2 ; i++)
			d[len_1 + i] = s2[i];
	}
	else if (n < len_2)
	{
		for (i = 0 ; i < n ; i++)
			d[len_1 + i] = s2[i];
	}

	d[len_1 + len_2] = '\0';

	return (d);
}
