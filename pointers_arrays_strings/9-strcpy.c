#include"main.h"

/**
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
