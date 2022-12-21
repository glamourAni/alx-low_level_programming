#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string
 */
void print_rev(char *s)
{
	int len = 0;

	/* find the length of s */
	while (s[len] != '\0')
	{
		len = len + 1;
	}

	/* print s in reverse */
	while (len-- > 0)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
