#include"main.h"

/**
 * _strstr - function to locate a substring
 * @haystack: string to check
 * @needle: string to find
 * Return: return the substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	unsigned int p = 0;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		i = 0;
		j = 0;
		while (*(needle + i) == *(haystack + j) && *(needle + i) != '\0')
		{
			i++;
			j++;
			p = *(needle + i);
		}
		if (p == '\0')
				return (haystack + j - i);
		haystack++;
	}
	return ('\0');
}
