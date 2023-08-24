#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 * Return: the encoded string
 */
char *leet(char *str)
{
	int i;
	char leet_table[256] = {0};

	/* initialize leet table */
	leet_table['a'] = leet_table['A'] = '4';
	leet_table['e'] = leet_table['E'] = '3';
	leet_table['o'] = leet_table['O'] = '0';
	leet_table['t'] = leet_table['T'] = '7';
	leet_table['l'] = leet_table['L'] = '1';

	/* iterate over string and encode using leet table */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet_table[str[i]] != 0)
		{
			str[i] = leet_table[str[i]];
		}
	}
	return (str);
}
