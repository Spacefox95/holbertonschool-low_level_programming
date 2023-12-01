#include "main.h"

/**
 * binary_to_uint - converts binary number to an uint
 * @b: pointing to the string of 0 and 1 chars
 * Return: the converted number, or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result += b[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (result);
}
