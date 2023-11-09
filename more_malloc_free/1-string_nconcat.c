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
	char *a = NULL;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	a = malloc(sizeof(char) * (len1 + n + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0 ; i < len1 ; i++)
		a[i] = s1[i];

	if (n >= len2)
	{
		for (j = 0 ; j < len2 ; j++)
		a[i + j] = s2[j];
	}
	else if (n < len2)
	{
		for (j = 0 ; j < n ; j++)
			a[i + j] = s2[j];
	}

	a[i + j] = '\0';
	return (a);
	free(a);
}
