#include"main.h"

/**
 * _strspn - length of a prefix substring
 * @s: initial string
 * @accept: number of bytes to length
 * Return: prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int match = 0;

	while (s[i] != '\0')
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (match);
		}
		i++;
	}
	return (match);
}
