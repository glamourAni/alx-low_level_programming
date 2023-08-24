#include "main.h"

/**
 * _puts - writes a string and a trailing newline to stdout
 * @str: a string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
