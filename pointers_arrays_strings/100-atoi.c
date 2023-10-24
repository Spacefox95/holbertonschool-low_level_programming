#include"main.h"

/**
 * _atoi - convert string to an int
 * @s: var
 * Return: success
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (s[i] == '+' || s[i] == '-' || (s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-')
			sign = -1;
		else if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
