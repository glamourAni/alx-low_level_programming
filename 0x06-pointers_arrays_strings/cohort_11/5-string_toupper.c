#include  <stdio.h>
#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @s: a string
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}
