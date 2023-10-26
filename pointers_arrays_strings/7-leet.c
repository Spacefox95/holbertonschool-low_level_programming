#include"main.h"

/**
 * leet - encode a string into 1337
 * @str: string to change
 * Return: ok
 */

char *leet(char *str)
{
	int letter[11] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	int number[11] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i, j;

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		for (i = 0 ; letter[i] != '\0' ; i++)
		{
			if (str[j] == letter[i])
				str[j] = number[i];
		}
	}
	return (str);
}

