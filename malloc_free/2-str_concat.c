#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * str_concat - function that concatenate two strings
 * @s1: first function
 * @s2: second function
 * Return: the pointer with concatenates strings
 */


char *str_concat(char *s1, char *s2)
{
	int i;
	int len_1 = 0;
	int len_2 = 0;
	char *d;

	while (s1[len_1] != '\0')
		len_1++;
	while (s2[len_2] != '\0')
		len_2++;

	d = malloc((len_1 + len_2 + 1) * sizeof(*d));

	if (d == NULL)
		return (NULL);

	for (i = 0 ; i < len_1 ; i++)
		d[i] = s1[i];
	for (i = 0 ; i < len_2 ; i++)
		d[len_1 + i] = s2[i];
	d[len_1 + len_2] = '\0';
	return (d);
}
