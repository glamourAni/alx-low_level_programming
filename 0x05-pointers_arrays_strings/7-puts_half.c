#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	/* Find the length of the string */
	int len = 0;

	while (str[len])
		len++;

	/* Calculate the starting index of the second half of the string */
	int start = (len - 1) / 2;

	if (len % 2 == 0)
		start++;

	/* Print the second half of the string */
	for (int i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
