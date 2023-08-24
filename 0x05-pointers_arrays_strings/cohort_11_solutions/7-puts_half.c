#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	/* Find the length of the string */
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculate the starting index of the second half of the string */

	if (len % 2 == 0)
	{
		start = len / 2;
		while (start < len)
		{
			_putchar(str[start]);
			start = start + 1;
		}
	}
	else
	{
		start = (len + 1) / 2;

		while (start < len)
		{
			_putchar(str[start]);
			start = start + 1;
		}
	}
	_putchar('\n');
}
