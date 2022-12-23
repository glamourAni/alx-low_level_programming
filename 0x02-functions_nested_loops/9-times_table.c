#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int m, n, times_table;

	m = 0;
	while (m < 10)
	{
		n = 0;
		while (n < 10)
		{
			times_table = m * n;
			if (times_table > 9)
			{
				_putchar((times_table / 10) + '0');
				_putchar((times_table % 10) + '0');
				if (n == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (n > 0)
				{
					_putchar(' ');
					_putchar(times_table + '0');
				}
				else
				{
					_putchar('0');
				}

				if (n == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			n = n + 1;
		}
		m = m + 1;
		_putchar('\n');
	}
}
