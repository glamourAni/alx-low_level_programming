#include "main.h"

/**
 * puts2 - prints every even character in a string and leaves out the odd
 * @str: a string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!(i % 2))
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
