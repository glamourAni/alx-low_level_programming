#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers 0-9
 * Return: 0-9, excluding 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		if ((num != 2) && (num != 4))
		{
			_putchar(num + '0');
		}
		num = num + 1;
	}
	_putchar('\n');
}
