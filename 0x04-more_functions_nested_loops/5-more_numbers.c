#include  <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 * Return: x10 01234567891011121314
 */

void more_numbers(void)
{
	int num, i;

	i = 0;
	while (i < 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) +  '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
		i = i + 1;
	}
}
