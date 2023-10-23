#include"main.h"
#include<stdio.h>

/**
 * rev_string - reverse a string
 * @s: vairable to reverse
 *
 */

void rev_string(char *s)
{
	int len = 0;
	int start;
	int end;

	while (s[len] != '\0')
	{
		len++;
	}

	start = 0;
	end = len - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
