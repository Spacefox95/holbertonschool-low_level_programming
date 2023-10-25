#include"main.h"
#include<ctype.h>

/**
 * _atoi - convert string to an int
 * @s: var
 * Return: success
 */

int _atoi(char *s)
{

	int res = 0;
	int sign = -1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res -= (s[i] - '0');
		}
		else if (res != 0)
			break;
		i++;
	}
	return (res * sign);
}
