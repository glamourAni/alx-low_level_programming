#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all the words in a string.
 * @s: a string
 * Return: a capitalized string
 */
char *cap_string(char *s)
{
	int i;
	int is_separator = 1;/* defines the word separator as true */

	for (i = 0; s[i] != '\0'; i++)
	{
		/* check for the first letter of a word */
		if (is_separator && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 'a' + 'A';
			is_separator = 0;
		}
		/* check for a string separator */
		else if (s[i] == ',' || s[i] == '.' || s[i] == ';' || s[i] == '!'
				|| s[i] == '\n' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')'
				|| s[i] == '{' || s[i] == '}' || s[i] == ' ' || s[i] == '\t')
		{
			is_separator = 1;
		}
		/* do not capitalize other letters of the string */
		else
		{
			is_separator = 0;
		}
	}
	return (s);
}
