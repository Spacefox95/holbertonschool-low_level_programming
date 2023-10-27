#include"main.h"

/**
 *
 *
 *
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0; /* Index for iterating through the input string 's' */
	int j; /* Index for iterating through the 'accept' string */
	char *match = '\0'; /* Initialize the match pointer to NULL */

	while (s[i] != '\0') /* Loop through the characters of the input string 's' */
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				match = &s[i];/*Set the match pointer and break the loop */
			}
		j++;
		}
	i++;
	}
	return (match);
}
