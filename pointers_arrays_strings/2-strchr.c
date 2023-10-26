#include"main.h"

/**
 *
 *
 *
 *
 *
 */

char *_strchr(char *s, char c)
{	
	while (*s != c)
	{
		s++;
		if (*s == c)
			break;
		else
			return ('\0');
	}
	return (*s);
}
