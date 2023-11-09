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
	char *a;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = malloc(sizeof(char *) + (s1[len1] + s2[len2] + 1));

	if (a == NULL)
		return (NULL);

	for (; s1[len1] != '\0' ; len1++)
		a[len1] = s1[len1];

	for (; s2[len2] != '\0' ; len2++)
	{
		if (n >= len2)
		{
			a[len1 + len2] = s2[len2];
		}
		if (n < len2)
		{
			a[len1 + len2] = s2[n];
		}
	}

	a[len1 + len2]  = '\0';
	return (a);
}
