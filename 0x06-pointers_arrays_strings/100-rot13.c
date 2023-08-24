#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: a string
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char c;

	/* iterate over string and encode using ROT13 */
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			c += 13;
			if (c > 'z')
			{
				c -= 26;
			}
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c += 13;
			if (c > 'Z')
			{
				c -= 26;
			}
		}
		str[i] = c;
	}

	return (str);
}
