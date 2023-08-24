#include "main.h"

/**
 * print_numbers - prints numbers 0-9, followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		_putchar(num + '0');
		num = num + 1;
	}
	_putchar('\n');
}
