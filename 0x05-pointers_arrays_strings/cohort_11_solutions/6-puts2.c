#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other (odd)character of a string
 * @str: the string
 */
void puts2(char *str)
{
	int n = 0, len = 0;

	while (str[n] != '\0')
	{
		n = n + 1;
		len = len + 1;
	}
	for (n = 0; n < len; )
	{
		_putchar(str[n]);
		n = n + 2;
	}
	_putchar('\n');
}

